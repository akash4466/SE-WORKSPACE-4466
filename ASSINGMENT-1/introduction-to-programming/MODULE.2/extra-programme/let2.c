#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;  // Height of the pyramid
    
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= (2*i - 1); k++) {
            printf("%d",i*2);
        }
        printf("\n");
    }
    
    return 0;
}
