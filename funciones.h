/*
 * funciones.h
 *
 *  Created on: Oct 11, 2009
 *      Author: e3
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


#endif /* FUNCIONES_H_ */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

FILE* abreArchivoDirecciones(int, char**);
void chequearMaxArgumentos(int);
void crearLog(int, char**);
char* chequearPuerto(int, char**);

char* concatenarPath(char*, char*);
/** Formats time data from stat
 *  and returns a string with the
 *  formated info
 *
 *  @param *time - pointer to the
 *      time information from stat
 *
 *  @return string - formated time info
 */
char * obtenerFecha(time_t *);
