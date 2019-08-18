#include <stdio.h>
int main(){	
 char caracter = 0;
 int entero = 0;
 float flotante = 0;
 long largo = 0;
 double doble = 0; 

 char *pcaracter;
 int *pentero;
 float *pflotante;
 long *plargo;
 double *pdoble; 

pcaracter=&caracter;

 printf("%p \n el tamaño  caracter es %zu \n", &caracter, sizeof(caracter));
 printf("%p \n el tamaño  entero es %zu \n", &entero, sizeof(entero));

 printf("%p \n el tamaño  flotante es %zu \n", &flotante, sizeof(flotante));
 printf("%p \n el tamaño  largo es %zu \n", &largo, sizeof(largo));
 printf("%p \n el tamaño  doble es %zu \n", &doble, sizeof(doble));

 printf("%p \n el tamaño  pcaracter es %zu \n", &pcaracter, sizeof(pcaracter));
  printf("%p \n el tamaño  pentero es %zu \n", &pentero, sizeof(pentero));

 printf("%p \n el tamaño  pflotante es %zu \n", &pflotante, sizeof(pflotante));
 printf("%p \n el tamaño  plargo es %zu \n", &plargo, sizeof(plargo));
  printf("%p \n el tamaño  pdoble es %zu \n", &pdoble, sizeof(pdoble));


  printf("\n %x pruebita", pcaracter);
 return 0;
}