#include<stdio.h>
void updateElement(int arr[],int size,int oldvalue,int newvalue)
{
    int found=0;
    for(int i=0;i<size;i++)
{
    if(arr[i]==oldvalue)
    {
        arr[i]=newvalue;
        found=1;
        break;
}
}
if(found)
{
    printf("Element %d updated to %d.updated array:",oldvalue,newvalue);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
else{
    printf("Element %d not found in the array \n",oldvalue);
}
}
int main()
{
    int arr[100],n,oldvalue,newvalue;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements of the arary:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to update:");
    scanf("%d",&oldvalue);
    printf("Enter the newvalue:");
    scanf("%d",&newvalue);
    {
    updateElement(arr,n,oldvalue,newvalue);
    }
    return 0;
}