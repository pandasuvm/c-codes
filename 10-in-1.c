#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0; // Not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Sum\n");
        printf("2. Multiplication\n");
        printf("3. Division\n");
        printf("4. Swap Values\n");
        printf("5. Check Prime\n");
        printf("6. Check Palindrome\n");
        printf("7. Fibonacci Series\n");
        printf("8. Trigonometric Functions\n");
        printf("9. Reverse a Number\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            // ... (existing cases)

            case 0: {
                printf("Exiting the program.\n");
                break;
            }
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
