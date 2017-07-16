CC = g++
CCFLAGS = -c -std=c++11 -Wall

NBudget: main.o Budget_Menu.o
	$(CC) -o NBudget main.o Budget_Menu.o

main.o: main.cpp Budget_Menu.h
	$(CC) $(CCFLAGS) main.cpp

Budget_Menu.o: Budget_Menu.cpp Budget_Menu.h
	$(CC) $(CCFLAGS) Budget_Menu.cpp
	
