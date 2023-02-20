#include <stdio.h>

int main() {
    int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    
    // Integer operations
    printf("%d %d\n", a+b, a-b);
    
    // Float operations
    printf("%.1f %.1f", x+y, x-y);
    
    return 0;
}
