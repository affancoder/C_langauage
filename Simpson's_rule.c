//Simpson 1/3rd rule
#include<stdio.h>

float f(float x)
{
    float a=1/(1+x);
    return a;
}
int main()
{
    int n;
    float a, b, x, h, s = 0.0;

    printf("Input lower bound: ");
    scanf("%f",&a);
    printf("Input upper bound: ");
    scanf("%f",&b);
    printf("Input number of interval: ");
    scanf("%d",&n);

    x=a;
    h=(b-a)/n;

    do
    {
        s = s + (h/3)*(f(x)+4*f(x+h)+f(x+2*h));
        x = x + 2 * h;
    } while(x<b);

    printf("\nResult: %f",s);
    printf("\n----------------");
    return 0;
}