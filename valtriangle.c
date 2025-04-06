/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */

#include <stdio.h>
int main()
{
    int ang1, ang2, ang3;

    printf("Enter the the first angle:");
    scanf("%d", &ang1);

    printf("Enter the second angle:");
    scanf("%d", &ang2);

    printf("Enter the third angle:");
    scanf("%d", &ang3);

    if (ang1+ang2+ang3==180) {
    printf("This is a valid triangle.");
    }

    else {
    printf("This is an invalid triangle.");
    }

    return 0;


}
