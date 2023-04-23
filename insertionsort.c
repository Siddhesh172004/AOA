#include <stdio.h>
int main()
{


    int i;
    int a[20];
    int n, key, j;

    printf("\nEnter size :");
    scanf("%d", &n);
    printf("\nEnter integer elements:");
    for (i = 0; i < n; i++)
    {
        printf("\nElement %d:", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 1;i < n;i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && key < a[j]) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}
