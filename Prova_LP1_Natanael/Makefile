PROG = prova
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o acervo.o cd.o dvd.o interface.o livro.o produto.o
SRC = src/
BUILD = build/
BIN = bin/

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o $(BUILD)
	mv $(PROG) $(BIN)

main.o :
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp
produto.o : 
	$(CC) $(CPPFLAGS) -c $(SRC)produto.cpp
cd.o : 
	$(CC) $(CPPFLAGS) -c $(SRC)cd.cpp
dvd.o : 
	$(CC) $(CPPFLAGS) -c $(SRC)dvd.cpp
interface.o :
	$(CC) $(CPPFLAGS) -c $(SRC)interface.cpp
livro.o :
	$(CC) $(CPPFLAGS) -c $(SRC)livro.cpp
acervo.o :
	$(CC) $(CPPFLAGS) -c $(SRC)acervo.cpp
clean:
	rm -f *.o