#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

FILE* fd;

void chequearMaxArgumentos(int);
char* concatenarPath(char*, char*);
char* chequearPuerto(int, char**);

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
