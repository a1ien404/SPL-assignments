/*Name: Md. Misbaur rahman
    ID: 04325105101039
    Sec: 1A2 */

#include <stdio.h>

int main() {
    float physics, chemistry, biology, maths, computer, totalmarks, percentage;



    printf("Enter marks for Biology: ");
    scanf("%f", &biology);
    printf("Enter marks for Maths: ");
    scanf("%f", &maths);
    printf("Enter marks for Computer: ");
    scanf("%f", &computer);
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);


    totalmarks = computer + chemistry + biology + maths + physics;

    percentage = (totalmarks / 500) * 100;


    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else if (percentage >= 40) {
        printf("Grade: E\n");
    }
    else {
        printf("Grade: F\n");
    }

return 0;

}
