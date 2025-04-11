#include<stdio.h>
int binarySearch(int arr[],int size,int target)
{
    int left=0,right=size-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}

void updateElement(int arr[],int size,int target,int newvalue)
{
    int index=binarySearch(arr,size,target);
    if(index!=-1)
    {
        arr[index]=newvalue;
        printf("Element updated successfully\n");
    }
    else{
        printf("Element not found in the array\n");
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\n");
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