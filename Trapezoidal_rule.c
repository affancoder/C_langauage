#include<stdio.h>

float f(float x)
{
    float a=1/(1+x);
    return a;
}
int main()
{
    int n;
    float a, b, h, x, s=0.0;
    printf("Enter the lower bound, upper bound & number of interval: ");
    scanf("%f%f%d",&a,&b,&n);
    x=a;
    h=(b-a)/n;
    do
    {
        s = s + (h/2)*(f(x)+f(x+h));
        x=x+h;
    } while(x<b);
    printf("Result: %f",s);
}