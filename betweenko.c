/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */

#include <stdio.h>

int main()
{
    char cha;

    printf("Enter a character: ");
    scanf("%c", &cha);


    if (cha == 'k' || cha == 'l' || cha == 'm' || cha == 'n' || cha == '0') {
        printf("%c is between k and o.\n", cha);
    } else {
        printf("%c is not between k and o.\n", cha);
    }

    return 0;
}
