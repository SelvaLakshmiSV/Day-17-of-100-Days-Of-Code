#include<stdio.h>
void swap(int arr[],int start,int end)
{
            int temp;
            if(start>=end)
                return;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            swap(arr,start+1,end-1);
}
void print_array(int arr[],int n)
{
     for(int i = 0;i<n;i++){
        printf("%d  ",arr[i]);

     }
      printf("\n");
}
int main()
{

    int arr[] = {34,89,86,45,90,78};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Before reversing the array\n");
    print_array(arr,n);
    swap(arr,0,n-1);
    printf("After reversing the array\n");
    print_array(arr,n);
    return 0;
}
