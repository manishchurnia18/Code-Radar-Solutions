#include <stdio.h>


int main() {
    int a,b,c,avg;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    avg = (a+b+c)/3.00;
    printf("Average: %.2f", avg);
    return 0;
}