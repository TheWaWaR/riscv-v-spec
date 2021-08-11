
## Used command line

```shell
#==== Build riscv-gnu-toolchain and qemu with vector extension enabled
git clone https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
./configure --prefix=$HOME/local/opt/riscv/ --with-arch=rv64gcv
make newlib SIM=qemu -j 5
# make report-newlib SIM=qemu -j 5

#==== Run executable binary with eqmu
qemu-riscv64 -cpu rv64,x-v=true ./a.out
```
