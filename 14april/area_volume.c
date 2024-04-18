
#include <stdio.h>

int main()
{
    char ch;
   
    printf("Enter your choice in Area (a) / Volume (v): ");
    scanf("%c", &ch);
    if( ch =='a')
    {
        printf("Area to be calculated\n");
        char shape;
        scanf("%c", &shape);
        printf("Enter the choice of shape Triangle(t), Square (s), Rectangle (r): ");
        scanf("%c", &shape);
        
        if(shape == 't'){
            float area_tr;
            float h , b;
            printf("Enter base and height of triangle: \n");
            scanf("%f%f", &b, &h);
            area_tr = (0.5)*b*h;
            printf("Area of the triangle is : %f", area_tr);
            
        

        }else if(shape == 's'){
            
            float area_sq, side;
            printf("Enter side of square: \n");
            scanf("%f", &side);
            area_sq = side * side;
            printf("Area of the square is : %f", area_sq);

            
            
        }else if(shape == 'r'){
            float area_rect;
            float length, breadth;
            printf("Enter length and breadth of rectangle: \n");
            scanf("%f%f", &length, &breadth);
            area_rect = length * breadth;
            printf("Area of the rectangle is : %f", area_rect);
        }
        else {
            printf("Invalid entry.. try again!!");
        }
        
        
    }
    else if( ch == 'v'){
        
        printf("Volume to be calculated\n");
        char shape;
        printf("Enter the choice of shape Triangle(t), Square (s), Rectangle (r): ");
        scanf("%c", &shape);
        
        if(shape == 't'){
            printf("triangle volume");

        }else if(shape == 's'){
            
        }
        else if(shape == 'r'){
            
        }
        else {
            printf("Invalid entry.. try again!!");
        }
        
        
        
    }
    else{
        printf("Input Mismatch !!!");
    }
        
    return 0;
}
