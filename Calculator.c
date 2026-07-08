#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    
    printf("=== Mera C Calculator ===\n");
    printf("Pehla number daal: ");
    scanf("%f", &num1);
    
    printf("Operator daal + - * / : ");
    scanf(" %c", &op);
    
    printf("Dusra number daal: ");
    scanf("%f", &num2);
    
    if(op == '+') {
        printf("Jawab: %.2f", num1 + num2);
    }
    else if(op == '-') {
        printf("Jawab: %.2f", num1 - num2);
    }
    else if(op == '*') {
        printf("Jawab: %.2f", num1 * num2);
    }
    else if(op == '/') {
        printf("Jawab: %.2f", num1 / num2);
    }
    else {
        printf("Galat operator daala bhai!");
    }
    
    return 0;
}
