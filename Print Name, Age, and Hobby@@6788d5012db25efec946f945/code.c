#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[20],hob[20];
    int age;
    scanf("%s %d %s",&name,&age,&hob);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hob);
    }