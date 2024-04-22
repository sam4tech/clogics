#include <stdio.h>
int main() {
int rows, cols, num = 1;
int i,j;
printf("Enter the number of rows and columns: ");
scanf("%d", &rows);
cols = rows;
for (i = 1; i <= rows; i++) {
for (j = 1; j <= cols; j++) {
printf("%d ", num);
num += rows; // Increment by the number of rows for the next column
}
printf("\n");
num = i + 1; // Start next row with the next number
}
return 0;
}
/*
Enter the number of rows: 5
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
*/