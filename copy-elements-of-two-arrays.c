#include <stdio.h>
int main ()
{
    int n; 
    scanf("%d", &n);
    // take size of first array (example: 5)

    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // take input for first array
        // example: [10, 20, 30, 40, 50]
    }

    int m; 
    scanf("%d", &m);
    // take size of second array (example: 3)

    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        // take input for second array
        // example: [60, 70, 80]
    }

    int finalArray[n + m];
    /*
    declare final array to store both arrays

    size = n + m
    example: 5 + 3 = 8
    */

    // copy first array into finalArray
    for (int i = 0; i < n; i++)
    {
        finalArray[i] = a[i];
        /*
        copy each element of a[] into finalArray

        after this:
        finalArray = [10, 20, 30, 40, 50, _, _, _]
        */
    }

    int i = n;
    /*
    start index for second array insertion

    reason:
    first n positions already filled by array a[]

    so next empty index = n
    example: n = 5 → start from index 5
    */

    // copy second array into finalArray
    for (int j = 0; j < m; j++)
    {
        finalArray[i] = b[j];
        /*
        copy element from b[] into finalArray

        example:
        finalArray[5] = 60
        finalArray[6] = 70
        finalArray[7] = 80
        */

        i++;
        /*
        move to next position in finalArray
        */
    }

    // print final merged array
    // condition i < n+m because finalArray total size is n+m
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", finalArray[i]);
        /*
        print all elements

        final output:
        10 20 30 40 50 60 70 80
        */
    }

    return 0; 
}