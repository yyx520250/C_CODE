#include <stdio.h>
typedef struct Stu
{
    char name[20];
    short age;
    char tele[20];
    char sex[5];
}Stu;

// �ṹ�崫�Σ���ֵ������
void Print1(Stu tmp)
{
    printf("������%s\n", tmp.name);
    printf("���䣺%d\n", tmp.age);
    printf("�绰��%s\n", tmp.tele);
    printf("�Ա�%s\n", tmp.sex);
}

// �ṹ�崫�Σ���ַ���Σ�
void Print2(Stu* ps)
{
    printf("������%s\n", ps->name);
    printf("���䣺%d\n", ps->age);
    printf("�绰��%s\n", ps->tele);
    printf("�Ա�%s\n", ps->sex);
};

int main()
{
    Stu s = {"����", 18, "198754", "man"};
    
    //
    Print1(s);
    Print2(&s);
    return 0;
}