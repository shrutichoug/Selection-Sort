#include<stdio.h>
void selectionsort(int [],int);
void main()
{
int ele;
int arr[5]={32,5,7,3,6};
selectionsort(arr,5);
}
void selectionsort(int arr[],int size)
{
    int min,i,j,temp;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
    if(min!=i)
    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    }
    printf("\n Array sorted by Selection sort: \n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}