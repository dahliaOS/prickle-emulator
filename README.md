<p align="center">
<a href="https://dahliaos.io">Website</a> ●
<a href="https://discord.gg/7qVbJHR">Discord</a> ●
<a href="https://github.com/dahlia-os/releases/releases">Releases</a> ●
<a href="https://paypal.me/officialdahliaos">Donate</a> ●
<a href="https://github.com/dahlia-os/documentation">Documentation</a>

# PEMU
![GitHub issues](https://img.shields.io/github/issues/dahlia-os/prickle-emulator?color=brightgreen)
![GitHub](https://img.shields.io/github/license/dahlia-os/prickle-emulator?color=bright-green)

A QEMU emulator built for fuchsiaOS. This idea has been on our minds for many weeks. And I'm going to finally start it. PEMU will have a flutter
based interface to choose ISO's and make disk images to install your os to. And that means you could run debain linux inside fuchsiaOS.


## Getting Started

1. First you want to clone Prickle

```git clone https://github.com/dahlia-os/prickle-emulator.git```

2. Then CD into the QEMU folder

```cd prickle-emulator/lib/qemu```

3. Then you can install Ubuntu

```sh install-ubuntu.sh```

4. When Ubuntu is finished, you can boot it up

Exit out of the Ubuntu, install the UI (when it's done) and boot up Ubuntu

```sh run-ubuntu.sh```

## Notes (IMPORTANT)

There have been reports of this not working properly in Deepin which is built on Debian.

Noah Cain and I will test cloning this on other devices with Ubuntu to check if it works properly. 

If it doesn't work for you please make an issue and we will have a look.

## Architectures

At the momemt, this only has support for qemu-system-x86_64. which is located in

```/home/ender/Dahlia/prickle-emulator/lib/qemu/x86_64-softmmu/qemu-system-x86_64```

To run it you must use 

```./qemu-system-x86_64 -(perimeters)```

## RAM, KVM, CPUs

To configure QEMU when Ubuntu boots edit

```run-ubuntu.sh```

It should look like this

```./x86_64-softmmu/qemu-system-x86_64 -hda ubuntu.img -m 2.5G -boot d```

-m = memory, the default is 2.5GB of RAM 

It shouldn't slow your computer down unless your using KDE or MATE, I recommend using lxde.

Be sure to set the CPU and the MACHINE. 

If your still not sure on how to use QEMU then check out some of these links that will give you some ideas. 

And make sure you have access to /dev/kvm if you want to use KVM.

https://wiki.qemu.org/Documentation

https://wiki.gentoo.org/wiki/QEMU/Options
