
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5,  tot_marks, result, percent;
    printf("Enter marks for 5 subjects: ");
    scanf("%d%d%d%d%d",&num1, &num2, &num3, &num4, &num5);
    tot_marks =   num1 + num2 + num3 + num4 + num5;
    result = tot_marks / 500;
    percent = result*100;
    
    if( percent > 80 ){
        printf("GRADE A");
    }
    else if( percent >= 60 && percent <= 80 ){
        printf("GRADE B");
    }
    else if( percent >= 50 && percent < 60 ){
        printf("GRADE C");
    }
    else if( percent >= 45 && percent < 50 ){
        printf("GRADE D");
    }
    else if( percent >= 25 && percent < 45 ){
        printf("GRADE E");
    }
    else if( percent < 25 ){
        printf("GRADE F");
    }
    else{
        printf("FAIL");
    }
    return 0;
}