#include <stdio.h>

int main()
{
    int first_num;
    int last_num;
    char ch;
    int i;
    printf("Enter your choice: Increment (n) or Decrement (d): ");
    scanf("%c", &ch);
    printf("enter the initial number to be printed: ");
    scanf("%d" , &first_num);

    printf("enter the last number to be printed: ");
    scanf("%d" , &last_num);

    if(ch == 'n')
    {

     for(i=first_num;i<=last_num;i++){
        printf("%d ", i);
        }
    }
    else if(ch == 'd')
    {

     for(i=last_num; i>=first_num; i--){
        printf("%d ", i);
        }
    }

    return 0;
}