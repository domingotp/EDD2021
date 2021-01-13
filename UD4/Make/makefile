COMPILADOR=gcc
ATRIBUTOS=-Wall -g

calcula.exe: calcula.c calc.o
	$(COMPILADOR) $(ATRIBUTOS) calcula.c calc.o -o calcula.exe

calc.o: calc.c
	$(COMPILADOR) $(ATRIBUTOS) -c calc.c -o calc.o

.PHONY: clean
clean:
	rm -rf calc.o
	rm calcula.exe

.PHONY: dist
dist: clean calcula.exe
	rm -rf ../dist;
	mkdir -p ../dist/usr/bin/calc
	cp calcula.exe ../dist/usr/bin/calc

.PHONY: targz
targz: clean
	mkdir -p source
	cp *.c *.h makefile source
	tar -cvf calcula.tar source
	gzip calcula.tar
	rm -rf calcula.tar
	rm -rf source

.PHONY: install
install: dist
	cp -r ../dist/* /
