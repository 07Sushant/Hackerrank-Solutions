#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];
    }
    printf("%lld\n", product);
    return 0;
}
