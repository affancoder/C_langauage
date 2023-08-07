#include<stdio.h>
#include<stdlib.h>
float f(float x,float y)
{
    float a;
    a=((y-x)/(y+x));
    return a;
}
int main()
{
    float x0,y0,xn,h,y1;
    printf("Enter the x0 & y0 & xn ");
    scanf("%f%f%f",&x0,&y0,&xn);
    h=0.02;
    do {
        y1=y0+(h*f(x0,y0));
        x0=x0+h;
        y0=y1;
    } while(x0<=xn);
    printf("%f",y1);
}