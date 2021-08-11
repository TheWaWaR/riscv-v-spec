all:
	riscv64-unknown-elf-gcc -c strcpy.s -o strcpy.o
	riscv64-unknown-elf-gcc -c strncpy.s -o strncpy.o
	riscv64-unknown-elf-gcc -c strlen.s -o strlen.o
	riscv64-unknown-elf-gcc -c strcmp.s -o strcmp.o
	riscv64-unknown-elf-gcc -c memcpy.s -o memcpy.o
	riscv64-unknown-elf-gcc -c saxpy.s -o saxpy.o
	riscv64-unknown-elf-gcc -c vvaddint32.s -o vvaddint32.o
	# riscv64-unknown-elf-gcc -c sgemm.S -o sgemm.o
	riscv64-unknown-elf-gcc test_all.c -o test_all strcpy.o strncpy.o strlen.o strcmp.o memcpy.o saxpy.o vvaddint32.o  && qemu-riscv64 -cpu rv64,x-v=true ./test_all

clean:
	rm -rf test_all *.o
