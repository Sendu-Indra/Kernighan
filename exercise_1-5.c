/* 
    Ex. 1-5: Modify the temperature conversion program to print the table in reverse 
    order, that is from, 300 to 0 ( Fahrenheit-Celsius )
*/

#include <stdio.h>

int main () 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    printf ( "%3s %6s\n", "Fahr", "Celsius" );
    
    for ( fahr = upper; fahr >= lower; fahr -= step )
    {
        celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        printf ( "%3.0f %6.1f\n", fahr, celsius );
    }
}
