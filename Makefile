.PHONY: all clean
all: bin/irrverbs
bin/irrverbs: build/main.o build/irrverbs.o build/irrverbs2.o
	gcc -Wall build/main.o build/irrverbs.o build/irrverbs2.o -o bin/irrverbs
build/irrverbs.o: irrverbs.c
	gcc -Wall -c irrverbs.c -o main
build/irrverbs2.o: irrverbs2.c
	gcc -Wall -c irrverbs2.c -o main
build/main.o: main.c
	gcc -Wall -c main.c -o main.o
clean: 
	rm build/main.o build/irrverbs.o build/irrverbs2.o
