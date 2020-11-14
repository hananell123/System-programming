#include <stdio.h>
#include "basicMath.c"
#include "power.c"


int main (){
         double x,result1=0,result2=0,result3=0;
         printf("Please enter real number: \n");
         scanf("%lf",&x);
         result1=sub(add(Exponent((int)(x)),Power(x,3)),2);
         result2= add(mul(3,x),Power(mul(2,x),2));
         result3=sub(div(Power(mul(4,x),3),5),mul(2,x));
         
         
         
         
         printf("The value of f(x)=e^x+e^3-2 at the point %0.4f is: %0.4f\n",x,result1);
         printf("The value of f(x)=3x+2x^2 at the point %0.4f is: %0.4f\n",x,result2);
         printf("The value of f(x)=(4x^3)/5-2x at the point %0.4f is: %0.4f\n",x,result3);
         return 0;
         
}
