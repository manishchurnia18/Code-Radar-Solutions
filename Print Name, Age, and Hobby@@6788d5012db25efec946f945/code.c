#include <stdio.h>

struct user{
    char name[100];
    int age;
    char hobby[100];
};

int main() {
    struct user user1;
    scanf("%s", user1.name);
    scanf("%d", user1.age);
    scanf("%s", user1.hobby);
    printf("Name: %s\n", user1.name);
    printf("Age: %d\n", user1.age);
    printf("Hobby: %s\n", user1.hobby);
    return 0;
}