#include <stdio.h>

int main() {
    int N;
    
    // Read input
    scanf("%d", &N);
    
    // Print the inverted right-angled triangle
    for (int i = 1; i >= 1; i++) {
        for (int j = N; j <= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}