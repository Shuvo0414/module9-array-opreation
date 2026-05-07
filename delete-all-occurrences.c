#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // take array size input from user (example: 7)

    int ar[n];
    // declare array of size n

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // take array elements input from user
        // example: [2, 3, 4, 3, 5, 3, 6]
    }

    int deleteValue;
        scanf("%d", &deleteValue);

    // main logic: delete all occurrences of value 3

    for (int i = 0; i < n - 1; i++)
    /*
    this loop is used to traverse the array

    i = index
    n = current logical size of the array

    i < n-1 is used to stay within safe boundary
    because we will access ar[j+1] inside inner loop
    */
    {
        
        if (ar[i] == deleteValue)
        /*
        check if current element is equal to 3

        if true:
        we need to delete this element
        */
        {
            // shifting elements to the LEFT
            for (int j = i; j < n - 1; j++)
            /*
            this loop shifts all elements after index i one step to the left

            j starts from i
            j < n-1 ensures we don't go out of array boundary

            operation:
            ar[j] = ar[j+1];

            Step-by-step example:

            initial:
            [2, 3, 4, 3, 5, 3, 6]

            if i = 1 (value = 3):

            j = 1:
            ar[1] = ar[2] → [2, 4, 4, 3, 5, 3, 6]

            j = 2:
            ar[2] = ar[3] → [2, 4, 3, 3, 5, 3, 6]

            j = 3:
            ar[3] = ar[4] → [2, 4, 3, 5, 5, 3, 6]

            j = 4:
            ar[4] = ar[5] → [2, 4, 3, 5, 3, 3, 6]

            j = 5:
            ar[5] = ar[6] → [2, 4, 3, 5, 3, 6, 6]
            */
            {
                ar[j] = ar[j + 1];
            }

            n--;
            /*
            reduce the logical size of the array

            because one element is removed

            example:
            size 7 → becomes 6
            */

            i--;
            /*
            VERY IMPORTANT:

            after shifting, a new element comes to the same index i

            so we must check this index again

            i-- cancels the upcoming i++ of the loop

            example:
            i = 1 → i-- = 0 → loop does i++ → i = 1 again

            so same index is rechecked
            */
        }
    }

    // print final array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
        /*
        print only valid elements

        n is already reduced after deletions

        example output:
        2 4 5 6
        */
    }

    return 0;
}