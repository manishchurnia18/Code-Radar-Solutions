#include <stdio.h>


int main() {
    char character;
    scanf("%c", &character);
    if(character>='A' && character<='Z'){
        printf("Uppercase");
    }
    else if(character>='a' && character<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}