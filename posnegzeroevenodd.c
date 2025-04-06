#include <stdio.h>
int main ()
{
    //taking an integer veriable as "penguin"
    int penguin;
    printf("Enter the number: ");
    scanf("%d", &penguin);


// for detecting positive,negetive or zero
    if (penguin>0)
    {
        printf("The provided number is a positve number. \n" );

    } else if (penguin<0)
    {
        printf("The provided number is a negative number. \n");
    } else
    {
        printf("The provided number is a zero. /n");
    }


//for detecting even or odd
    if (penguin % 2 == 0)
    {
        printf("The provided number is an EVEN number. \n");
    } else
    {
        printf("The provided number is an ODD number.");
    }

return 0;

}
