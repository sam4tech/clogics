/*Q)
r : reverse number 

p :pallindrome number check 

a :armstrong number 

f :factorial 

b :fibonacci

e :45--->90 :even number 

o :34--->2 odd number
*/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    char ch;
    printf("enter your choice:\n");
    printf("r : reverse number\n");
    printf("p : palindrome number\n");
    printf("a : armstrong number\n");
    printf("f : factorial\n");
    printf("b : fibonacci\n");
    printf("e : even number\n");
    printf("o : odd number\n");
    scanf("%c", &ch);
    
    if(ch == 'r'){
    // reverse print 5 to 1
        int num=5;
        
        for(i = num; i >= 1; i--){
            printf("%d ", i);
            
        }
    }
    else if(ch =='p'){
        int num;
        printf("Enter number to reverse:");
        scanf(" %d", &num);
        int rem;
        int sum=0;
        int temp = num;
        while (num > 0){
            rem = num % 10;
            sum = sum * 10 + rem;
            num /=10; 
        }
        printf("reverse of %d = %d\n", temp , sum);
        
        if(temp == sum){
            printf("%d is a palindrome number ", temp);
        }
        else{
        printf("%d is NOT a palindrome number ", temp);
        }
       
    }
    else if(ch == 'a'){
        int num;
        printf("Enter number to check armstrong:");
        scanf(" %d", &num);
        int rem, sum = 0;
        int tmp=num;
        while(num > 0){
            rem = num % 10;
            sum = sum + (rem*rem*rem);
            num = num / 10;
        }
        printf("%d\n", sum);
        if (tmp == sum){
            printf("%d is an armstrong number.", tmp);
        }
        else {
            printf("%d is NOT an armstrong number.", tmp);
        }
    }
    else if(ch =='f'){
        int num;
        int fact=1;
        printf("enter the number: ");
        scanf("%d" , &num);

        for(int i = 1; i <= num; i++ )
        {
            fact = fact * i;
        }
    
        printf("Factorial of %d = %d \n ", num, fact);
        
    }


   else if(ch == 'b'){
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
   }
   
   else if (ch == 'e')
   {
        int first_num;
        int last_num;
        int i, sum = 0;
        printf("enter the initial number: ");
        scanf("%d" , &first_num);

        printf("enter the last number: ");
        scanf("%d" , &last_num);
        printf("Even numbers: \n");
        for(i = first_num; i <= last_num; i++ )
        {
        
            if(i%2==0)
            {
                

                printf("%d\n ", i);
                }
        }
   }
   else if (ch == 'o')
   {
        int first_num;
        int last_num;
        int i, sum = 0;
        printf("enter the initial number: ");
        scanf("%d" , &first_num);

        printf("enter the last number: ");
        scanf("%d" , &last_num);
        printf("Odd numbers: \n");
        for(i = first_num; i <= last_num; i++ )
        {
        
                if(i%2  !=  0)
                {
            
                printf("%d\n ", i);
                }
        }
   }
   else
   printf("invalid input!!!");
   
    return 0;
}