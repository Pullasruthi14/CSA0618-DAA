#include<stdio.h>

// Function to check if a number is perfect or not
int isPerfect(int num) {
    int sum = 0;

    // Find all divisors and add them
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // If the sum of divisors is equal to the number, it's perfect
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

