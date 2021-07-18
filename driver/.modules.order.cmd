cmd_/home/pi/ch9344driver_1.17/driver/modules.order := {   echo /home/pi/ch9344driver_1.17/driver/ch9344.ko; :; } | awk '!x[$$0]++' - > /home/pi/ch9344driver_1.17/driver/modules.order
