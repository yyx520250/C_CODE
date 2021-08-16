#include <stdio.h>
typedef struct Stu
{
    char name[20];
    short age;
    char tele[20];
    char sex[5];
}Stu;

// 结构体传参（传值参数）
void Print1(Stu tmp)
{
    printf("姓名：%s\n", tmp.name);
    printf("年龄：%d\n", tmp.age);
    printf("电话：%s\n", tmp.tele);
    printf("性别：%s\n", tmp.sex);
}

// 结构体传参（地址传参）
void Print2(Stu* ps)
{
    printf("姓名：%s\n", ps->name);
    printf("年龄：%d\n", ps->age);
    printf("电话：%s\n", ps->tele);
    printf("性别：%s\n", ps->sex);
};

int main()
{
    Stu s = {"张三", 18, "198754", "man"};
    
    //
    Print1(s);
    Print2(&s);
    return 0;
}