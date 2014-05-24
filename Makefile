all:
	ls src/*.c | xargs gcc -o bin/app -Wall -lfcgi

run: all
	spawn-fcgi -a127.0.0.1 -p9000 -n bin/app
