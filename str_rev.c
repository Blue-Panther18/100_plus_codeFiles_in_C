#include <stdio.h>
#include <string.h>

/**
 *
 * stringReverser - reverse a string.
 *
 * @str: the string.
 *
 */

void reverse_string(char *str) {
    int len = strlen(str);

    if (len == 0) {
        return;  // Handle empty strings
    }

    char rev[len];

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }

    strcpy(str, rev);
}

/**
 * main - prints the reverse version of user string.
 *
 *
 * Return: 0
 *
 */

int main() {
    char str[] = "Hello, world!";

    reverse_string(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
