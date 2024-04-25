#include <stdio.h>
#include <string.h>


int main()
{
    float units;
    float discount;
    char c_name[50] ;
    float rate;
    float totalpay;
    printf("Enter the customer name: ");
    scanf("%s", c_name);
    
    printf("Enter the units consumed by %s : ", c_name);
    scanf("%f", &units);
    printf("Enter the rate per unit : ");
    scanf("%f", &rate);
    
    printf("Discount Slab:");
    printf("\nUnits between 1 - 10 = 10%%");
    printf("\nUnits between 11 - 20 = 15%%");
    printf("\nUnits between 21 - 40 = 30%%");
    printf("\nUnits between 41 - 50 = 50%% \n");

    float pay = units * rate;
   
    
    if(units>=1 && units<=10){
        discount = 0.10;
        totalpay = pay - discount * pay ;
    }   
    else if(units>=11 && units<=20){
        discount = 0.15;
        totalpay = pay - discount * pay ;
    }
    else if(units>=21 && units<=40){
        discount = 0.30;
        totalpay = pay - discount * pay ;
    }
   
   else if(units>=40 && units<=50){
       discount = 0.50;
       totalpay = pay - discount * pay ;
    }
    else{
        printf("Units greater than 50 = No Discount");
        discount = 0;
        totalpay = totalpay;
    }
    
    printf("\n\nCustomer Name : %s", c_name);
    printf("\nUnits consumed : %.2f", units);
    printf("\nPay amount is : Rs. %.2f", pay);
    printf("\nDiscount %% is : %.2f %%", discount*100);

    printf("\nTotal payable amount after discount : Rs. %.2f", totalpay);

    return 0;
}



/* OUTPUT
Enter the customer name: sam
Enter the units consumed by sam : 45
Enter the rate per unit : 10
Discount Slab:
Units between 1 - 10 = 10%
Units between 11 - 20 = 15%
Units between 21 - 40 = 30%
Units between 41 - 50 = 50% 


Customer Name : sam
Units consumed : 45.00
Pay amount is : Rs. 450.00
Discount % is : 50.00 %
Total payable amount after discount : Rs. 225.00


*/
