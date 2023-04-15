
#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int x, int beg, int end) 
{
    
    while (beg <= end) 
    {
        int mid = beg + (end - beg) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            beg = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main() 
{
    int array[] = { 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(array) / sizeof(array[0]);
    int x;
    printf("element to be found: ");
    scanf_s("%d", &x);
    
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    return 0;
}