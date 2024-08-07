#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char* str) {
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        }
        else {
            if (!inWord) {
                str[i] = toupper(str[i]);
                inWord = 1;
            }
            else {
                str[i] = tolower(str[i]);
            }
        }
    }
}

int main() {
    char name[] = "Tran Quoc Tuan";

    printf("Chuoi ten la: %s\n", name);

        int hasUpper = 0;

        for (int i = 0; name[i] != '\0'; i++) {
            if (isupper(name[i])) {
                hasUpper = 1;
                break;
            }
        }

        if (hasUpper) {
            printf("Chuoi chua ky tu hoa.\n");
        }
        else {
            printf("Chuoi khong chua ky tu hoa.\n");
        }

        int wordCount = 0;
        int inWord = 0;

        for (int i = 0; name[i] != '\0'; i++) {
            if (isspace(name[i])) {
                if (inWord) {
                    inWord = 0;
                    wordCount++;
                }
            }
            else {
                inWord = 1;
            }
        }

        if (inWord) {
            wordCount++;
        }

        printf("So tu trong chuoi la: %d\n", wordCount);

         char ch;
    int found = 0;

    printf("Nhap ky tu de kiem tra: ");
    scanf_s(" %c", &ch);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ch) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Ky tu '%c' co trong chuoi.\n", ch);
    }
    else {
        printf("Ky tu '%c' khong co trong chuoi.\n", ch);
    }

        char fullName[] = "Tran Quoc Tuan";
        char firstPart[100];
        char lastPart[100];

        char* lastSpace = strrchr(fullName, ' ');
        if (lastSpace != NULL) {
            strncpy_s(lastPart, lastSpace + 1, sizeof(lastPart));
            lastPart[sizeof(lastPart) - 1] = '\0';

            int firstPartLength = lastSpace - fullName;
            strncpy_s(firstPart, fullName, firstPartLength);
            firstPart[firstPartLength] = '\0';

            printf("Chuoi 1: %s\n", firstPart);
            printf("Chuoi 2: %s\n", lastPart);
        }
        else {
            printf("Khong co du lieu de tach.\n");
        }

        capitalize(name);
        printf("Chuoi sau khi chuan hoa: %s\n", name);

        char fullName[] = "Tran Quoc Tuan";
        char firstName[100];
        char lastName[100];

        char* lastSpace = strrchr(fullName, ' ');
        if (lastSpace != NULL) {
            strncpy(lastName, lastSpace + 1, sizeof(lastName));
            lastName[sizeof(lastName) - 1] = '\0';

            int firstNameLength = lastSpace - fullName;
            strncpy(firstName, fullName, firstNameLength);
            firstName[firstNameLength] = '\0';

            printf("Ten %s %s\n", lastName, firstName);
        }
        else {
            printf("Khong co du lieu de bien doi.\n");
        }

        char fullName[] = "Tran Quoc Tuan";
        char* namePtr = strstr(fullName, "Van");
        if (namePtr) {
            printf("Gioi tinh: Nam\n");
        }
        else if (strstr(fullName, "Thi")) {
            printf("Gioi tinh: Nu\n");
        }
        else {
            printf("Khong the xac dinh gioi tinh.\n");
    return 0;
}
