#include <stdio.h>
#include <stdlib.h>


int main()
{
    float user_input_c, kelvin, fahrenheit;

    printf("Enter the temperature in Celsius : ");
    scanf("%f",&user_input_c);

    kelvin = user_input_c + 273.15;
    fahrenheit = user_input_c * 1.8 + 32 ;


    printf("The Temperature in Kelvin is: %.2f K \n",kelvin);
    printf("The Temperature in Fahrenheit is: %.2f F \n",fahrenheit);


    return 0;
}
