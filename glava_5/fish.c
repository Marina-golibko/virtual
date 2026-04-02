#include <stdio.h>

struct exercise{
    const char *description;
    float duration;
};

struct meal{
    const char *integredients;
    float weight;
};

struct preferences{
    struct meal food;
    struct exercise exercise;
};

struct fish{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void catalog(struct fish f)
{
    printf("%s - это %s с %i зубами. Ему %i года\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
    printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов\n", f.name, f.species, f.teeth, f.age);
    printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n", f.care.food.weight, f.care.food.integredients, f.care.exercise.description, f.care.exercise.duration);
}

int main(){
    struct fish snappy = {"Зубастик", "пиранья", 69, 4, {{"мясо", 0.09}, {"купаться в джакузи", 7.5}}};
    printf("Зубастик любит кушать %s\n", snappy.care.food);
    printf("Зубастик любит заниматься %f часов\n", snappy.care.exercise.duration);
    printf("Кличка = %s\n", snappy.name);
    catalog(snappy);
    label(snappy);
    return 0;
}