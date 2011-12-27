/* 
    Ex 2-2: Write a loop equivalent to the for loop below without using && or ||.
    
    ***

    for( i = 0 ; i < lim-1 && ( c = getchar() ) != '\n' && c != EOF ; ++i ) 
        s[i] = c;
    
    ***

    For a program that stores an input line as a string.
*/ 


#include <stdio.h> 

#define MAX 100 

int main() 
{
    int lim = MAX, i = 0, x = 0, c;
    char s[lim];

    while( i < ( lim - 1 ) ) 
    {
        c = getchar();

        if( c == EOF )
            break;
        if( c == '\n' )
            break;
        s[i++] = c;  
    }

    s[i] = '\0'; 
   
    printf( "re-print line: %s\n", s );
   
    return 0;
}
