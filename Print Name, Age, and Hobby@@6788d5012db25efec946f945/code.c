#include <stdio.h>

int main() {
    char Name[100];
    int Age;
    char Hobby[100];
    scanf("%s %d %s",&Name,&Age,&Hobby);
    printf("Name : %s\nAge: %d\nHobby: %s",Name,Age,Hobby);
    return 0;
}