#include<stdio.h>
void print_array(int arr[],int size)
{
    int i;
    printf("\n\nYour Array is : ");
    for(i=0; i<size; i++)
    {

        printf("%d ",arr[i]);
    }
}

void delet_index(int* arr, int size, int position)
{
    int i;

    for(i=position; i<=size; i++)
    {

        arr[i]=arr[i+1];
    }
}
int main()
{

    printf("Enter Your Roll : ");
    int i,position;
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    print_array(arr,size);
    printf("\nWhich index element you want to remove : ");
    scanf("%d",&position);
    delet_index(arr,size,position);
    size--;
    print_array(arr,size);
return 0;
}

