#include <stdio.h>

int main() {
    int N;
    
    // Read input
    scanf("%d", &N);
    
    // Print the right-angled triangle
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
            // Print space after each star except the last one in the row
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}