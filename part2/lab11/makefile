# définition des variables
CC =gcc
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
	$(CROSS_COMPILE)$(CC) $(CFLAGS) $(OBJ) testAll.o -o My-binaire -lm

max.o : max.c
	$(CROSS_COMPILE)$(CC) $(CFLAGS) -c max.c -o max.o

minim.o : minim.c
	$(CROSS_COMPILE)$(CC) $(CFLAGS) -c minim.c -o minim.o

var.o : var.c
	$(CROSS_COMPILE)$(CC) $(CFLAGS) -c var.c -o var.o

testAll.o : testAll.c
	$(CROSS_COMPILE)$(CC) $(CFLAGS) -c testAll.c -o testAll.o
clean : 
	rm testAll.o $(OBJ)
