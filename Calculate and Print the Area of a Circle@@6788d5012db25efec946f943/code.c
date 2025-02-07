#include <stdio.h>

int main() {
    float r;
    float area_of_circle;
    scanf("%f", &r);
    area_of_circle = 3.14 * r * r;
    printf("Area: %.2f", area_of_circle);
    return 0;
}