/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */

#include <stdio.h>
int main()

{

    int value1, value2, value3;

    printf("Enter the first value: ");
    scanf("%d", &value1);

    printf("Enter the second value: ");
    scanf("%d", &value2);

    printf("Enter the third value: ");
    scanf("%d", &value3);

    // for detecting the largest number
    int largest = value1;
    if (value2 > largest) {
        largest = value2;
    }
    if (value3 > largest) {
        largest = value3;
    }

    // For detecting the smallest number
    int smallest = value1;
    if (value2 < smallest) {
        smallest = value2;
    }
    if (value3 < smallest) {
        smallest = value3;
    }

    printf("Largest Value: %d\n", largest);
    printf("Smallest Value: %d", smallest);

    return 0;
}

