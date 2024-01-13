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
        printf("10. Multiplication table of n"\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int num1, num2;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Sum: %d\n", num1 + num2);
                break;
            }
            case 2: {
                int num1, num2;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Multiplication: %d\n", num1 * num2);
                break;
            }
            case 3: {
                int num1, num2;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0)
                    printf("Division: %f\n", (float)num1 / num2);
                else
                    printf("Cannot divide by zero!\n");
                break;
            }
            case 4: {
                int num1, num2, temp;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                temp = num1;
                num1 = num2;
                num2 = temp;
                printf("Values swapped: %d %d\n", num1, num2);
                break;
            }
            case 5: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            }
            case 6: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num == reverseNumber(num))
                    printf("%d is a palindrome number.\n", num);
                else
                    printf("%d is not a palindrome number.\n", num);
                break;
            }
            case 7: {
                int n, a = 0, b = 1, nextTerm;
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("Fibonacci Series: ");
                for (int i = 1; i <= n; i++) {
                    printf("%d, ", a);
                    nextTerm = a + b;
                    a = b;
                    b = nextTerm;
                }
                printf("\n");
                break;
            }
            case 8: {
                double angle;
                printf("Enter an angle in degrees: ");
                scanf("%lf", &angle);
                printf("Sin: %.4lf\n", sin(angle * M_PI / 180));
                printf("Cos: %.4lf\n", cos(angle * M_PI / 180));
                printf("Tan: %.4lf\n", tan(angle * M_PI / 180));
                break;
            }
            case 9: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Reversed number: %d\n", reverseNumber(num));
                break;
            }
            case 10:
                {
                    #include<stdio.h>

    int a;
    int c=0;
    printf("enter the number whose table you want to see: ");
    scanf("%d",&a);
    for(int i=a;i<=a*10;i=i+a)
    {
       c=c+1;
        printf("%d * %d = %d \n ",a,c,i);
       }

        break;
    

   
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
