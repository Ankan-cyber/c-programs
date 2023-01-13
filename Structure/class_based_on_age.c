//Wap to design a structure and gave name, roll, and age of a student. Base on age the students class will be determined
#include <stdio.h>
struct student
{
    int roll;
    int age;
    char name[20];
};

void main()
{
    struct student s;
    printf("Enter roll: ");
    scanf("%d",&s.roll);

    printf("Enter age: ");
    scanf("%d",&s.age);

    
    printf("Enter name: ");
    scanf("%s",&s.name);

        if(s.age <= 16)
        printf("Name = %s\nRoll = %d\nClass = 10\n",s.name,s.roll);
        else if(s.age <= 18)
        printf("Name = %s\nRoll = %d\nClass = 12\n",s.name,s.roll);
        else
        printf("Name = %s\nRoll = %d\nClass = college\n",s.name,s.roll);
}