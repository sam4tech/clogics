#include <stdio.h>

int main()
{
    char x;;
    printf("Enter a character: ");
    scanf("%c",&x);
    
    if(x =='a'){
        printf("Apple");
    }
    else if(x =='b'){
        printf("Ball");
    }
    else if(x =='c'){
        printf("Cat");
    }
    
    else {
        printf("Input Mismatch!!!");
    }
    return 0;
}
