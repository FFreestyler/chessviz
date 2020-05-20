programa: bin/program


build/main.o: src/main.c build
	gcc  -Wall -Werror -c src/main.c -o build/main.o
build/board.o: src/board.c build
	gcc -Wall -Werror -c src/board.c -o build/board.o
build/board_print_plain.o: src/board_print.c
	gcc  -Wall -Werror -c src/board_print_plain.c -o build/board_print.o
bin/programa: build/main.o build/board.o build/board_print.o bin
	gcc -Wall -Werror build/main.o build/board.o build/board_print.o -lm -o bin/programa


.PHONY : clean


bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf bin/*
	rm -rf build/*.o