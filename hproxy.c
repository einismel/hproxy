/*
 * hproxy.c
 *
 *  Created on: Oct 11, 2009
 *      Author: e3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define maxArg 6


int main(int argc, char** argv)
{
  char input[30];
  int chequeo;
  chequearMaxArgumentos(argc);
  char* puerto = chequearPuerto(argc, argv);
  FILE* fd = abreArchivoDirecciones(argc, argv);
  crearLog(argc, argv);
   
  printf("Que pagina desea abrir?\n");
  scanf("%s", input);
  
  chequeo = buscarLista(fd, input);
  
/*
  if (chequeo ==1)
  {
    printf(input);
  }

  fclose(fd);
*/  
  return 0;
}
