//============================================================================
// Name        : ficheros1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Creacion de un fichero secuencial*/
#include <stdio.h>
FILE *pcoche;
int main()
{

char modelo[30]="SEAT-TOLEDO" ;
int precio;

if ((pcoche=fopen("coches.bin","w+b"))==NULL)
     printf("El fichero no se puede abrir\n") ;
else
     {
         for(precio=100000;precio<=1000000;precio+=100000)
         	fprintf(pcoche,"%s %d\n",modelo,precio);
            /* es importante poner %s espacio %d
              porque la función fscanf se comporta com scanf
              por eso se pone un espacio como separador de datos dentro
              del archivo sino al leer lee toda la cadena junta es decir
              leería la cadena y el entero*/
          fclose(pcoche);
     }
return 0;
}

