/* Tax Computation */
#include <stdio.h>
int main()
{
    float income,tax;
    printf("Please enter your income");
    scanf("%f",&income);
    if(income<=100000)
     printf("No Tax\n");
    else
      if(income<=200000)
      {
        tax = 0.1*(income-100000);
        printf("Tax = %f\n",tax);
      }
      else
        {
          tax = 0.2*income;
          printf("Tax = %f\n",tax);
        }
}
