# GM-ETAB-5-Wacom-I2C-Digitizer-Patch
Patching .idc file in order to make wacom digitizer work both in landscape and portrait modes.


#What this file does?

This is an ```input device control``` file for android. Android system takes inputs from input devices and proccess them according to this .idc files. Every input device (Digitizer, cases with keyboard, bluetooth pointer devices etc.)
provides raw values to android about their positions, buttons, keys etc. . This values sometimes need to be mapped and/or configured in order to work properly.

#How to patch?

In order to copy the file to required directory root access is required. Or if you are an advanced user ADB push method also works but don't forget to adjust permissions correctly.
Coreect permissions are mandatory.

The file must be copied to ```/system/usr/idc/``` directory. After copying the file restart the device and check functionality in portrait mode. If stylus works then congrats. Otherwise check file permissions and try again.
