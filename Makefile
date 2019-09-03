
# all the c programs that you need to compile, need to add the print function 

all: mp3

mp3: main.o removedList.o delete.o insert.o

main.o: main.c
	gcc -g -c main.c 

removedList.o: removedList.c
	gcc -g -c removedList.c 

delete.o: delete.c
	gcc -g -c delete.c

insert.o: insert.c
	gcc -g -c insert.c 
print.o: print.c 
	gcc -g -c print.c

clean: 
	\rm *.o mp3