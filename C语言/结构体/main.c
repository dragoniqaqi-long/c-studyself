/*                  结构体
一.结构体作用
1. 结构体是为了打包多种数据类型的变量而存在的
        eg: 
    班上每名学生的 成绩 年龄 学号 等数据
    "学生"属于结构体类型,而各种数据就是需要打包的变量
2. 结构体本质是一种特殊的变量类型 
    意味着其可以作为数组,函数的形参,以及实参进行程序
二.构造结构体并对其初始化或更改
1. 构造
        1) 所有结构
    strcut 类型名称
    {   
        int a;
        char c[10];
        ...
    
    }类型变量名称1,类型变量名称2;//此处的名称才是真名称
        2) 所有结构包含三部分,其中的类型名称或变量名称的
        任意一个可以省略
        

2. 初始化
        1) 需要理解 struct + 类型名称 
        实质上是数据类型,与int float 本质上是一类
    strcut 类型名称
    {   
        int a;
        char c[10];
        ...
    
    }类型变量名称1,类型变量名称2;
    
    struct 类型名称 类型变量名称1 = {int a,char c[10],....};
    struct 类型名称 类型变量名称2 = {int a,char c[10],....};
    以上就是初步的初始化
    //或者
    strcut 类型名称
    {   
        int a;
        char c[10];
        ...
    
    };
    struct 类型名称 类型变量名称1 = {int a,char c[10],....};
    struct 类型名称 类型变量名称2 = {int a,char c[10],....};
    //或者
    strcut
    {   
        int a;
        char c[10];
        ...
    
    }类型变量名称1,类型变量名称2;
    struct 类型名称 类型变量名称1 = {int a,char c[10],....};
    struct 类型名称 类型变量名称2 = {int a,char c[10],....};

    
3.更改
        1) 使用strcpy更改(需要<string.h>头文件)
    struct student student1 = {"龙俊杰",18,90};
    //指针指向结构体
    struct student * p = &student1;
    strcpy((*p).name,"马荣晋");
    //或者直接下标
    strcpy(student1.name, "马荣晋");

        2) 用字符串增值输入更改(过于复杂,不建议使用)
    char new_name[] = "马荣晋";
    for(int i = 0; i < sizeof(new_name) && i < 20; i++) 
    {
    student1.name[i] = new_name[i];
    }
        3) spirntf函数(类似strcpy,但更适合多个变量处理)
    //指针指向结构体  
    struct student * p = &student1;
    sprintf(student1.name, "马荣晋");
    //或者直接下标
    strcpy(student1.name, "马荣晋");
*/