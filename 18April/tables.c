#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("enter the table number: ");
    scanf("%d" , &num);

    for(i = 1; i <= 10; i++ ){
        
        printf(" %d * %d = %d \n ", num, i, i*num);
        
    }
    
    return 0;
}