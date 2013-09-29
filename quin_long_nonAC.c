#include <stdio.h>
int isPrime (int n) {
    if (n == 1 || (n % 2 == 0 && n > 2)) {
        return 0;
    }
    int i = 3;
    for (; i <= (n / i); i += 2) {
        if ((n % i) == 0) {
            return 0;
        }
    }
    return 1;
}
void print_string (char *s) {
    int i = 0;
    for (; s[i]; i++) {
        putchar (s[i]);
    }
}
char *s[] = {
    "#include <stdio.h>",
    "int isPrime (int n) {",
    "    if (n == 1 || (n % 2 == 0 && n > 2)) {",
    "        return 0;",
    "    }",
    "    int i = 3;",
    "    for (; i <= (n / i); i += 2) {",
    "        if ((n % i) == 0) {",
    "            return 0;",
    "        }",
    "    }",
    "    return 1;",
    "}",
    "void print_string (char *s) {",
    "    int i = 0;",
    "    for (; s[i]; i++) {",
    "        putchar (s[i]);",
    "    }",
    "}",
    "char *s[] = {",
    "};",
    "int main () {",
    "    char quotes = 34, newLine = 10, space = 32, comma = 44;",
    "    char charY = 89, charE = 69, charS = 83, zero = 48;",
    "    int n = 0, firstPart = 20, i, j;",
    "    char number[100];",
    "    gets (number);",
    "    for (i = 0; number[i]; i++) {",
    "        n = n * 10 + (number[i] - zero);",
    "    }",
    "    if (isPrime(n)) {",
    "        putchar (charY);",
    "        putchar (charE);",
    "        putchar (charS);",
    "    } else {",
    "        n = sizeof (s) / sizeof (char *);",
    "        for (i = 0; i < firstPart; i++) {",
    "            puts (s[i]);",
    "        }",
    "        for (i = 0; i < n; i++) {",
    "            for (j = 0; j < 4; j++) {",
    "                putchar (space);",
    "            }",
    "            putchar (quotes);",
    "            print_string (s[i]);",
    "            putchar (quotes);",
    "            if (i < (n - 1)) {",
    "                putchar (comma);",
    "            }",
    "            putchar (newLine);",
    "        }",
    "        for (i = firstPart; i < n; i++) {",
    "            (i < (n - 1)) ? puts (s[i]) : print_string (s[i]);",
    "        }",
    "    }",
    "    return 0;",
    "}"
};
int main () {
    char quotes = 34, newLine = 10, space = 32, comma = 44;
    char charY = 89, charE = 69, charS = 83, zero = 48;
    int n = 0, firstPart = 20, i, j;
    char number[100];
    gets (number);
    for (i = 0; number[i]; i++) {
        n = n * 10 + (number[i] - zero);
    }
    if (isPrime(n)) {
        putchar (charY);
        putchar (charE);
        putchar (charS);
    } else {
        n = sizeof (s) / sizeof (char *);
        for (i = 0; i < firstPart; i++) {
            puts (s[i]);
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < 4; j++) {
                putchar (space);
            }
            putchar (quotes);
            print_string (s[i]);
            putchar (quotes);
            if (i < (n - 1)) {
                putchar (comma);
            }
            putchar (newLine);
        }
        for (i = firstPart; i < n; i++) {
            (i < (n - 1)) ? puts (s[i]) : print_string (s[i]);
        }
    }
    return 0;
}