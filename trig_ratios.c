#include <stdio.h>
#include <math.h>
int main(){

double Pi= 3.14159 ; 
double degree,radian;

printf("Enter the angle in degrees: \n");
scanf("%lf",&degree);

radian = degree * ( Pi / 180.0);

printf("Sin(%lf) = %lf\n", degree,sin(radian));
printf("Cos(%lf) = %lf\n", degree,cos(radian));
printf("Tan(%lf) = %lf\n", degree,tan(radian));
printf("Cosec(%lf) = %lf\n", degree,1/sin(radian));
printf("Sec(%lf) = %lf\n", degree, 1/cos(radian));
printf("Cot(%lf) = %lf\n", degree, 1/tan(radian));

return 0;
}
