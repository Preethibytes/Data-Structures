#include<stdio.h>
int binarySearch(int arr[],int size,int key)
{
int low=0,high=size-1;
while (low<=high)
{
    int mid=low+(high-low)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else{
        high=mid-1;
    }
} 
return -1;
}
int main()
{
    int arr[100],n,key;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to search:");
    scanf("%d",key);
    int result=binarySearch(arr,n,key);
    if(result!=-1)
    {
        printf("Elements %d found at index %d \n",key,result);
    }
    else
    {
        printf("Elements %d not found in the array \n",key);
    }
    return 0;
}
