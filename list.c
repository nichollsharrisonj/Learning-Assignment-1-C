#include "list.h"

float meanlist(int list) {
   return list;
}
int main (){

   max = 100;

   /* Intializes random number generator */
   srand((unsigned) seed);

   printf( "Enter a list length :");
   scanf("%d",&list_length);


   printf("Enter a seed :");
   scanf("%d",&seed);

   float vals[list_length];



   float sum = 0;

   for(int  i = 0 ; i < list_length ; i++ ) {
      vals[i] = rand() % max;
      sum += vals[i];
   }

   for(int  i = 0 ; i < list_length ; i++ ) {
      printf("%f ",vals[i]);
   }

   float mean = sum / list_length;
   printf("\nThe mean is: \n %f", mean);

   return 0;
}

