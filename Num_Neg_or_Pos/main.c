#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_input ;

    printf("Enter Your Integer : ");
    scanf("%d",&user_input);

    if (user_input > 0)
        printf("The number you entered is a positive integer. \n");

    else if (user_input < 0)
        printf("The number you entered is a negative integer. \n");

    else
        printf("The number you entered is 0. \n");

    return 0;
}
