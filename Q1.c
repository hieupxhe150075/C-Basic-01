#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x;
    printf("Enter a = ");scanf("%lf",&a);
    printf("Enter b = ");scanf("%lf",&b);
    printf("Enter c = ");scanf("%lf",&c);
    printf("Enter x = ");scanf("%lf",&x); 
    if((b*b-4*a*c)> 0)
		{
        printf("S1 = %lf, S2 = %lf", a*x*x+b*x+c,sqrt(b*b - 4*a*c));
		}
    else
    {
        printf("S1 = %lf, S2 = 0", a*x*x+b*x+c);
    }
    printf("\nEnter a, b, c = ");
    scanf("%lf%lf%lf",&a,&b,&c);
    double p = (a+b+c)/2;
    if((a+b<=c)||(b+c<=a)||(c+a<=b))
    {
        printf("\na, b, c are not sides of a triangle");
    }
    else
    {
    	printf("\nPerimeter =  %lf\nArea = %lf",a+b+c,sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    
    return 0;
}
