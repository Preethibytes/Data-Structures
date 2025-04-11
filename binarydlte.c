#include<stdio.h>
int binarySearch(int arr[],int size,int key)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
void deleteElement(int arr[],int *size,int key)
{
    int pos=binarySearch(arr,*size,key);
    if(pos==-1)
    {
        printf("Element %d not found in the array \n",key);
        return;
    }
    for(int i=pos;i<*size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    (*size)--;
    printf("Element %d deleted .updated array:",key);
    for(int i=0;i<*size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
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
    printf("Enter the element to delete:");
    scanf("%d",&key);
    deleteElement(arr,&n,key);
    return 0;
}