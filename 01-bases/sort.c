#include <stdio.h>
#include <math.h>
#include "Methods.h"
#include "Operations.h"

int main (int argc, int* argv[]) {
   
   int Numbers [] = {1, 3, 4, 5, 7, 12, 34, 2, 5, 7};
   int size = sizeof(Numbers) / sizeof(Numbers[0]);

   // unordelist
   PrintNumbers(Numbers, size);
   // order list

   SortBurbbleArray(Numbers, size);
   PrintNumbers(Numbers, size);

   int acumulador = 0;

   for(int i = 0; i < size - 1; i++){
      acumulador = acumulador + Sum(Numbers[i], Numbers[i + 1]);
   }

   printf("\n\n%i", acumulador);

   return 0;
}