#include "funciones.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define maxArg 6

char* chequearPuerto(int numArgumentos, char** argv)
{
	int cont = 1;

  while (cont < numArgumentos){
    if  (strcmp(argv[cont],"-p") == 0){
      return argv[cont + 1];
    }
    cont +=2;
  }
    
  return "16000";
}

void chequearMaxArgumentos(int numArgumentos)
{
	if  (numArgumentos > maxArg) {
		printf("\n ERROR! --> No esta introduciendo correctamente los parametros...\n");
		printf("         #################################################################\n" 
		   "         # Usage:                                                        #\n"
		   "         #      ./hproxy [output_file error_file]                           #\n"
		   "         #################################################################\n\n");
		exit(1);
	  }
}

char * concatenarPath(char* nombreDir, char *nombreArchivo)
{
	char * newDir= malloc(sizeof(char)*(strlen(nombreDir)+strlen(nombreArchivo)+2)); 
	strcpy(newDir, nombreDir);	
	strcat(newDir,"/");
	strcat(newDir,nombreArchivo);

	return newDir;
}    

char * obtenerFecha(time_t * time)
{
    int max = 20;
    char * str = malloc(sizeof(char) * max);

    strftime(str, max, "%F", gmtime(time));
//	strftime(str, max, "%F %H:%I", gmtime(time));

    return str;
}
