#include <stdio.h>
#include "figure.h"

int main()
{
    struct figure triangle;

    printf("X1 = ");
    scanf("%lf", &triangle.X1);
    printf("Y1 = ");
    scanf("%lf", &triangle.Y1);

    printf("X2 = ");
    scanf("%lf", &triangle.X2);
    printf("Y2 = ");
    scanf("%lf", &triangle.Y2);

    printf("X3 = ");
    scanf("%lf", &triangle.X3);
    printf("Y3 = ");
    scanf("%lf", &triangle.Y3);

    printf("Perimeter is: %lf \n", perimeter(triangle));
    printf("Square is: %lf", square(triangle));
}
