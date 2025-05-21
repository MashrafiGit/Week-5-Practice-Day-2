#include <stdio.h>

long long log2_floor(long long n) {
    if (n == 1)
        return 0;
    else
        return 1 + log2_floor(n / 2);
}

int main() {
    long long n;
    scanf("%lld", &n);

    printf("%lld\n", log2_floor(n));
    return 0;
}
