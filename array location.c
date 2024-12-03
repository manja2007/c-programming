#include <stdio.h>
void main() 
{
    int a[5],i,flag=0,n=5,location,key;
    printf ( " \n enter array values of 5 elements");
    for ( i = 0 ; i < n ; i++)
	scanf ( "%d", &a[i] ) ;
    printf ( " \n enter the key value ");
    scanf ( "%d" , &key );
 
    printf ( " \n print given array \n " ) ;
    for ( i = 0 ; i < n ; i++ )
        printf ( " \t a [ %d ] = %d " , i , a [ i ] );
    printf ( " \n the key value = %d " , key );
    for ( i = 0 ; i < n ; i++ )
    {
        if ( key == a [ i ] )
        {
            flag = 1 ;
            location = i ;
	    count=count+1;
        }
    }
    if ( flag == 1 )
    	printf("\n Successful Search Element Found at a [ %d ] \n ” , location );
    else
    	printf ( " \n Unsuccessful Search- Element not found \n " );
	
}