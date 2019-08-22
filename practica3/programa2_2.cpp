 #include "Fecha.h"
#include <iostream>
 int main()
 {
 Fecha a, b, c(21, 9, 1973);
 b.inicializaFecha(17, 6 , 2000);
 a.muestraFecha();
 b.muestraFecha();
 c.muestraFecha();
 a.convierte();
 b.convierte();
 c.convierte(); 
 }