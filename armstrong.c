#include<stdio.h>

int main() {
    int a, n, oldno, newno = 0, rem, c = 0;
    printf("enter the no: ");
    scanf("%d", &a);
    n = a;
    oldno = a;

    // Count the number of digits
    while (n) {
        n = n / 10;
        c++;
    }

    n = a; // Reset n to the original value

    // Calculate the sum of digits powered by count using integer arithmetic
    while (n) {
        rem = n % 10;
        int power = 1;
        for (int i = 0; i < c; i++) {
            power *= rem;
        }
        newno = newno + power;
        n = n / 10;
    }

    printf("Sum of digits powered by count: %d\n", newno);
    printf("Original number: %d\n", oldno);

    if (newno == oldno) {
        printf("Yes, it's an Armstrong number.\n");
    } else {
        printf("No, it's not an Armstrong number.\n");
    }

    return 0;
}
