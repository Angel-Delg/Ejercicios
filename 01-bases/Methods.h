#include <stdio.h>

// Funtions
void SortBurbbleArray(int Array[], int len);
void PrintNumbers(int Array[], int len);

void SortBurbbleArray(int Array[], int len) {
   printf("\nSort Array well done!!\n");
   for(int i = 0; i < len; i++){
      for(int j = 0; j < len - 1; j++){
         if(Array[j] > Array[j + 1]){
            int tem = Array[j];
            
            Array[j] = Array[j + 1];
            Array[j + 1] = tem;
         }
      }
   }
}

void PrintNumbers(int Array[], int len){
   for(int i = 0; i < len; i++){
      printf("%i, ", Array[i]);
   }
}