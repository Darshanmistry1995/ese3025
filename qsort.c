#include <stdio.h>
#include <stdlib.h>

int myarr[] = { 88, 56, 100, 2, 25 };

int cmpar (void * a, void * b)
 {
   return ( *(int*)a - *(int*)b );
}

int main () {
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", myarr[n]);
   }

   qsort(myarr, 5, sizeof(int), cmpar);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {   
      printf("%d ", myarr[n]);
   }
  
   return(0);
}
