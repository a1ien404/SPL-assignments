/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */

#include <stdio.h>

int main() {
    char cha;


    printf("Enter a character: ");
    scanf("%c", &cha);

    /*Combining the conditions for (A-Z) and(a-z)
    letters using the OR operator, then checking
    whether the character is an alphabet, digit, or symbol.*/

    if ((cha >= 'A' && cha <= 'Z') || (cha >= 'a' && cha <= 'z')) {
        printf("The character is an alphabet.\n");
    }

    else if (cha >= '0' && cha <= '9') {
        printf("The character is a digit.\n");
    }

    else {
        printf("The character is a symbol.\n");
    }


    return 0;
}
