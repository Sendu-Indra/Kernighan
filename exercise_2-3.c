/*
    Ex 2-3:
   
    note - a naive solution according to the material presented upto 
           this point in the book (pg. 46)
    
    Write the function htoi( s ), which converts a string of hexadecimal digits 
    (including an optional 0x or 0X) into its equivalent integer value. 
    The allowable digits are 0 through 9, a - f, and A - F.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// returns an integer value for a hexadecimal string
int htoi( char * s );

// converts each hexadecimal char to appropriate integer value
int ctoi( int pos, char c );

// change string to test cases: e.g. 0Xf4f, 00f4f, F4f, etc.
char test[] = "x0xf4f";

int main()
{
    int result = htoi( test );
        
    if( result == -1 )
        printf( "INVALID\n" );
    else
        printf( "%d\n", result );

    return 0;
}

int htoi( char* s )
{
    int i = 0;
    int result = 0;

    // check for invalid prefix ( i.e. 00 )
    if( s[i] == '0' )
    {   
        i++;
        
        if( s[i] != 'X' && s[i] != 'x' )
        {
            return -1;
        }

        i++;
    }
  
    // check for valid input range and determine result accordingly
    while( s[i] != '\0' )
    {
        if( ( s[i] >= '0' && s[i] <= '9') || ( s[i] >= 'A' && s[i] <= 'F' ) || ( s[i] >= 'a' && s[i] <= 'f' ) )
        {
            result += ctoi( i, s[i] );
        }
        else
        {
            return -1;
        }

        i++;
    }

    return result;
}

int ctoi( int pos, char c )
{
    int result;
    double x;

    // determine order of position
    x = ( double )( strlen( test ) - 1 - pos );
    
    // covert char according to ANCII and order
    if( c >= 'a' && c <= 'f' )
    {
        printf( "16 exp %d, c %c = %d\n", ( int ) x, c, c - 87 );
        result = ( c - 87 ) * ( int )( pow( 16.0, x ) ); 
    }
    else if( c >= 'A' && c <= 'F' )
    {
        printf( "16 exp %d, c %c = %d\n", ( int ) x, c, c - 55 );
        result = ( c - 55 ) * ( int )( pow( 16.0, x ) ); 
    }
    else
    {
        printf( "16 exp %d, c %d\n", ( int ) x, c - 48 );
        result = ( c - 48 ) * ( int )( pow( 16.0, x ) ); 
    }
    
    return result;
}
