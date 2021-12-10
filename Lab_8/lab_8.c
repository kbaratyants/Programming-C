#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    // Сложение строк:
    char str[100];
    snprintf(str, 100, "It'more than C ");

    char *str2;
    str2 = malloc (25);
    snprintf(str2, 25, "It's bull's shit");
    printf("%s\n", str2);

    int len = strlen(str) + strlen(str2) + 2;
    char *str3;
    str3 = malloc(sizeof(char) * len);
    strcat (str, str2);

    // Сравнение двух строк
    int result;
    result = strcmp(str2, str3);
    printf("%i\n", result);

    // Копирование одной строки в другую
    char *str4;
    str4 = malloc (50);
    strcpy(str4, str2);
    printf("%s\n", str4);

    // Длина строки
    printf("%i\n", len);

    // Поиск вхождения
    char *i = strrchr(str4, 'i');
    if (i == NULL) {
        printf("%s", "There is no searched letter.");
        return 0;
    } else {
        printf("%ld\n", i-str4+1);
        return 0;
    }
}
