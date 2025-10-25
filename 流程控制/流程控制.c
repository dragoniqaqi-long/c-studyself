/*流程控制
       1. 什么是流程控制
             代码执行的顺序

       2. 流程控制的分类
             顺序执行

             选择执行

             循环执行




*/


/*
看懂程序的三步
     流程
       
     每个语句的意思

     试数




      

*/
#include <stdio.h> 

int DoMax(int a, int b, int c) 
{
    int max = a;
    if (b > max) 
    {
        max = b;
        if (c > max) 
        {
            max = c;
        }
    }
    else if (c > max) 
    {
            max = c;
        
    }
    else
    {
        max = a;
    }
    return max;
}

int main() {
    int x, y, z, maxOne;
    
    printf("请输入三个数字（空格分隔）:");
    
    scanf_s("%d %d %d", &x, &y, &z);
    
    maxOne = DoMax(x, y, z);
    
    printf("\n");
    
    printf("最大数为:%d; \n", maxOne);
    
    return 0;
}

