/*
Write a c program to read the roll no, name,fnname and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
student name : 
fname:
mname:
address:
contact:
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
total: 
precentage : % 
division:
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int rollno ;
 char name[50], fname[50], mname[50], address[50], contact[50];
    int num1, num2, num3, tot_marks, result, percent;
   printf("Enter roll number: ");
    scanf("%d",&rollno);
    printf("Enter student name: \n");
    scanf("%s", name);
    printf("Enter student father name: \n");
    scanf("%s", fname);
    printf("Enter student mother name:\n ");
    scanf("%s", mname);
    printf("Enter student address: \n");
    scanf("%s", address);
    printf("Enter student contact: \n");
    scanf("%s", contact);
  
    
    
    
    printf("Enter marks for 3 subjects: \n");
    scanf("%d%d%d",&num1, &num2, &num3);
    tot_marks =   num1 + num2 + num3;
    printf("\nTotal marks for 3 subjects: %d", tot_marks);
    
   // result = tot_marks / 300;
    percent = (tot_marks*100) / 300;
    printf("\nTotal percentage: %d", percent);
    

    
    if( percent >= 80 ){
        printf("\nGRADE A");
    }
    else if( percent >= 60 && percent < 80 ){
        printf("\nGRADE B");
    }
    else if( percent >= 50 && percent < 60 ){
        printf("\nGRADE C");
    }
    else if( percent >= 45 && percent < 50 ){
        printf("\nGRADE D");
    }
    else if( percent >= 25 && percent < 45 ){
        printf("\nGRADE E");
    }
    else if( percent < 25 ){
        printf("\nGRADE F");
    }
    else{
        printf("FAIL");
    }
    return 0;
}

/*
Enter roll number: 004
Enter student name: 
sam
Enter student father name: 
paa
Enter student mother name:
maa
Enter student address: 
vcfgdkjljjg'4523
Enter student contact: 
1234567890
Enter marks for 3 subjects: 
20
90
100

Total marks for 3 subjects: 210
Total percentage: 70
GRADE B

*/