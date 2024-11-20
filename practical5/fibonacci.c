#include <stdio.h>
#include <stdlib.h>
void fibonacci_step(int *a, int *b) {
    int next = *a + *b;
    *a = *b;
    *b = next;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
	if (n < 1) {
        printf("Enter a positive integer.\n");
        exit(1);
    }
	int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        fibonacci_step(&a, &b);
    }
    printf("\n");
    return 0;
}
