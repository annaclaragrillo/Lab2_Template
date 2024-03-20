default:
	gcc -Wall -Wno-unused-variable -o prog main.c input.c arrays.c
debug:
	gcc -Wno-unused-variable -Wall -o prog -g main.c input.c arrays.c
clean:
	rm -f prog
