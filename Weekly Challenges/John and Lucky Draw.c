#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 5 || n > 50) {
        printf("Invalid input");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
