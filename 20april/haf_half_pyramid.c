#include <stdio.h>

int main()
{
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
     for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
         printf(" * ");
      }
      printf("\n");
   }
   for (i = 1; i <= rows; i++) {
      for (j = rows; j >= i; j--) {
         printf(" * ");
      }
      printf("\n");
   }
  
   return 0;
}
/*
Enter the number of rows: 5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 * 
 
 */