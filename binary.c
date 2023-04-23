
#include <stdio.h>
#include <conio.h>


int binarySearch(int a[], int low, int high, int value) {
    int mid = (high + low) / 2;
    if (a[mid] == value) {
        return mid;
    }
    if (value < a[mid]) {
        return binarySearch(a, low, mid, value);
    }

    if (value > a[mid]) {
        return binarySearch(a, mid + 1, high, value);
    }
    // return -1;
}







void main()
{
    int a[20];
    int i, result, n, s;
    printf("How many elements you want to enter: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &s);

    result = binarySearch(a, 0, n - 1, s);

    if (result == -1)
    {
        printf("\n%d not found in the given array", s);
    }
    else
    {
        printf("\n%d is found at position %d", s, result + 1);
    }

    getch();
}