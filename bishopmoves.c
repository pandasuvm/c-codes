#include <stdio.h>

int solve(int A, int B) {
    int count = 0;
    count += (A > 1 && B > 1) ? 4 : 0;  // Upper left diagonal
    count += (A > 1 && B < 8) ? 4 : 0;  // Upper right diagonal
    count += (A < 8 && B > 1) ? 4 : 0;  // Lower left diagonal
    count += (A < 8 && B < 8) ? 4 : 0;  // Lower right diagonal
    return count;
}

int main() {
    int A, B;
    
    // Input the current position of the bishop (A and B)
    printf("Enter the current position of the bishop (A and B): ");
    scanf("%d %d", &A, &B);

    // Calculate and display the steps using the solve function
    int steps = solve(A, B);
    printf("Number of steps: %d\n", steps);

    return 0;
}
