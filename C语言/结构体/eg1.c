#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];       
    int age;
    int score;

};

int main()
{   
    struct student student1 = {"Áú¿¡½Ü",18,90};
    printf("%s\n", student1.name);
    struct student * p = &student1;
    strcpy((*p).name,"ÂíÈÙ½ú");
    printf("%s\n",student1.name);
    return 0;
}