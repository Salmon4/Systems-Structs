all: functions.o main.o
				gcc -o struttest functions.o main.o

functions.o: functions.c header.h
				gcc -c functions.c

main.o: main.c header.h
				gcc -c main.c

run:
				./struttest

clean:
				rm *.o
				rm *~
