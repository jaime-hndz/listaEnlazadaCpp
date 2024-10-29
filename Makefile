SRC = Elemento.cpp \
	  Lista.cpp

OBJ = Elemento.o \
	  Lista.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -o main

clean:
	rm *.o&&rm main