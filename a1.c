#include <stdio.h>

int main () {
    char str[1000];
    while (gets(str) != NULL) {
        int i = 0;
        char ch = str[0];
        while (ch == 's' || ch == '0' || ch == 't' || ch == '1' || ch == 'l') {
            if (ch == 's' || ch == '0')
                printf(" ");
            else if (ch == 't' || ch == '1')
                printf("\t");
            else if (ch == 'l')
                printf("\n");
            ch = str[++i];
        }
    }
    return 0;
}