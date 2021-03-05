#include <stdio.h>
int main(){
    double a,b,c;
    printf("Enter a = ");
    scanf("%lf",&a);
    printf("Enter b = ");
    scanf("%lf",&b);
    printf("Enter c = ");
    scanf("%lf",&c);
    if(a >= b && a >= c){
        printf("Max = %lf",a);
    }
    else if(b >= c){
        printf("Max = %lf",b);
    }
    else
    {
        printf("Max = %lf",c);
    }  
    if(a <= b && a <= c){
        printf("Min = %lf",a);
    }
    else if(b <= c){
        printf("Min = %lf",b);
    }
    else
    {
        printf("Min = %lf",c);
    }
    printf("\n");
    
    double d;
    
    if(a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if(a > c)
    {
        d = a;
        a = c;
        c = d;
    }   
    if(b > c)
    {
    	d = b;
    	b = c;
    	c = d;
	}
    printf("%lf %lf %lf",a,b,c);
    return 0;
}
