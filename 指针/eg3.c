#include <stdio.h>

void f(int * q)
{
    *q = 10;
}

void g(int ** h)
{
    
}


int main()
{
    int i = 10;
    int * p = &i;// p 是int * 类型,存放 int 地址
    int ** q = &p;// q 是 int ** 类型,存放 int * 地址
    int *** r = &q;// r 是 int *** 类型,存放 int ** 地址
    /*
            * * * r
            * * q 
            * p
            i
    
            以上均表示 i 的值
    */
    f(p);
    g(&p);

    return 0;
}