#include <stdio.h>
int main()
{

    // Insert Element In Aaray.

    /* Step-01 */
    int n;           // declare array size
    scanf("%d", &n); // take array size input from user (example: 5)

    /* Step-02 */

    int ar[n + 1];
    /*
    declare array.
    (+1) is used because we are inserting a new element into the array.
    So we need one extra space.
    Example: if n = 5, then n + 1 = 6, so one extra slot is available.
    */

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // loop to take array elements as input from user
    }

    /* Step-03 */

    int position, values;
    scanf("%d %d", &position, &values);
    /*
    take user input for:
    - position: index where user wants to insert the value
    - values: the value to insert

    Important: array index starts from 0
    */

    /* Step-04 */

    // Most important part: shifting the elements
    for (int i = n; i > position; i--)
    /*
    Explanation of this loop:
    
    i → loop variable (index)
    n → array size (last valid index is n)
    position → user input index where value will be inserted (example: 2 means index 2)
    
    - first i = n (example: 5)
    - condition: i > position (example: 5 > 2 → true)
    
    We shift elements to the right using:
        ar[i] = ar[i - 1];
    
    Step-by-step example:
    
    Original array:
    [2, 3, 4, 5, 6]
    
    i = 5:
        ar[5] = ar[4]
        → [2, 3, 4, 5, 6, 6]
    
    i = 4:
        ar[4] = ar[3]
        → [2, 3, 4, 5, 5, 6]
    
    i = 3:
        ar[3] = ar[2]
        → [2, 3, 4, 4, 5, 6]
    
    i = 2:
        condition becomes 2 > 2 → false
        so loop stops here
    
    Important point:
    We stop at position because we want to create a free space at that index
    so we can safely insert the new value there.
*/
    {
        ar[i] = ar[i - 1];
    }

    /* Step-05 */

    ar[position] = values;
    /*
    insert the new value at the given position.

    Example:
    ar[2] = 10

    So the value is inserted at index 2, replacing the created space.
    Final array becomes:
    [2, 3, 10, 4, 5, 6]
    */

    /* Step-06 */

    // print final array
    for (int i = 0; i <= n; i++)
    {
        /*
        i <= n is used because:
        original size = n
        after insertion size becomes n + 1

        So we must print all elements including index n
        */
        printf("%d ", ar[i]);
        // output: 2 3 10 4 5 6
    }

    return 0;
}