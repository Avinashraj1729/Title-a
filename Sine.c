#include<stdio.h>
int main()
{ int c,z;
long double x,d=1,m;
printf("enter value of x for tan(x)\n");
scanf("%Lf",&x);
if(x<=3.1415&&x>=-3.1415)
{for(c=1;c<=23;c++)
{d=d*0.5;
m=x*d;}
for(z=1;z<=23;z++)
{m=(2*m)/(1-(m*m));}
printf("tan(%0.8Lf)=%0.8Lf",x,m);}
else{false;}
return 0;
}
