
#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=1; i<=5 ; i++)
    {
        for(j=1; j<=5; j++)
        {
            if( i==1 || i==5 || j==1 || j==5 )
            {
                printf("* ");
            }
            else{
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}


/* Output:

* * * * * 
* 2 2 2 * 
* 3 3 3 * 
* 4 4 4 * 
* * * * * 

*/
