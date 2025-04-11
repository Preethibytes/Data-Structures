#include<stdio.h>
int binarySearchForInsert(int arr[],int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
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
         return low;
}  
void insertElement(int arr[],int*size,int capacity,int key)
{
    if(*size>=capacity)
    {
        printf("Array is full cannot insert element\n");
        return;
    }
    int pos=binarySearchForInsert(arr,*size,key);
    for(int i=*size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=key;
    (*size)++;
    printf("Element %d inserted updated array key:");
    for(int i=0;i<*size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100],n,key,capacity=100;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert:");
    scanf("%d",&key);
    {
    insertElement(arr,&n,capacity,key);
    }
    return 0;
}