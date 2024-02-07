#include<stdio.h>
int main()
{ int b,z;
long double x,d=1,m;
printf("enter the no.");
scanf("%Lf",&x);
if(x<=3.14159265&&x>=-3.14159265)
{for(z=1;z<=46;z++)
{d=d*0.5;
m=x*d;}
for(b=1;b<=46;b++)
{m=((2*m*m)-1);}
printf("cos(%Lf)=%Lf",x,m);}
else{false;}
return 0;	
}
