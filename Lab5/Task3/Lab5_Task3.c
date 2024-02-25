/*
Author:      Axenvio
Date:        15.10.2023
Description:    Создать вручную англоязычный текстовый файл небольшого объема. Найти, сколько всего символов
                содержится в этом файле. Найти количество букв «а», «о», «е». Результаты дописать в этот же файл на
                новой строке.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 700

int main() {
    setlocale(LC_ALL, "rus");
    FILE *data = fopen("C:\\Users\\aksen\\Documents\\Lab\\Lab5\\Task3\\data.txt", "a+");
    if (data == NULL) {
        printf("Ошибка записи/чтения файла");
        return EXIT_FAILURE;
    } else {
        int cnt_smb = 0, cnt_a = 0, cnt_o = 0, cnt_e = 0;
        char ch;
        while ((ch = fgetc(data)) != EOF){
            cnt_smb++;
            if (ch == 'a') cnt_a++;
            if (ch == 'o') cnt_o++;
            if (ch == 'e') cnt_e++;
        }
        fprintf(data, "\nВсего символов: %d", cnt_smb);
        fprintf(data, "\nВсего букв \"a\": %d", cnt_a);
        fprintf(data, "\nВсего букв \"o\": %d", cnt_o);
        fprintf(data, "\nВсего букв \"e\": %d", cnt_e);
    }
    fclose(data);
    return 0;
}
