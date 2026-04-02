#include <stdio.h>

void catalog(const char *name, const char *species, int teeth, int age)
{
    printf("%s - это %s с %i зубами. Ему %i года\n", name, species, teeth, age);
}

void label(const char *name, const char *species, int teeth, int age)
{
    printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов\n", name, species, teeth, age);
}

int main(){
    catalog("Зубастик", "пиранья", 69, 4);
    label("Зубастик", "пиранья", 4, 69);
    return 0;
}