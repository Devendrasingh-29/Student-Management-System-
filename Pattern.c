#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Kitni line ka triangle chahiye: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {      // Bahar wala loop = line
        for(j = 1; j <= i; j++) {  // Andar wala loop = *
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
