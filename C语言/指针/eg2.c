#include <stdio.h>
#include <malloc.h>

int main()
{
    int a = 5;//分配了4个字节 静态分配
    
    int * p = (int *)malloc(4);
    p = &a;
            /*
                1. 要使用malloc函数,必须添加malloc.h这个头文件
                2. malloc函数只有一个形参,并且形参必须是整型
                3. 形参 4 表示请求系统为本程序分配 4 字节
                4. malloc函数只能返回第一个字节的地址          
                5. 第8行分配了 8 字节, p 指向的内存也占 4 字节
                6. p本身所占内存是静态分配, p 所指向的内存是动态分配的
            */

    free(p);//该函数表示把p所指向的内存给释放掉
    int *pArr;
    int len = 5;
    pArr = (int *)malloc(4 * len);
    pArr = (int *)malloc(5 * sizeof(int));//两种均可
    for(int i = 0;i < 5;i++)
    { 
        scanf("%d", &pArr[i]);   
    }
    //printf("%p", p);
    for(int j = 0;j < 5;j++)
    {
        printf("%d ", pArr[j]);
    }
    printf("\n");
    //检查是否释放内存
    free(pArr);

    printf("新数组输入5个数\n");
    int *arr = (int *)malloc(4 * len);
    for(int i = 0;i < 5;i++){ 
        scanf("%d", &arr[i]);}
    for(int j = 0;j < 5;j++){
        printf("%d ", arr[j]);}
    printf("\n");
    
    int LEN = 10;
    printf("对新数组扩充后,输入10个数\n");
    int *new_arr = (int *)realloc(arr,4 * LEN);//将数组的元素数量改为10
    for(int i = 0;i < 10;i++){ 
        scanf("%d", &new_arr[i]);}
    for(int j = 0;j < 10;j++){
        printf("%d ", new_arr[j]);}
    //且前5个数组若为进行操作会进行保留

    return 0;
}
//其上证明了动态内存的三个优点:
/*
1. 不需要事先定义长度
2. 内存可以程序员手动分配,释放
3. 可以让内存随意增加或缩减
*/