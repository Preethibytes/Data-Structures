#include<stdio.h>
void reverseArray(int arr[],int size)
{
    int temp,start=0,end=size-1;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5}
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    reverseArray(arr,size);
    printf("Reversed Array:");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}