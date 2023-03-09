#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   int year;
   int month;
   int day;
} Fecha;

typedef struct {
   char name[20];
   int age;
   Fecha Fecha_nacimiento;
} User;

// Funcion de estructura
User GetDataUserStruct(User user, Fecha fecha);

int main(){

   User user ;
   Fecha fecha ;

   printf("Welcome to Canada\n");
   User cliente = GetDataUserStruct(user, fecha);

   printf("\nNombre: %s", cliente.name);
   printf("\nEdad: %i", cliente.age);
   printf("\nFecha nacimiento: %i/%i/%i",
      cliente.Fecha_nacimiento.day, 
      cliente.Fecha_nacimiento.month, 
      cliente.Fecha_nacimiento.year
   );

   return 0;
}

User GetDataUserStruct(User user, Fecha fecha){

   char nombre[20];

   printf("\nType your name: ");
   scanf("%s", &nombre);
   strcpy( user.name ,nombre);

   printf("\nType your Age: ");
   scanf("%i", &user.age);

   // Pidamos los datos de la fecha de nacimiento
   printf("\nIngrese su fecha de nacimiento\n");
   

   printf("\nType your age birthday: ");
   scanf("%i", &user.Fecha_nacimiento.year);

   printf("\nType your mounth birthday: ");
   scanf("%i", &user.Fecha_nacimiento.month);

   printf("\nType your day birthday: ");
   scanf("%i", &user.Fecha_nacimiento.day);

   return user;
}