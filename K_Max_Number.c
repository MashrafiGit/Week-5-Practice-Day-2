#include <stdio.h>
 
int maxNum(int a[], int n, int i)
{
    if (i == n - 1)
    {
        return a[i];
    }
 
    int maxInRest = maxNum(a, n, i + 1);
 
    if (a[i] > maxInRest)
    {
        return a[i];
    }
    else
    {
        return maxInRest;
    }
}
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int a[n];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    int mxNum = maxNum(a, n, 0);
    printf("%d\n", mxNum);
 
    return 0;
}