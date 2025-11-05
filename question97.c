#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    
    printf("Enter your full name: ");
    gets(name);(name, sizeof(name), stdin);

if (name[0] != ' ')
        printf("%c", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf(".%c", name[i + 1]);
        }
        i++;
    }

    printf(".\n");

    return 0;
}
