#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Kitni line ka ulta triangle chahiye: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {           // Line
        for(j = 1; j <= n-i+1; j++) {   // * print
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
