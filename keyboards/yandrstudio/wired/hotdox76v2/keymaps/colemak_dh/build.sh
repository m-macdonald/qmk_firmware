CURRENT_DIR=$(pwd)
USER_QMK_HOME=$(qmk config user.qmk_home)
QMK_HOME=${USER_QMK_HOME##*=}
echo 'Moving to QMK HOME'
cd $QMK_HOME
make yandrstudio/wired/hotdox76v2/leftkb:colemak_dh
make yandrstudio/wired/hotdox76v2/rightkb:colemak_dh
echo 'Builds complete'
echo 'Leaving QMK HOME'
cd $CURRENT_DIR
