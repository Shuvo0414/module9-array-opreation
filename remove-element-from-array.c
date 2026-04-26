#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // take array size input from user

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // take array elements input from user
    }

    int position;
    scanf("%d", &position);
    /*
    take user input for position

    position = index from where element will be deleted

    Example:
    [2, 3, 4, 5, 6]
           ↑
        position = 2 (delete 4)
    */

    // Most important part: shifting elements LEFT
    for (int i = position; i < n - 1; i++)
    /*
    Explanation of this loop:

    i = position → start deleting point

    i < n-1 → stop before last index
    (because we use ar[i+1], so we must stay inside array boundary)

    Logic:
    we overwrite current element with next element

        ar[i] = ar[i+1];

    Step-by-step example:

    Original array:
    [2, 3, 4, 5, 6]

    position = 2

    i = 2:
        ar[2] = ar[3]
        → [2, 3, 5, 5, 6]

    i = 3:
        ar[3] = ar[4]
        → [2, 3, 5, 6, 6]

    loop stops at i = n-2

    Important:
    last duplicate element is ignored during printing
    */
    {
        ar[i] = ar[i + 1];
    }

    // print updated array (n-1 elements)
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
        // final output after deletion
    }

    return 0;
}