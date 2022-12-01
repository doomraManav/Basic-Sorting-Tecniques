//Linear Search

#include <stdio.h>
int linearSearch(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
      {
          if (a[i] == val)
          return i+1;
      }
    return -1;
}
int main()
{
    int a[] = {4, 1, 7, 3, 5, 10};                                                  //Array Taken
    int val = 3;                                                                    //To Search
    int n = sizeof(a) / sizeof(a[0]);
    int res = linearSearch(a, n, val);
    printf("The elements of the array are - ");
    for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
    printf("\nElement to be searched is - %d", val);
    if (res == -1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present at %d position of array", res);
    return 0;
}
