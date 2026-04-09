encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o

libl.a: encrypt.o checksum.o
	ar -rcs mylib/libl.a encrypt.o checksum.o

test_code: test_code.c libl.a
	gcc test_code.c -L./mylib -ll -o test_code
