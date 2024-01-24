#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;


    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    discriminant = b * b - 4 * a * c;

  
    switch (signbit(discriminant)) {
        case 0:
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
            break;

        case 1:
            
            root1 = -b / (2 * a);
            root2 = sqrt(fabs(discriminant)) / (2 * a);
            printf("Roots are complex conjugates: %.2lf + %.2lfi and %.2lf - %.2lfi\n", root1, root2, root1, root2);
            break;

        default:
          
            root1 = -b / (2 * a);
            printf("Root is real and equal: %.2lf\n", root1);
            break;
    }

    return 0;
}