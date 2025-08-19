#include <stdio.h>

void main(){
    int n[5] = {10,23,43,65,77};

    for (int  i = 4; i >= 0; i--) //index is start from 4
    {
        printf("%d\t", n[i]);
    }
    
}

// here we start form i = 4 and i >= 0 i-- so its print form last index to first