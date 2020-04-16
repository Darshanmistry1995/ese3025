//Darshan Mistry....
//create a typedef function  and passing a argumnet using a struct...

#include <stdio.h>
#include <string.h>
 
typedef struct banking //using a typede function...

{
  int account_num;
  char client[20];
  float credit;
} 
data;
int main() 
{
  data record;
  record.account_num=12456;
  strcpy(record.client, "Darshan"); //passing a argument using a struct..
  
  record.credit = 4000;
  printf(" Account number: %d \n", record.account_num);
  printf(" Account holder: %s \n", record.client);
  printf(" credit is:$%f \n", record.credit);
  
  return 0;
}
