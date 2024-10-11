#include<stdio.h>
int main(){
     int customerID;
     char customername;
     float unitconsumed;
     float bill;
     
     printf("enter customerID:");
     scanf("%d",& customerID);
     printf("enter customername:");
     scanf("%s", customername);
     printf("enter unitconsumed:");
     scanf("%f",& unitconsumed);
     
     if(unitconsumed<=199);
     charges =1.20;
     }
     else if (unitconsumed >=200 && unitconsumed <400);{
     charges =1.50;
     }
     else if(unitconsumed >=400 && unitconsumed <600);{
     charges =1.80;
     }
     else if (unitconsumed >=600);{
     charges =2.00;
     }
     
     bill = unitconsumed*charges-per-unit;
     printf("total bill %2f",bill);
     
     if(bill >400 && bill <100);{
     surcharges =0.15;
     }
     surcharges = bill*0.15;
     printf("surcharges %2f\n", surcharges);
     
     Total amount =bill*surcharges ;
     printf("Total amount %2f\n", Total amount);
     
     printf("customerID:%d\n", customerID);
     printf("customername:%s\n", customername);
     printf("unitconsumed:%2f\n",unitconsumed);
     
    return 0 }
     