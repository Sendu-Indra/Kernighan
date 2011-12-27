/*
    Ex. 1-3: Modify the temperature conversion program to print a heading 
    above the table.
    
    Ex. 1-4: Convert from Ceslsius to Fahrenheit

    Print Fahrenheit-Celsius Table (0, 20, 40 ... 300)
    using C = (5/9)(F - 32) 
 */

#include <stdio.h>

int main () 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    
    printf ( "%6s %6s\n", "Celsius", "Fahr" );

    while ( celsius <= upper )
    {
        fahr  = ( 9.0 / 5.0 ) * celsius + 32.0;
        printf ( "%5.0f %8.1f\n", celsius, fahr );
        celsius = celsius + step;
    }
}
