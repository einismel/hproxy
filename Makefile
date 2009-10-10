hproxy: hproxy.o funciones.o
	gcc hproxy.o  funciones.o -o hproxy

hproxy.o: hproxy.c funciones.h
	gcc -c hproxy.c

funciones.o: funciones.c funciones.h
	gcc -c funciones.c

clean:
	rm *.o hproxy
