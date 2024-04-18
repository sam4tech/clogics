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

int main()
{
    int rollno, contact;
    char name, fname, mname, address,
    int num1, num2, num3, tot_marks, result, percent;
    printf("Enter roll number: ");
    scanf("%d",&rollno);
    printf("Enter student name: ");
    scanf("%c%d%d%d", &name, &fname, &mname, &address, &contact);
    printf("Enter student father name: ");
    scanf("%c", &fname, &mname, &address, &contact);
    printf("Enter student mother name: ");
    scanf("%c", &mname, &address, &contact);
    printf("Enter student address: ");
    scanf("%c", &address, &contact);
    printf("Enter student contact: ");
    scanf("%d", &contact);
    
    
    
    printf("Enter marks for 3 subjects: ");
    scanf("%d%d%d",&num1, &num2, &num3);
    tot_marks =   num1 + num2 + num3;
    printf("Total marks for 3 subjects: %d", tot_marks);
    
    result = tot_marks / 300;
    percent = result*100;
    printf("Total percentage: %d", percent);
    

    
    if( percent > 80 ){
        printf("GRADE A");
    }
    else if( percent >= 60 && percent <= 80 ){
        printf("GRADE B");
    }
    else if( percent >= 50 && percent < 60 ){
        printf("GRADE C");
    }
    else if( percent >= 45 && percent < 50 ){
        printf("GRADE D");
    }
    else if( percent >= 25 && percent < 45 ){
        printf("GRADE E");
    }
    else if( percent < 25 ){
        printf("GRADE F");
    }
    else{
        printf("FAIL");
    }
    return 0;
}