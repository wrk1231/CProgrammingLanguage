
#include <stdio.h>
/* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -30;
    upper = 100;
    step = 5;
    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    celsius = lower;
    printf("Celsius - Fahr\n");
    while (celsius <= upper)
    {   
        fahr = celsius *9.0 / 5.0 + 32.0;
        // celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        // fahr = fahr + step;
        celsius += step;
    }
    return 0;
}