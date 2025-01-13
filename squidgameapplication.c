#include <stdio.h>
#include <stdbool.h>

int main() {
    
    printf("Squid Game Application Form.\n");
    
    int age;
    char name[50];
    
    // input name
    
    printf ("Enter your child's name: \n");
    scanf ("%s", name);
    
    // input age
    
    printf("Enter your child's age: \n");
    scanf("%d", &age);
    
    // check criteria
    bool result = (age >= 6);
    
    // results
   if (result) {
        printf("Your %d-year-old child, %s, may enter the game.\n", age, name);
    } else {
        printf("Your %d-year-old child, %s, is unable to enter the game due to age criteria.\n", age, name);
    }
    
    return 0;
}