
#include<stdio.h>
void insertion_sorting(int arr[], int size)
{
int i,j;

for(i=1; i<size; i++){
int temp=arr[i];
for(j=i-1; j>=0 && arr[j]>temp; j--){
arr[j+1]=arr[j];
}
arr[j+1]=temp;

}

}

void print_array(int arr[], int size){
int i;
for(i=0; i<size; i++){
printf("%d ",arr[i]);
}
}
int main()
{
    int arr[10];
    int i,size=10;
    printf("Enter Your Array is :");
for(i=0; i<10; i++)
{

    scanf("%d ",&arr[i]);
}

printf("\n\n\nThe Sorted Array is : ");
insertion_sorting(arr,size);
print_array(arr,size);

return 0;
}




