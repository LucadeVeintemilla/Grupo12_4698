#include<iostream>

#include<string.h>

class Cadena
 {   char cad[40];
   public:
      Cadena(char *);
      char * DameCadena(void);
      void operator + (Cadena);
 };


