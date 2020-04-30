
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10

int compar(void *pa,void *pb);

void clonefile(FILE *cf);       //Dump a data of a file from working directory....

 struct data_struct
   {
      char lastName[N];
      char firstName[N];
      char cityName[N];
    } ;

 typedef struct data_struct data_t;

  data_t dBasePerson[100];

int main()
{
    FILE *cf=fopen("NSC.txt","r");  //Open that file for looking a inside data....

    clonefile(cf);

    qsort( dBasePerson,100,sizeof(data_t),compar );

    printf(" Data File are Shown below \n");
    printf("\nLastName  FirstName  CityName \n");
    for (int i=0;i< 100;i++)
    {
      printf("\n %s      %s      %s ", dBasePerson[i].lastName, dBasePerson[i].firstName, dBasePerson[i].cityName );  //Print the data as formate decided..

    }

    return 0;
}

void clonefile(FILE *cf)

{   size_t ctr=0;
	char str_1[N],str_2[N],str_3[N];
	while(fscanf(cf,"%s%s%s",str_1,str_2,str_3) != EOF) //Read the content line by line wiuth considering a space...

	{
		strcpy(dBasePerson[ctr].lastName,str_1);
		strcpy(dBasePerson[ctr].firstName,str_2);
		strcpy(dBasePerson[ctr].cityName,str_3);

	    ++ctr;
	}

     	fclose(cf); //Close the file after result printed....
}

int compar(void *pa,void *pb)

{
    char *str_a= ((data_t *)pa)->lastName;
    char *str_b= ((data_t *)pb)->lastName;
    return strcmp(str_a,str_b);
}

