# riscv_stuff

### compile assembly
```
riscv64-linux-gnu-as -march=rv64imac -o HelloWorld.o HelloWorld.s
riscv64-linux-gnu-ld -o HelloWorld HelloWorld.o
```
### qemu riscv fedora
```
qemu-system-riscv64 -nographic -machine virt -smp 4 -m 4096M -kernel Fedora-Minimal-Rawhide-*-fw_payload-uboot-qemu-virt-smode.elf -bios none -object rng-random,filename=/dev/urandom,id=rng0 -device virtio-rng-device,rng=rng0 -device virtio-blk-device,drive=hd0 -drive file=Fedora-Minimal-Rawhide-20200108.n.0-sda.raw,format=raw,id=hd0 -device virtio-net-device,netdev=usernet -netdev user,id=usernet,hostfwd=tcp::2222-:22
```
### Download
```
https://dl.fedoraproject.org/pub/alt/risc-v/repo/virt-builder-images/images/
```


