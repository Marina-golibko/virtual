#include <stdio.h>
int main(){
    char first_name[20];
    char last_name[20];
    printf("Введите ваше имя и фамилию: ");
    scanf("%19s %19s", first_name, last_name);
    printf("Имя: %s Фамилия: %s\n", first_name, last_name);
}