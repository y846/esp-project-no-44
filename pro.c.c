#include"stdio.h"
#include"string.h"
int main()
{
struct details
{
int id;
int charge;
int services;
int chassis;
char name[50];
char contact_number[10];
char pass[15];

int expiry;
char type;

char status;

}ob[10];

int i,reg;


/*User enters data here*/
for(i=0;i<1;i++)
{
printf("Registration time(1st or 2nd or ...), please mention number only: ");
scanf("%d",&reg);
printf("Enter registration id : ");
scanf(" %d",&ob[i].id);
printf("Enter vehicle owner name: ");
scanf(" %[^\n]%*c",ob[i].name);
printf("Enter contact number: ");
scanf(" %[^\n]%*c",&ob[i].contact_number);
printf("Enter pass status: ");
scanf(" %[^\n]%*c",ob[i].pass);
printf("Enter service charge: ");
scanf(" %d",&ob[i].charge);
printf("Enter no. of vehicle services offered: ");
scanf(" %d",&ob[i].services);
printf("Enter expiry date(dd) of vehicle registration from date 10/10/19: ");
scanf(" %d",&ob[i].expiry);

printf("Enter type of vehicle (Bike(B),Car(C): ");
scanf(" %s",&ob[i].type);
printf("Enter chassis number of vehicle: ");
scanf(" %d",&ob[i].chassis);
printf("Enter status of vehicle registration (Confirmed(C) or Unconfirmed(U): ");
scanf(" %s",&ob[i].status);

/*Validations*/
if(reg==1)
{

printf("500 rs. is charged for first time!\nTherefore the service charge on bill is: %d\n",(ob[i].charge+500));

}
if(ob[i].expiry>31||ob[i].expiry<1)
{

printf("Enter valid date!!\nDate here: ");
scanf("%d",&ob[i].expiry);
}
else{
if(ob[i].expiry==12&&reg==1)
{
printf("Now 200 is charged due to 2 days late from expiry date!\n Total Bill:%d",(ob[i].charge+200+500));
}
else if(ob[i].expiry==12)
{
printf("Now 200 is charged due to 2 days late from expiry date!\n Total Bill:%d",(ob[i].charge+200));
}
if(ob[i].expiry==15&&reg==1)
{
printf("Now 300 is charged due to 5 days late from expiry date!\n Total Bill:%d",(ob[i].charge+300+500));
}
else if(ob[i].expiry==15)
{
printf("Now 300 is charged due to 5 days late from expiry date!\n Total Bill:%d",(ob[i].charge+300));
}
if(ob[i].expiry==17&&reg==1)
{
printf("Now 600 is charged due to 7 days late from expiry date!\n Total Bill:%d",(ob[i].charge+600+500));
}
else if(ob[i].expiry==17)
{
printf("Now 600 is charged due to 7 days late from expiry date!\n Total Bill:%d",(ob[i].charge+600));
}

}
}
printf("\n\nEntered Data here\n\n");
/*Printed data here*/
for(i=0;i<1;i++)
{

printf("Registration Id: %d\n",ob[i].id);
printf("Owner name: %s\n",ob[i].name);
printf("Contact Number : %s\n",ob[i].contact_number);

printf("Pass status: %s\n",ob[i].pass);

printf("Service charge : %d\n",ob[i].charge);

printf("No. of serivces done: %d\n",ob[i].services);
printf("Expiry date: %d\n",ob[i].expiry);
printf("Vehicle type : %c\n",ob[i].type);

printf("Chassis number of vehicle: %d\n",ob[i].chassis);

printf("Vehicle status: %c\n",ob[i].status);


}














}
