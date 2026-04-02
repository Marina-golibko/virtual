#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

// Функция из предыдущих шагов: создает остров в динамической памяти
island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

// ФУНКЦИЯ ИЗ ВАШЕГО ИЗОБРАЖЕНИЯ: освобождает всю цепочку островов
void release(island *start) {
    island *i = start;
    island *next = NULL;
    for (; i != NULL; i = next) {
        next = i->next;    // 1. Сначала сохраняем адрес следующего острова
        free(i->name);     // 2. Освобождаем строку с именем (созданную strdup)
        free(i);           // 3. Освобождаем саму структуру острова
    }
}

void display(island *start) {
    island *i = start;
    for (; i != NULL; i = i->next) {
        printf("Остров: %s \nВремя работы: %s-%s\n", i->name, i->opens, i->closes);
    }
}

int main() {
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];

    printf("Введите названия островов (Ctrl+D для завершения):\n");

    // Цикл ввода из упражнения
    for (; fgets(name, 80, stdin); i = next) {
        name[strcspn(name, "\n")] = 0; // убираем перенос строки
        next = create(name);
        if (start == NULL) {
            start = next;
        }
        if (i != NULL) {
            i->next = next;
        }
    }

    // ИСПОЛЬЗОВАНИЕ, как на картинке:
    printf("\n--- Результат ---\n");
    display(start); // Выводим список
    release(start); // ТУТ ЖЕ очищаем память

    return 0;
}
