
#include <stdio.h>
int main()
{

    int i, pre, temp;
    int a[20];
    int n, pos;
    int small, j;

    printf("\nEnter size :");
    scanf("%d", &n);
    printf("\nEnter integer elements:");
    for (i = 0; i < n; i++)
    {
        printf("\nElement %d:", i + 1);
        scanf("%d", &a[i]);
    }


    for (i = 0;i < n - 1;i++) {
        small = a[i];
        pos = i;
        for (j = i + 1;j < n;j++) {
            if (a[j] < small) {
                small = a[j];
                pos = j;
            }
        }
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}
