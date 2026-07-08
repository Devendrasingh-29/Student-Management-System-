#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;
    
    printf("=== Max Min Finder ===\n");
    printf("3 number daal: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Max nikalne ka logic
    if(a >= b && a >= c) {
        max = a;
    }
    else if(b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }
    
    // Min nikalne ka logic
    if(a <= b && a <= c) {
        min = a;
    }
    else if(b <= a && b <= c) {
        min = b;
    }
    else {
        min = c;
    }
    
    printf("Sabse bada: %d\n", max);
    printf("Sabse chota: %d\n", min);
    
    return 0;
}
