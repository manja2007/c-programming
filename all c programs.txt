printing a to z 

#include <stdio.h>
void main()
{
	int i;
    for(i=65;i<91;i++)
		printf( "%c", (char)i );
    printf("\n");
    for(i=97;i<123;i++)
		printf( "%c", (char)i );
}

sum of first 10 elements with its square using array
#include<stdio.h>
void main()
{
    int x[10],i, value, total=0, size ;
    clrscr();
    for( i = 0 ; i < 10 ; i++ )
    {
	scanf("%d", &value) ;
	x[i] = value ;
    }
    for( i = 0 ; i < 10 ; i++ )
	total = total + x[i] * x[i] ;
    printf("\ntotal = %d\n", total) ;
    getch();
}

sum of first 5 elements with its square using array along tracing with printf before and after

#include<stdio.h>
void main()
{
    int x[5] , i , total=0;
    for( i = 0 ; i < 5 ; i++ )
    {
    	printf("enter %d value of x[%d]=",i+1,i);
    	scanf("%d", &x[i]) ;
    }
    for( i = 0 ; i < 5 ; i++ )
    {
        int b_total=total;
        printf("\n before total=%d i=%d",total,i);
        printf("\n total+x[i]*x[i]");
	    printf("\n %d+%d*%d",b_total,x[i],x[i]);
	    total = b_total + x[i] * x[i] ;
	    printf("\n after total+x[i]*x[i]");
	    printf("\n %d=%d+%d*%d",total,b_total,x[i],x[i]);
	    printf("\n after total = %d \n",total);
    }
    printf("\n  total = %d \n", total) ;
}

sum of first N elements with its square using array


finding array location
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

3d array program
#include <stdio.h>
void main()
{
    int a[2][3][2] = {0, 1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11};
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
                {
                    printf("\t arr[%d][%d][%d]=%d",i,j,k,a[i][j][k]);
                }
                printf("\n");
        }
        printf("\n");
    }

    
}

3d array program different declaration
#include <stdio.h>
void main()
{
	int arr[2][3][2] = { { { 0, 1 }, { 2, 3 }, { 4, 5 } },  { { 6, 7 }, { 8, 9 }, { 10, 11 } } };
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
                {
                    printf("\t arr[%d][%d][%d]=%d",i,j,k,a[i][j][k]);
                }
                printf("\n");
        }
        printf("\n");
    }

    
}

program to sum of principal diagonal of a given matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],n,i,j,sum=0;
	clrscr();
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Array elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\n sum of principal diagonal = %d",sum);

	getch();
}
