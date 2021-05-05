#include<stdio.h>
void swap(int arr[],int start,int end)
{       int temp;
        while(start<end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
}
void print_array(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

}
int main()
{
    int arr[5]={45,67,89,109,56};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("The given array is\n");
    print_array(arr,n);
    printf("\n");
    printf("\n");
    printf("The reversed  is array\n");
    swap(arr,0,n-1);
    print_array(arr,n);
    return 0;
}
