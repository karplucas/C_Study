/* */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int age;
    printf("What is your age: \n");
    scanf("%d", &age);

    int i_age_in_seconds;

    i_age_in_seconds = age * 365 * 24 * 60 * 60;

    printf("You are: %d seconds old", i_age_in_seconds);
    return 0;
}
