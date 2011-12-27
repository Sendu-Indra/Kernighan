/*
    Ex 2-1: Write a program to determine the ranges of char, short, int, and long variables,
    both signed and unsigned, by printing appropriate values from standard headers
    and by direct computation. 
*/

#include <stdio.h>
#include <limits.h>

int main() 
{
    printf( "char min: %d char max: %d\n", CHAR_MIN, CHAR_MAX );
    printf( "unsigned char max: %u\n", UCHAR_MAX );
    
    printf( "short min: %d short max: %d\n", SHRT_MIN, SHRT_MAX );
    printf( "unsigned short max: %u\n", USHRT_MAX );

    printf( "int min: %d int max: %d\n", INT_MIN, INT_MAX );
    printf( "unsigned int max: %u\n", UINT_MAX );

    printf( "long min: %ld long max: %ld\n", LONG_MIN, LONG_MAX );
    printf( "unsigned long max: %lu\n", ULONG_MAX );

    return 0;
}
