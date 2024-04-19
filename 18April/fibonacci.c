#include <stdio.h>

int main()
{
    int n1=0;
    int n2=1;
    int n3, num;
    
    printf("enter the total number in fibonacci series: ");
    scanf("%d" , &num);
    printf("%d %d ", n1,n2);
    for(int i = 1; i <= num; i++ ){
        n3 = n1 + n2;
        printf("%d ", n3);
        n1=n2;
        n2=n3;
    }
    
    return 0;
}