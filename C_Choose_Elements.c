#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
            sum = sum + a[i];
    }

    printf("%lld", sum);

    return 0;
}