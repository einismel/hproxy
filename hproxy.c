#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <time.h>
#include <signal.h>
#include "funciones.h"
#define maxArg 6

int chequearPuerto(int numArgumentos, char* argumentos[])
{
	int cont = 1;
	printf("%s\n", strcmp(argumentos[1], "-p"))
    
  return 16000;
}

int main(int argc, char** argv){
/*    DIR *dirp;
    struct dirent *direntp;
    struct stat statbuf, statbufaux;
    unsigned long sum=0;
    int count, i;
    char tipo_archivo; 
    char* newDir;
    char * nombreDir = getcwd(NULL, 0);
    char permisos[]={'x','w','r'};
    pid_t father,childpid;
    father = getpid();
	int status, childstatus;
*/		    	     
	chequearMaxArgumentos(argc);
	printf("%s", argv[1]);
	int puerto = chequearPuerto(argc,**argv);
/*
	  	if (argc==3)
	{  
//		char* error = argv[2];
	//	salida= argv[1];
		if (freopen(error,"w", stderr)==NULL)
		{
			fprintf(stderr, "El archivo de error no pudo ser creado");
		}
		if (freopen(salida,"w", stdout)==NULL)
		{
			fprintf(stderr, "El archivo de error no pudo ser creado");
		}
    
	}
	else 
	{
		fd= fopen("salida.txt","w");		
	}

    signal(SIGCHLD, childHandler); // se instala el nuevo manejador

    if ((dirp = opendir(nombreDir)) == NULL) {
        printf("No se pudo abrir el directorio %s: %s", nombreDir, strerror(errno));
        exit(1);
    }

    count= 0;
    numhijos = cuentaDirectorio(dirp);

    while ((direntp = readdir (dirp)) != NULL)
	{																        
		newDir= concatenarPath(nombreDir,direntp->d_name);

		if (direntp->d_type==DT_DIR)
		{
            if (strcmp(direntp->d_name,"..") && strcmp(direntp->d_name,"."))
			{
                if ((childpid=fork())==0)
				{// codigo del hijo
                    imprimirDirectorio(getpid(), newDir);
                }
				wait(&childstatus);
            }
        }
        else
		{
			imprimirLinea(father, nombreDir,direntp->d_name, (int*)&sum,0);
		}
		count++;
    }

	imprimirLinea(father, nombreDir,"",(int*)&sum, count-2);
	closedir(dirp);
	while (numhijos > 0);

	if (argc==1)
	{
//		freopen("salida.txt","w+",stdout);
//		fclose(stdout);
	}

    execl("/usr/bin/sort","sort", "-n","salida.txt", (char*) 0);
*/    
	return 0;
}

