#include <stdio.h>

int main() {
    int num, digit_sum = 0;
    scanf("%d", &num);

    // extract each digit and add to sum
    for (int i = 0; i < 5; i++) {
        int digit = num % 10;
        digit_sum += digit;
        num /= 10;
    }

    printf("%d\n", digit_sum);
    return 0;
}
