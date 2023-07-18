#include <stdio.h>

void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            printf("%d", i);
            if (i < 98) {
                printf(", ");
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            printf("%d", i);
            if (i > 98) {
                printf(", ");
            }
        }
    }
    printf("\n");
}

int main() {
    int start_number = 50; 
    print_to_98(start_number);
    return 0;
}

