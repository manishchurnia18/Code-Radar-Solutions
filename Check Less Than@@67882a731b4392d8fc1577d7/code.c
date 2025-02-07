#include <stdio.h>


int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b || a==b){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}