#include<stdlib.h>
#include<stdio.h>

int compar(void *pa ,void *pb

 {
 
	int a =*((int*)pa);
	int b=*((int*)pb);
	int ret=0;

	if(a<b)
		ret=-1;
	else if (a>b)
		ret=1;
	return ret ;
 }

 int main()
	   
{
	 printf("Before sorted array= ");
    int qsarr[] = {8,1,-5,-99,-23,14,85,25,12};

    size_t L=sizeof(qsarr)/sizeof(int);

    for (int n = 0 ; n < sizeof(qsarr)/sizeof(int); n++)
            printf ("%d  ", qsarr[n]);

    printf("\n");

    printf("After sorted array =");

    qsort (qsarr,L, sizeof(int),compar);
    for (int i = 0 ; i < sizeof(qsarr)/sizeof(int); i++)
        printf ("%d ", qsarr[i]);

    return 0;
}
