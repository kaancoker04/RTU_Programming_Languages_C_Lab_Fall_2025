#include <stdio.h>


int sum_to_n(int n) {
    // TODO: implement sum with a for loop
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, and print result
    if (n < 1) {
        printf("Error: n must be a positive integer (n >= 1)\n");
    } else {
        int result = sum_to_n(n);
        printf("Sum of numbers from 1 to %d = %d\n", n, result);
    }

    return 0;
}