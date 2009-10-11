#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define maxArg 6


int main(int argc, char** argv)
{
  //	chequearMaxArgumentos(argc);
	char* puerto = chequearPuerto(argc, argv);
  	printf("%s", puerto);
	return 0;
}
