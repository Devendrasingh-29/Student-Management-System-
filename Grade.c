#include <stdio.h>

int main() {
    int marks;
    char grade;
    
    printf("=== Student Grade System ===\n");
    printf("Marks daal 0-100: ");
    scanf("%d", &marks);
    
    if(marks >= 90) {
        grade = 'A';
    }
    else if(marks >= 75) {
        grade = 'B';
    }
    else if(marks >= 60) {
        grade = 'C';
    }
    else if(marks >= 40) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    
    printf("Tumhara Grade: %c\n", grade);
    
    if(grade == 'F') {
        printf("Fail ho gaye. Mehnat karo! \n");
    }
    else {
        printf("Pass ho gaye! Badhai ho \n");
    }
    
    return 0;
}
