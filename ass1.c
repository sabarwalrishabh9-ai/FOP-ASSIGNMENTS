/*#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is NOT a Leap Year", year);

    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
        printf("the year is an leap year");
    else
        printf("the year is not an leap year");
    return 0;
}
*/
#include<stdio.h>
/*
int main()
{
    int a,b;
    int choices;
    printf("what are your choices");
    scanf("%d",&choices);
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    switch(choices)

    {
        case 1:
            printf("the sum of a and b is %d",a+b);
            break;
        case 2:
            printf("the difference of a and b is %d",a-b);      
            break;
        case 3:
            printf("the product of a and b is %d",a*b);
            break;
        case 4:
            if(b!= 0)
                printf("the quotient of a and b is %d",a/b);
            else
                printf("division by zero is not allowed");
            break;          
        default:
            printf("invalid choice");
    }
    return 0;


}
*/
#include<stdio.h>
/*
int main()
{
    int a;
    int i;
    int res;
    printf("enter the value of a :");
    scanf("%d ",&a);
    for(i=1;i<=10;i++)
    {
        res=a*i;
        printf("%d x %d is = %d\n",a,i,res);
       
    }
  return 0;
} 
  */
 /*

int main()
    {
    float basic_pay, hra, ta, gross_salary, professional_tax, net_salary;

    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basic_pay);

    // Calculate HRA and TA
    hra = 0.10 * basic_pay; // HRA is 10% of basic pay
    ta = 0.05 * basic_pay;  // TA is 5% of basic pay

    // Calculate gross salary
    gross_salary = basic_pay + hra + ta;

    // Calculate professional tax
    professional_tax = 0.02 * gross_salary; // Professional tax is 2% of gross salary

    // Calculate net salary
    net_salary = gross_salary - professional_tax;

    // Display the results
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Professional Tax: %.2f\n", professional_tax);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
*///addition of two matrices
#include<stdio.h>
/*

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, c1, i, j;
    printf("enter no of rows and column");
    scanf("%d %d",&r,&c1);
    printf("enter first matrix");
    for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("enter second matrix");
    for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
            c[i][j]=a[i][j]+b[i][j];

    printf("result is");
    for(i=0;i<r;i++) {
        for(j=0;j<c1;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
*/
/*
struct students{
    char name[50];
    int m1,m2,m3;
    float percentage;
    int roll;
    int total;
    
};

int main()
{
    struct students s[10];
    int n,i;
    printf("enter no of students");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter roll no:");
        scanf("%d",&s[i].roll);

        printf("enter name:");
        scanf("%s",&s[i].name);

        printf("enter marks of thhree subjects:");
        scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percentage=s[i].total/3.0;

    }
     for(i=0;i<n;i++){
            
        printf("roll no: %d \n",s[i].roll);
        printf("name :%s \n",s[i].name);
        printf("total :%d \n",s[i].total);
        printf("percentage :%.2f \n",s[i].percentage);
    }

    return 0;
}
*/
#include<stdio.h>
/*

int main()
{
    int num,originalnum,result,remainder;
    printf("enter a three digit number");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0) {
        remainder= originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum=num/10;
    }
    if(result==num)
        printf("%d is an armstrong number",num);
    else
        printf("%d is not an armstrong number",num);
        return 0;
}
*/
#include <stdio.h>
/*
int main()
{
    int m1,m2,m3,m4,m5;
    float total,percentage;
    printf("enter marks of five subjects");
    printf("Enter marks one by one:\n");
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    scanf("%d",&m4);
    scanf("%d",&m5);
    total =m1+m2+m3+m4+m5;
    percentage=total/5.0;
    printf("total percentage is %.2f",percentage);
    if(total<40)
        printf("result is fail");
    if(percentage>=75){
        printf("grade is distinction");
    }
    else if(percentage>=60){
        printf("grade is first division");
    }
    else if(percentage>=50){
        printf("grade is second division");
    }
    else{
        printf("grade is third division");
    }

}
*/
#include<stdio.h>
int main()
{
    int remainder,num,original_num,result;
    printf("enter an three digit number:");
    scanf("%d",&num);
    original_num=num;
    while(original_num!=0){
    remainder=original_num%10;
    result+=remainder*remainder*remainder;
    original_num=num/10;
    }
    if(result=num){
        printf("number is an armstrong number\n");

    }
    else{
        printf("number is not an armstrong number");
    }
    return 0;

}