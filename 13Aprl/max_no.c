#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1, &num2);
    if(num1 > num2 ){
        printf("Num1 is greater than Num2");
    }
    else if(num2 > num1){
        printf("Num2 is greater than Num1");
    }
    else{
        printf("Num1 is equal to Num2");
    }
    return 0;
}