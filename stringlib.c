#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:");
    scanf(str1,sizeof(str1),stdin);
    printf("Enter the second string:");
    scanf(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    printf("Length of the first string:%d\n",strlen(str1));
    char copystr[100];
    strcpy(copystr,str1);
    printf("copy of the first string:%s\n",copystr);
    strcat(str1,str2);
    printf("concatenated string:%s\n",str1);
    int comparison=strcmp(str1,str2);
    if(comparison==0)
    {
        printf("The two strings are equal \n");
    }
    else if(comparison<0)
    {
        printf("The first string is smaller than second string\n");
    }
    else{
        printf("The first string is greater than the second string\n");
    }
    char *substring=strstr(str1,str2);
    if(substring)
    {
        printf("The second string is found in the first string starting from position:%d\n",substring-str1);
    }
    else{
        printf("The second string is not found in the first string\n");
    }
    for(int i=0;str1[i];i++)
    {
        str1[i]=toupper(str1[i]);
    }
    printf("First string in uppercase:%s\n",str1);
    for(int i=0;str2[i];i++)
    {
        str2[i]=tolower(str2[i]);
    }
    printf("second string in lower case:%s\n",str2);
    return 0;
}