#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2, num_3, num_4, num_5;
    int largest, smallest;

    printf("Enter 5 integers (With a space in between): ");
    scanf("%d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5);

    largest = num_1;
    smallest = num_1;

    //largest number logic

    if (largest < num_2)
        largest = num_2;

    if (largest < num_3)
        largest = num_3;

    if (largest < num_4)
        largest = num_4;

    if (largest < num_5)
        largest = num_5;

    //smallest number logic

    if (smallest > num_2)
        smallest = num_2;

    if (smallest > num_3)
        smallest = num_3;

    if (smallest > num_4)
        smallest = num_4;

    if (smallest > num_5)
        smallest = num_5;


    printf("The largest no. among five is : %d \n",largest);
    printf("The smallest no. among five is : %d \n",smallest);
    return 0;
}
