#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER "abcdefghijklmnopqrstuvwxyz"
#define UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "0123456789"
#define SPECIAL "!@#$%^&*()-_=+<>?"

void generatePassword(int length) {
    char charset[] = LOWER UPPER DIGITS SPECIAL;
    int charsetSize = sizeof(charset) - 1;
    char password[length + 1];

    // Seed the random number generator
    srand(time(NULL));

    // Generate the password
    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % charsetSize];
    }
    password[length] = '\0'; // Null-terminate the string

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;

    printf("Enter the length of the password: ");
    scanf("%d", &length);

    generatePassword(length);

    return 0;
}