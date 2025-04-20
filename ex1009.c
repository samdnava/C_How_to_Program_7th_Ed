#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int main(void) {

    union floatingPoint fpFloat, fpDouble, fpLDouble;

    printf("\n Enter Float : ");
    scanf("%f", &fpFloat.f);

    printf("\n Enter Double : ");
    scanf("%lf", &fpDouble.d);

    printf("\n Enter Long Double : ");
    scanf("%Lf", &fpLDouble.x);

    printf("\nfpFloat : %f", fpFloat.f);
    printf("\nfpDouble : %lf", fpDouble.d);
    printf("\nfpLDouble : %Lf\n\n", fpLDouble.x);

    return 0;
}