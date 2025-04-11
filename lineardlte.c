#include<stdio.h>
void deleteElement(int arr[],int*size,int key)
{
    int pos=-1;
    for(int i=0;i<*size;i++)
    {
        if(arr[i]==key)
        {
            pos=i;
            break;
        }
    }
    if(pos==1)
    {
        printf("Element %d not found in the array\n",key);
        return;
    }
    for(int i=pos;i<*size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    (*size)--;
    printf("Element %d deleted.updated array:",key);
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
    printf("Enter %d elements of the array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to delete:");
    scanf("%d",&key);
    deleteElement(arr,&n,key);
    return 0;
}