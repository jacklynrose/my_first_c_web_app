all:
	ls *.c | xargs gcc -o app -Wall -lfcgi

run: all
	spawn-fcgi -a127.0.0.1 -p9000 -n ./app
