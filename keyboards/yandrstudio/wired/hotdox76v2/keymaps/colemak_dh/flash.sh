#!/bin/sh

USER_QMK_HOME=$(qmk config user.qmk_home)
QMK_HOME=${USER_QMK_HOME##*=}
CONTROLLER_MODEL=atmega32u4
BOOTLOADER_DEVICE="Atmel Corp. $CONTROLLER_MODEL DFU bootloader"
SLEEP_DURATION=15
REBOOT_DURATION=5

poll_for_keyboard() {
  while true
  do
    if lsusb | grep "$BOOTLOADER_DEVICE"
    then
      break
    else
      echo 'Keyboard not yet found.'
      echo "Sleeping for $SLEEP_DURATION seconds"
      sleep $SLEEP_DURATION
    fi
  done
}

flash_keyboard() {
  KB_HAND=$1
  echo 'Starting flash'
  echo 'Erasing existing firmware'
  dfu-programmer $CONTROLLER_MODEL erase --force
  echo 'Firmware erased'
  echo 'Flashing new firmware'
  dfu-programmer $CONTROLLER_MODEL flash --force ${QMK_HOME}/yandrstudio_wired_hotdox76v2_${KB_HAND}kb_colemak_dh.hex
  echo 'New firmware flashed'
  echo 'Resetting microcontroller'
  dfu-programmer $CONTROLLER_MODEL reset
  echo 'Reset complete'
  echo 'flashing complete'
}

right () {
  echo 'Please put the right hand keyboard into bootloader mode'
  poll_for_keyboard
  flash_keyboard 'right'
}

left () {
  echo 'Please put the left hand keyboard into bootloader mode'
  poll_for_keyboard
  flash_keyboard 'left'
}

both () {
  echo "Flashing both keyboard hands"
  right
  echo "Sleeping for $REBOOT_DURATION seconds to allow right hand keyboard to reboot"
  sleep $REBOOT_DURATION
  left
}


echo "QMK Home: $QMK_HOME"
if [ "$1" = 'right' ]
then
  right 
elif [ "$1" = 'left' ]
then
  left
else
  both
fi
