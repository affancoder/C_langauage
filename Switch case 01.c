#include<stdio.h>

int main()

{
    int age;
    
    printf("enter the age\n");
    scanf("%d",&age);
    
    switch(age)
    
    {
        case 3:
             printf("the age is 3\n");
             break;
        
        case 13:
             printf("the age is 13\n");
             break;
      
        case 23:
             printf("the age is 23\n");
             break;
            
        case 33:
             printf("the age is 33\n");
             break;
            
        default:
             printf("age is not 3,13 or 23\n");
             break;
     
    }
    
    return 0;
    
}
