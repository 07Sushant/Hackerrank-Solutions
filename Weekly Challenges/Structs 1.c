#include <stdio.h>
#include <string.h>

struct Student {
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};

int main() {
    struct Student student;
    
    // read input
    scanf("%d", &student.age);
    scanf("%s", student.first_name);
    scanf("%s", student.last_name);
    scanf("%d", &student.standard);
    
    // print output
    printf("%d %s %s %d\n", student.age, student.first_name, student.last_name, student.standard);
    
    return 0;
}
