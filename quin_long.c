#include <stdio.h>
#import <string.h>
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
void escape_string (char *s) {
    char ss[500];
    strcpy (ss, s);
    int i = 0, k = 0;
    for (; ss[i]; i++) {
        if (ss[i] == '\"' || ss[i] == '\\') {
            s[k++] = '\\';
        }
        s[k++] = ss[i];
    }
    s[k] = '\0';
}
char s[100][500];
char *ss[] = {
    "#include <stdio.h>",
    "#import <string.h>",
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
    "void escape_string (char *s) {",
    "    char ss[500];",
    "    strcpy (ss, s);",
    "    int i = 0, k = 0;",
    "    for (; ss[i]; i++) {",
    "        if (ss[i] == '\\\"' || ss[i] == '\\\\') {",
    "            s[k++] = '\\\\';",
    "        }",
    "        s[k++] = ss[i];",
    "    }",
    "    s[k] = '\\0';",
    "}",
    "char s[100][500];",
    "char *ss[] = {",
    "};",
    "int main () {",
    "    int n, firstPart = 28, i, j;",
    "    scanf(\"%d\", &n);",
    "    if (isPrime(n)) {",
    "        printf (\"YES\");",
    "    } else {",
    "        n = 53;",
    "        for (i = 0; i < n; i++) {",
    "            strcpy (s[i], ss[i]);",
    "        }",
    "        for (i = 0; i < firstPart; i++) {",
    "            puts (ss[i]);",
    "        }",
    "        printf (\"    \\\"%s\\\"\", ss[0]);",
    "        for (i = 1; i < n; i++) {",
    "            escape_string (s[i]);",
    "            printf (\",\\n    \\\"%s\\\"\", s[i]);",
    "        }",
    "        for (i = firstPart; i < n; i++) {",
    "            printf (\"\\n%s\", ss[i]);",
    "        }",
    "    }",
    "    return 0;",
    "}"
};
int main () {
    int n, firstPart = 28, i, j;
    scanf("%d", &n);
    if (isPrime(n)) {
        printf ("YES");
    } else {
        n = 53;
        for (i = 0; i < n; i++) {
            strcpy (s[i], ss[i]);
        }
        for (i = 0; i < firstPart; i++) {
            puts (ss[i]);
        }
        printf ("    \"%s\"", ss[0]);
        for (i = 1; i < n; i++) {
            escape_string (s[i]);
            printf (",\n    \"%s\"", s[i]);
        }
        for (i = firstPart; i < n; i++) {
            printf ("\n%s", ss[i]);
        }
    }
    return 0;
}