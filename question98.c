#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0, len, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);
    len = strlen(name);

for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < lastSpace)
            printf("%c.", name[i + 1]);
    }

    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace + 1]);
    else
        printf("\n");  

    return 0;
}
