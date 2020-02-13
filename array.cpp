// Arrays Logic
#include <iostream>
using namespace std;

int ary [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += ary[n];
  }
  cout << result;
  return 0;
}

	


