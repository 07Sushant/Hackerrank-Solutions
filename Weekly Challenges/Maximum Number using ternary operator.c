#include <stdio.h>

int main() {
    int num1, num2, max;
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("%d", max);
    return 0;
}
