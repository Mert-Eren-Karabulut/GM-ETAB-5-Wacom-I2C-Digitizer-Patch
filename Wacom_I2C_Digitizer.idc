##########################
#ETAB 5 pen#
##########################

# touch.deviceType = touchScreen | touchPad | pointer | default
touch.deviceType = default

# orientationAware
# touch.orientationAware = 0 or 1
touch.orientationAware = 1

#  gestureMode
# Definition: touch.gestureMode = pointer | spots | default
touch.gestureMode = spots

#Extras
device.internal = 1
touch.size.calibration = geometric
touch.pressure.scale = 0.002



#################
#filenaming info#
#################

#diagnostic info
#https://stackoverflow.com/questions/26021616/android-touchscreen-idc
# getevent -il /dev/input/event3  
#cat /proc/bus/input/devices

#name the file Vendor_XXXX_Model_YYYY_Version_ZZZZ.idc
#Replace XXXX , YYYY and ZZZZ with the information from $cat /proc/bus/input/devices

#cat /proc/bus/input/devices

#I: Bus=0018 Vendor=1b96 Product=1b05 Version=0100
#N: Name="NTRG0001:01 1B96:1B05 Pen"
#P: Phys=i2c-NTRG0001:01
#S: Sysfs=/devices/pci0000:00/INT33C3:00/i2c-1/i2c-NTRG0001:01/0018:1B96:1B05.0003/input/input28
#U: Uniq=
#H: Handlers=event12 mouse1 
#B: PROP=0
#B: EV=1b
#B: KEY=c03 1 0 0 0 0
#B: ABS=1000003
#B: MSC=10
