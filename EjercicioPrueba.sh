nasm -f elf32  -o EjercicioPrueba.o EjercicioPrueba.asm     
gcc -m32 -march=i686 EjercicioPrueba.c EjercicioPrueba.o -o EjercicioPrueba