#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 0;
    
    // Random number generate karega 1-100 tak
    srand(time(0));
    secret = rand() % 100 + 1;
    
    printf("=== Number Guess Game ===\n");
    printf("Maine 1 se 100 tak ek number socha hai\n");
    printf("Guess kar ke bata! \n\n");
    
    while(1) {
        printf("Tera guess: ");
        scanf("%d", &guess);
        tries++;
        
        if(guess > secret) {
            printf("Bahut bada hai! Chota soch \n");
        }
        else if(guess < secret) {
            printf("Bahut chota hai! Bada soch \n");
        }
        else {
            printf("SHABASH! Sahi pakda \n");
            printf("Tune %d try me jeeta \n", tries);
            break;
        }
    }
    
    return 0;
}
