/*
 * funciones.c
 *
 *  Created on: Oct 11, 2009
 *      Author: e3
 */

#include "funciones.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define maxArg 6

int buscarLista(FILE* fd, char* input)
{
  char caracter[500];
  while (feof(fd) == 0)
  {
    fgets(caracter, 500, fd);
    if (strcmp(caracter,input) == 0)
    {
      return 1;
    }
  }

  return 0;
}

void crearLog(int numArgumentos, char** argv)
{
  nt cont = 1;
  while (cont < numArgumentos)
  {
    if  (strcmp(argv[cont],"-l") == 0)
    {
      if (fopen(argv[cont + 1],"a+")==NULL)
      {
        printf("El archivo de error no pudo ser creado");
      }
    }
    cont +=2;
  }
}

FILE * abreArchivoDirecciones(int numArgumentos, char** argv)
{
  int cont = 1;
  FILE * fd;
  while (cont < numArgumentos)
  {
    if  (strcmp(argv[cont],"-f") == 0)
    {
      fd = fopen((char*) argv[cont + 1],"a+");  
      if (fd==NULL)
      {
        printf("El archivo de error no pudo ser creado");
      }
      return fd;
    }
    cont +=2;
  }
}

char* chequearPuerto(int numArgumentos, char** argv)
{
  int cont = 1;
  while (cont < numArgumentos)
  {
    if  (strcmp(argv[cont],"-p") == 0)
    {
      return argv[cont + 1];
    }
    cont +=2;
  }
  return "16000";
}

void chequearMaxArgumentos(int numArgumentos)
{
  if  (numArgumentos > maxArg) 
  {
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
