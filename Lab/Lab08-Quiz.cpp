#include <stdio.h>

int main() // start function
{

    int ip = 0, sum = 1 ;
    bool loop = false ;

    do
    {   
        loop = true ;

        printf( "Enter Number [1>] : \n" ) ;
        
        loop = true ;

        if(scanf( "%d", &ip ) == 1 ){ // start if
            if ( ip >= 10 ) // start else if
        {
            for ( int i = ip ; i > 0 ; i-- ) // start for loop (i > 0)
            {
                for ( int i2 = 0 ; i2 < i ; i2++ ) // start for loop (i2 < i)
                {
                    printf( "* " ) ;
                } // end for loop (i2 < i)

                printf( "\n" ) ;

                for ( int i3 = 0 ; i3 <= ip - i ; i3++ ) // start for loop (i3 <= ip)
                {
                    printf( " " ) ;
                } // end for loop (i3 <= ip)
            } // end for loop (i > 0)
            break ; // end loop
        } // end else if

        else if ( ip >= 1 && ip < 10 ) // start else if
        {
            for ( int i = 0 ; i < ip ; i++ ) // Start for loop (i < ip)
            {
                

                for ( int j = 1 ; j <= ip - i ; j++ ) // Start for loop (j <= ip - i)
                {   
                    printf( "  " );
                } // end for loop (j <= ip - i)
                

                for ( int j = 0 ; j <= i ; j++ ) // Start for loop (j <= i)
                {
                    if ( j == 0 || i == 0 ) // start if
                    {
                        sum = 1 ;
                    } // end if

                    else // start else
                    {
                        sum = sum * (i - j + 1) / j ;
                    } // end else

                
                
                    printf( "%3d ", sum ) ;
                } // end for loop (j <= i)

                printf( "\n" ) ;
            } // end for loop (i < ip)
            break ;
        } // end else if

        else if ( ip <= 0 && ip != false ) { // start else 
        printf( "wrong input number try again\n" ) ;
        loop = false ;
             } // end else if
        } // end if

        else {
            printf( "Wrong input Error, go sleep!\n" ) ;
            loop = false ;
            scanf("%*s");
             }

    }while ( !loop ) ;// end do while 

    return 0 ;
} // end function




