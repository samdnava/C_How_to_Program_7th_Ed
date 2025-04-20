#include <stdio.h>

#define SPHERE_VOLUME(r) ((1.33333333333) * (3.14159265359) * ((r) * (r) * (r)))

int main(void) {
    printf("\nMacro with one argument to compute a sphere's volume\n====================================================");

    long double sphereRadius = 0.0;

    printf("\nEnter sphere radius : ");
    scanf("%LF", &sphereRadius);
    printf("\nSphere radius       : %LF\n\n", SPHERE_VOLUME(sphereRadius));

    return 0;
}