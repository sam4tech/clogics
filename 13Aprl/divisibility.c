
#include <stdio.h>


int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if( a%2 == 0 && a%3 == 0){
        printf("Number is Divisible by 2 and 3 both");
    }
    else if( a%5 == 0 && a%10 == 0){
        printf("Number is Divisible by 5 and 10 both");
    }
    else if( a%4 == 0 && a%5 == 0){
        printf("Number is Divisible by 4 and 5 both");
    }
    else if( a%9 == 0 && a%11 == 0){
        printf("Number is Divisible by 9 and 11 both");
    }
    else if( a%8 == 0 || a%9 == 0){
        printf("Number is Divisible by 8 or 9 ");
    }
    else if( a%23 == 0 || a%67 == 0){
        printf("Number is Divisible by 23 or 67 ");
    }
    else{
        printf("Number is not Divisible");
    }
  return 0;
}