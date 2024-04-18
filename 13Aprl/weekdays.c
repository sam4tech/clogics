
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num == 1){
        printf("SUNDAY");
    }
    else if(num == 2){
        printf("MONDAY");
    }
    else if(num == 3){
        printf("TUESDAY");
    }
    else if(num == 4){
        printf("WEDNESDAY");
    }
    else if(num == 5){
        printf("THURSDAY");
    }
    else if(num == 6){
        printf("FRIDAY");
    }
    else if(num == 7){
        printf("SATURDAY");
    }
    else {
        printf("Input Mismatch");
    }
    return 0;
}