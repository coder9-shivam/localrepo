#include<stdio.h>

int main()
{                              
    int age;    
    int vip = 0;
    // vip = 1;
    printf("enter your age\n");                          
    scanf("%d", &age);       

    if(age <= 70 && age >= 18)                          
    // if((age <= 70 && age>= 18) || !(vip==1))  //  (&& - and ,|| - or ,! - not) --> logical operator
    {                              
        printf("you are above 18 and below 70, you can drive\n");                              

    }                              

    else{                              
        printf("you cannot drive\n");                              

    }
    
    return 0;
}