#include <stdio.h>
int main ()
{
    int n; // 1st array size -> n= 5
    scanf("%d", &n);
    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);// 1st array a[] input .[ 10,20,30,40,50 ]
    }

   
    int m; // 2nd array size-> m=3.
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);// 2nd array b[] input .[ 60,70,80]
    }

    int finalArray[n+m]; // this the finalArray of tow array copy . and this array size is, if n = 5 , and m=3 then  n+m = 8.

    // this loop for copy 1st array a[] elemnts in the finalArray 
    for (int i = 0; i < n; i++)
    {
        finalArray[i] = a[i];
    }

    int i = n; //. this use beacuse ,  fianlArray 1st array copy korar por je index a sei index er jonne , i = n means i er value n size r array index pete gele array size thekei ase .

    // this loop for b[] array element insert in the finalArray . and i++ mens , when finalArray index is 5 , i++ hoye 6 index a jabe and 6 index a b[] array er porer element ta coppy kore boshio a dibe 
    for (int j = 0; j < m; j++)
    {
        finalArray[i] = b[j];
        i++;
    }
    
    // now this loop for print . here n+m becasue finalArray size is n+m .
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", finalArray[i]);
    }
    
    
    
    
    return 0; 
}