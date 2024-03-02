#include <stdio.h>

int main () {
    float degC_temp;

    printf("Enter Temperature in Degree Celsius: ");
    scanf("%f",&degC_temp);

    float fah_temp = ((9 * degC_temp) / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f", fah_temp);
    return 0;

}