#include <stdio.h>

void g (int * p, int * q){
    *p = 1;
    *q = 2;

    return;
}

int main(){
    int a = 3;
    int b = 5;

    g( &a, &b);
    printf("%d %d", a, b);
    
    return 0;
}