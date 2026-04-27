#include <stdio.h>
int main()
{
    // Reverse an Array using two-pointer technique (swap method)

    int n;
    scanf("%d", &n);
    // take array size input from user (example: 6)

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // take array elements input from user
        // example: [10, 20, 30, 40, 50, 60]
    }

    int i = 0, j = n - 1;
    /*
    two pointers:

    i → starts from beginning (index 0)
    j → starts from end (index n-1)

    goal:
    swap elements from both ends moving towards center
    */

    while (i < j)
    /*
    loop runs until i < j

    when i >= j → means we reached middle → stop

    for even length:
    stops when pointers cross

    for odd length:
    middle element remains same (no swap needed)
    */
    {
        int tmp = ar[i];
        /*
        store value of ar[i] temporarily
        */

        ar[i] = ar[j];
        /*
        move last element to front position
        */

        ar[j] = tmp;
        /*
        move stored value (original ar[i]) to last position
        */

        i++;
        j--;
        /*
        move pointers towards center:

        i++ → move forward
        j-- → move backward
        */
    }

    // print reversed array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
        /*
        final output example:
        60 50 40 30 20 10
        */
    }

    return 0;
}