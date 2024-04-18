#include <stdio.h>

int main()
{
    char x;;
    printf("Enter a character: ");
    scanf("%c",&x);
    
    if(x =='a'){
        printf("Addition ::\n");
        int n1,n2,n3;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        n3 = n1 + n2;
        printf("%d", n3);
    }
    else if(x =='s'){
        printf("Subtraction ::\n");
        int n1,n2,n3;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        n3 = n1 - n2;
        printf("%d", n3);
    }
    else if(x =='m'){
        printf("Multiplication ::\n");
        int n1,n2,n3;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        n3 = n1 * n2;
        printf("%d", n3);
    } 
    else if(x =='d'){
        printf("Division ::\n");
        int n1,n2,n3;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        n3 = n1 / n2;
        printf("%d", n3);
    }
    else if(x =='o'){
        printf("Modulas ::\n");
        int n1,n2,n3;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        n3 = n1 % n2;
        printf("%d", n3);
    }
    else {
        printf("Input Mismatch!!!");
    }
    return 0;
}