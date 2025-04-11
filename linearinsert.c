#include<stdio.h>
#define MAX_size100
int linearSearchInsert(int arr[],int*size,int element)
{
    for(int i=0;i<*size;i++)
    {
        if(arr[i]==element)
        {
            printf("Element %d already exists in the array \n",element);  
        }else{
            return -1;
        }
    }
    arr[*size]=element;
    (*size)++;
    return 0;
}
void printArray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[MAX_size100]={10,20,30,40,50};
    int size=5;
    int element;
    printf("original Array:");
    printArray(arr,size);
    printf("Enter the element to insert:");
    scanf("%d",&element);
    if(linearSearchInsert(arr,&size,element)==0);
    {
        printf("Array after insertion:");
        printArray(arr,size);
    }
    return 0;
}