//1--->10 even number 

#include <stdio.h>

int main()
{
    int first_num;
    int last_num;
    int i, sum = 0;
    printf("enter the initial number: ");
    scanf("%d" , &first_num);

    printf("enter the last number: ");
    scanf("%d" , &last_num);

    for(i = first_num; i <= last_num; i++ ){
        
        if(i%2==0){
  
            printf("%d\n ", i);
        }
    }
    
    return 0;
}