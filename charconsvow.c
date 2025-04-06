  /*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */


#include <stdio.h>

int main()

{
    char cha;

    printf("Enter a character: ");
    scanf("%c", &cha);


    if ((cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u') ||
        (cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')) {
        printf("%c is a vowel.\n", cha);
    }

    else {
        printf("%c is a consonant.\n", cha);
    }

    return 0;

}
