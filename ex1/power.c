

double Power(double x, int y){
int counter=0;
double result=1;
while(counter<y){
result=result*x;
counter=counter+1;
}
return result;

}


double Exponent(int x){
double e=2.7182818284699;
double result=0;
result=Power(e,x);
return result;

}
