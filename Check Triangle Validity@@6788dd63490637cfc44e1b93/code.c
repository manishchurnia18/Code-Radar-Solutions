#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    // Triangle validity condition: Sum of any two sides must be greater than the third
    if(a+b>c&&b+c>a&&a+c>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}