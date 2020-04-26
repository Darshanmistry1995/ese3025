//Darshan Mistry//
//print a character string..

#include <stdio.h>

int main ()
{
   char search_eng[20], link[30]; //char. string define

   printf("search engine: ");
   scanf("%s", search_eng);//scan entered data one by one

   printf("Enter a link address: ");
   scanf("%s", link);

   printf("selected search engine: %s\n", search_eng); //print a string one by one
   printf("copied link address:%s", link);
   
   return(0);
}
