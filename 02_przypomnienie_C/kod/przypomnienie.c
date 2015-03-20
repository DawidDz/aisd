/*
 * przypomnienie.c
 *
 * Przypomnienie języka C
 * 
 * https://github.com/ioResources/aisd
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

   printf("Zaczynamy\n");

   int ile;
   ile = 10;

   float a = 1.0;

   printf("ile=%d a=%f\n", ile, a);

   int i;

   for (i=0; i<ile; i++) {

      if (i != 0)
         printf("%f\n", a/i);
      else
         printf("pamiętaj cholero...\n");

   }
    return 0;
}
