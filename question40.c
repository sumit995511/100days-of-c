//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char binary[100];  // to store input binary number
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);  // read binary as string

    // Traverse each bit and flip it
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid binary digit!\n");
            return 1; // exit program if input is not 0/1
        }
    }

    printf("1's Complement: %s\n", binary);

    return 0;
}
