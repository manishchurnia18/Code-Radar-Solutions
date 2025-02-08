#include <stdio.h>

int max_number(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d", max_number(a,b));
    return 0;
}