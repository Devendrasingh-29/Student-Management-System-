#include <stdio.h>

int main() {
    int num, i, even = 0, odd = 0;
    
    printf("5 number daal: \n");
    
    for(i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        
        if(num % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    
    printf("\nResult: %d EVEN aur %d ODD\n", even, odd);
    return 0;
}
