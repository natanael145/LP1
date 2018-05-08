PROG = pratice
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o produto.o carro.o celular.o chocolate.o deposito.o livro.o pizza.o produto_duravel.o produto_nduravel.o refrigerante.o
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
carro.o : 
	$(CC) $(CPPFLAGS) -c $(SRC)carro.cpp
celular.o : 
	$(CC) $(CPPFLAGS) -c $(SRC)celular.cpp
chocolate.o :
	$(CC) $(CPPFLAGS) -c $(SRC)chocolate.cpp
deposito.o :
	$(CC) $(CPPFLAGS) -c $(SRC)deposito.cpp
livro.o :
	$(CC) $(CPPFLAGS) -c $(SRC)livro.cpp
pizza.o :
	$(CC) $(CPPFLAGS) -c $(SRC)pizza.cpp
refrigerante.o :
	$(CC) $(CPPFLAGS) -c $(SRC)refrigerante.cpp
produto_duravel.o :
	$(CC) $(CPPFLAGS) -c $(SRC)produto_duravel.cpp
produto_nduravel.o :
	$(CC) $(CPPFLAGS) -c $(SRC)produto_nduravel.cpp
clean:
	rm -f *.o 
