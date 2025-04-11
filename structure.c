#include<stdio.h>
struct Student
{
char name[30];
int rollnum;
int mark_for_c;
};
int main()
{
    struct Student s[30];
    int i,n,sum=0;
    float avg;
    printf("Enter the no of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the student name:");
        scanf("%s",s[i].name);
        printf("Enter the student rollnum:");
        scanf("%d",&s[i].rollnum);
        printf("Enter the student mark for c:");
        scanf("%d",&s[i].mark_for_c);
    }
    printf("Name \t rollnum \t mark for c \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t %d\t %d\n",s[i].name,s[i].rollnum,s[i].mark_for_c);
        sum=sum+s[i].mark_for_c;
    }
    avg=sum/(float)n;
    printf("Average mark=%.2f\n",avg);
    return 0;
}