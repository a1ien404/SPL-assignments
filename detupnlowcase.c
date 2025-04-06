/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */
#include <stdio.h>
int main ()
{
    char cha;

    printf("Enter a letter/character:");
    scanf("%c", &cha);

    if (cha >= 'A' && cha <= 'Z') {
        printf("The letter/character is an uppercase alphabet: %c\n", cha);
    }

    else if (cha >= 'a' && cha <= 'z') {
        printf("The letter/character is a lowercase alphabet: %c\n", cha);
    }

     else {

        printf("The character is not an alphabet.\n");
    }



    return 0;

}
