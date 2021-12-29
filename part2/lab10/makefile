# définition des variables
CC = gcc
OBJ = max.o minim.o var.o
EXEC = Programme
DEBUG = yes 

install : My-binaire
	cp My-binaire $(HOME)
ifeq ($(DEBUG),yes)
	@echo "Génération en mode Debug"
CFLAGS = -g -W -Wall
else
CFLAGS =
	@echo "Génération en mode Release"
endif

My-binaire : $(OBJ) testAll.o
	$(CC) $(CFLAGS) $(OBJ) testAll.o -o My-binaire -lm

max.o : max.c
	$(CC) $(CFLAGS) -c max.c -o max.o

minim.o : minim.c
	$(CC) $(CFLAGS) -c minim.c -o minim.o

var.o : var.c
	$(CC) $(CFLAGS) -c var.c -o var.o

testAll.o : testAll.c
	$(CC) $(CFLAGS) -c testAll.c -o testAll.o
clean : 
	rm testAll.o $(OBJ)
