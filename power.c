/*find power of a number*/
#include<stdio.h>

int main()
{
    float n,b, result;
    printf("Enter the number: ");
    scanf("%f %f",&n,&b);

    //result=sqrt(n);
    printf("power of %f is %f",n,pow(n,b));
    return 0;
}