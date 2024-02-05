#include <stdio.h>
#include <math.h>

int factorial(int fact) {
    int n = 1, result = 1;

    while (n <= fact) {
        result = result * n;
        n++;
    }

    return result;
}

int main() {
    float x, n, i, result = 0.0;

    printf("Enter the angle and the number of terms: ");
    scanf("%f", &x);
    scanf("%f", &n);

    x = x * (3.14 / 180);

    for (i = 0; i < n; i++) {
        result += (pow(-1, i) * pow(x, 2 * i + 1)) / factorial(2 * i + 1);
    }

    printf("Result BY CODE \n %f", result);
    printf("Result BY COMPILER %f", sin(x));

    return 0;
}
