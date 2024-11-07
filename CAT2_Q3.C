//a c program that calculates gross pay,taxes and net pay
#include <stdio.h>
int main() {
//initialization
int hours,overtime;
float hourly_wage,gross_pay,taxes,net_pay;

//prompt the user to enter hours worked and hourly wage
printf("Enter hours worked in a week:");
scanf("%d", &hours);
printf("Enter hourly wage:");
scanf("%f", &hourly_wage);

//calculate overtime hours and gross pay
if (hours>40){
    overtime = hours-40;
    gross_pay=(40*hourly_wage)+(overtime*hourly_wage*1.5);
}
else {
    overtime =0;
    gross_pay=hours*hourly_wage;
}
//calculate taxes
if(gross_pay<=600){
    taxes=gross_pay*0.15;
}
else {
    taxes=600*0.15+(gross_pay-600)*0.20;
}
//calculate net pay
net_pay=gross_pay-taxes;

//display the results
printf("\nGross Pay:%.2f\n",gross_pay);
printf("Taxes:%.2f\n",taxes);
printf("Net Pay:%.2f\n",net_pay);

return 0;
}
