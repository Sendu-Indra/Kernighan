/*
    Verify that the expression getchar() != EOF is 0 or 1
*/

#include <stdio.h>

int main()
{
    printf( "Press a key: 'enter' or ctrl-d (for EOF).\n" );
    printf( "The expression getchar() != EOF evaluates to: %d\n", getchar() != EOF );

    return 0;
}
