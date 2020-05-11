#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() 
{
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("NSC.txt", "r")) == NULL) 
{
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%s", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}
