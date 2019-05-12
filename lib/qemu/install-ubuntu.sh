dd of=ubuntu.img bs=1024 seek=20194304 count=0
./qemu-system-x86_64 -hda ubuntu.img -cdrom mini.iso -m 1000 -boot d

