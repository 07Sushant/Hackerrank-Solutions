#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_palindrome(int n) {
    char str[20];
    sprintf(str, "%d", n);
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_prime(n) && is_palindrome(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
