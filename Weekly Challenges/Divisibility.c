#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int last_digit, num;
    last_digit = 0;
    
    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        last_digit = (last_digit*10 + num%10)%10; // taking only the last digit
    }
    
    if(last_digit == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}
