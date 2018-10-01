all:myStrfun.o strDemo.o
	gcc myStrfun.o strDemo.o
myStrfun.o: myStrfun.c myStrhead.h
	gcc -c myStrfun.c
strDemo.o: strDemo.c myStrfun.c myStrhead.h
	gcc -c strDemo.c

run: strDemo.c
	./a.out
