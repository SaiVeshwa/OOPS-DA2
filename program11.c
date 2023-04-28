#include <stdio.h>


void divide(int arr[], int start, int end, int* count)
{
    if (start == end)
    {
        (*count)++;
        return;
    }
    
    
    int mid = (start + end) / 2;
    
    divide(arr, start, mid, count);
    divide(arr, mid+1, end, count);
    
    (*count)++; 
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    divide(arr, 0, n-1, &count);
    
    printf("Number of iterations: %d\n", count);
    printf("%d",n);
    
    return 0;
}
