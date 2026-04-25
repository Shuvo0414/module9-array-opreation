#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = n - 1; i >= 0; i--) /*
    *** Most Important.
    1.Start from last index (n-1), continue while i >= 0,
    2.and decrease i each time to access elements in reverse order
    */
    {
        printf("%d ", ar[i]);
    }

    return 0;
}