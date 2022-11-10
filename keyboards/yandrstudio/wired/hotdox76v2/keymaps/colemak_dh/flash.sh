KB_HAND=$1
USER_QMK_HOME=$(qmk config user.qmk_home)
QMK_HOME=${USER_QMK_HOME##*=}
CONTROLLER_MODEL=atmega32u4 

if [ "$KB_HAND" != 'right' ] && [ "$KB_HAND" != 'left' ]
then
	echo 'Invalid keyboard hand provided'
	exit
fi
echo $KB_HAND
echo $QMK_HOME
echo 'Valid hand provided'
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
