#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf(" %[^\n]s", sen);
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}