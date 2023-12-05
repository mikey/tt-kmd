## Tenstorrent AI Kernel-Mode Driver

Supported hardware: Grayskull & Wormhole

The driver registers device files named /dev/tenstorrent/%d, one for each enumerated device.

### To install:

0. You must have dkms installed.
1. sudo dkms add .
2. sudo dkms install tenstorrent/1.26
3. sudo modprobe tenstorrent (or reboot, driver will auto-load next boot)

### To uninstall:
1. sudo modprobe -r tenstorrent
2. sudo dkms remove tenstorrent/1.26 --all