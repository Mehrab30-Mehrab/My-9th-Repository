#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("no equation is possible\n");
    } else {
        float discriminant = b * b - 4 * a * c;
        if (a == 0) {
            if (b != 0) {
                float root = -c / b;
                printf("Linear equation root: %.2f\n", root);
            } else {
                printf("no equation is possible\n");
            }
        } else if (discriminant > 0) {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
        } else if (discriminant == 0) {
            float root = -b / (2 * a);
            printf("Roots are real and same: %.2f\n", root);
        } else {
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}

