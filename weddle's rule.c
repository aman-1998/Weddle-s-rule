#include<stdio.h>
float f(float x);
int main()
{
    float a,b,h,s,y0,yn;
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    if(n%6!=0)
    {
        printf("\nFor n=%d Simpson'S 1/3 rule is not valid\n",n);
        return 0;
    }
    h=(b-a)/n;
    y0=f(a);
    yn=f(a+n*h);
    s=y0+yn;
    for(i=1;i<=n-1;i++)
    {
        if(i%6==0)
            s=s+2*f(a+i*h);
        else if(i%3==0)
            s=s+6*f(a+i*h);
        else if(i%2==0)
            s=s+f(a+i*h);
        else
            s=s+5*f(a+i*h);
    }
    s=(3*h/10)*s;
    printf("Answer = %f",s);
    return 0;
}
float f(float x)
{
    float y;
    y=1/(1+x*x);
    return y;
}

