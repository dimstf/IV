.PHONY: all clean
all: bin/irrverbs
bin/irrverbs: build/main.o build/irrverbs.o build/irrverbs2.o
	gcc -Wall build/main.o build/irrverbs.o build/irrverbs2.o -o bin/irrverbs
build/irrverbs.o: src/irrverbs.c
	gcc -Wall -c src/irrverbs.c -o build/irrverbs.o
build/irrverbs2.o: src/irrverbs2.c
	gcc -Wall -c src/irrverbs2.c -o build/irrverbs2.o
build/main.o: src/main.c
	gcc -Wall -c src/main.c -o build/main.o
clean: 
	rm build/main.o build/irrverbs.o build/irrverbs2.o
