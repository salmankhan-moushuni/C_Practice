/*program to find roots of a quadratic eqution*/
#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float Disc,d,e;
float root1,root2,root;
printf("enter integer coeff a then b then c");
scanf("%d %d %d",&a,&b,&c);
Disc = b*b-4*a*c;
if(Disc>0)
  {
   printf("Roots are Real\n");
   d=sqrt(Disc);
   root1=(-b+d)/(2*a),root2=(-b+d)/(2*a);
   printf("%f and %f\n",root1,root2);
   }
else
    if(Disc==0)
    {
     printf("Roots are Equal\n");
    root=-b/(2.0*a);
    printf("%f\n",root);
    }
    else
    { 
     printf("Complex Roots\n");
      e=-b/(2.0*a);
      printf("Real part %.2f\n",e);
      printf("Imaginary parts +i%.2f and -i%.2f\n",d/(2*a),d/(2*a));
    }

}









