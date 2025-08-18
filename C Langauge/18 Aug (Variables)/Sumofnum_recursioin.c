#include <stdio.h>

int sum(int n)
{
    if(n == 0){
        return 1;
    }else if (n == 1)
    {
        return 1;
    }else{
        return n + sum(n-1);// recusrion here we call the recursion we use this  for less code  
        // 10 + 10 -1
        // 10 + 9
    }

    // with low steps
    //  if(n > 0){
    //     return n * sum(n - 1);
    // }
    // else
    // {
    //     return 0;
    // }
}

void main()
{
    printf("%d",sum(10)); //here we call the function
}
