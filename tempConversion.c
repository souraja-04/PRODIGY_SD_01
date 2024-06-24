#include <stdio.h>
void main()
{
    float userTempInput, celsius, fahrenheit, kelvin;
    printf("Enter the temperature: ");
    scanf("%f", &userTempInput);
    char unit;
    printf("Enter your desired temperature unit: \n");
    printf("Fahrenheit - h\n");
    printf("Celsius - c\n");
    printf("Kelvin - k\n");
    fflush(stdin);
    scanf("%c", &unit);

    if (unit == 'c' || unit == 'C')
    {
        fahrenheit = userTempInput * (9 / 5.0) + 32;
        kelvin = userTempInput + 273;
        printf("Temperature in Fahrenheit is %f, Temperature in Kelvin is %f", fahrenheit, kelvin);
    }

    else if (unit == 'f' || unit == 'F')
    {
        celsius = (userTempInput - 32) * (9 / 5.0);
        kelvin = celsius + 273;
        printf("Temperature in Celsius is %f, Temperature in kelvin is %f", celsius, kelvin);
    }

    else if (unit == 'k' || unit == 'K')
    {
        celsius = userTempInput - 273;
        fahrenheit = celsius * (9 / 5.0) + 32;
        printf("Temperature in Celsius is %f, Temperature in Fahrenheit is %f", celsius, fahrenheit);
    }

    else
    {
        printf("Wrong Input!");
    }
}