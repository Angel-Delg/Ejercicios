/* Escriba un programa que solicite al usuario que introduzca dos números, tome los dos números del 
usuario, e imprima la suma, el producto, la diferencia, y el módulo de los dos números */

#include <stdio.h>

int main(void){

   int number1, number2;
   int module, multiply, sum;

   printf("Ingrese el primer digito: ");
   scanf("%i", &number1);

   printf("\nIngrese el segundo digito: ");
   scanf("%i", &number2);

   sum = number1 + number2;
   module = number1 % number2;
   multiply = number1 * number2;

   printf("\nSuma: %i\nModulo: %i\nProducto: %i", sum, module, multiply);

   return 0;  
}