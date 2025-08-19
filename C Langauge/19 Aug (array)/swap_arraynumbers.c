#include <stdio.h>

void main(){


  int num[5] = {10,23,43,23,11};

//   another way to swap
//   int first = num[0];
//   int last = num[4];
//   num[0] = last;
//   num[4] = first;

  for (int i = 0; i < 5; i++)
  {
   int temp = num[0];
   num[0] = num[4];
   num[4] = temp;
  }

  for (int i = 0; i < 5; i++)
  {
     printf("%d\t", num[i]);
  }

  
}