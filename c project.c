#include<stdio.h>

float convert(float value);

main(){
int choice;
float ans;
printf("Choose the following currencies: \n");
printf("1.USD\n");
printf("2.EUR\n");
printf("3.YEN\n");
printf("4.WON\n");
printf("5.Pound Sterling\n");
printf("6.Australian Dollar\n");
printf("7.Canadian Dollar\n");
printf("8.Indian Rupee\n");
printf("9.South African Rand\n");
printf("10.New Zealand Dollar\n");

scanf("%d", &choice);

switch(choice){
case 1:
	ans = convert(127.72);
	break;

case 2:
	ans = convert(127.53);
	break;

case 3:
	ans= convert(0.93);
	break;

case 4:
	ans= convert(0.095);
	break;
	
case 5:
	ans= convert(150.71);
	break;

case 6:
	ans=convert(87.94);
	break;
	
case 7:
	ans= convert(97.97);
	break;;
	
case 8:
	ans= convert(1.60);
	break;
	
case 9:
	ans= convert(7.50);
	break;
	
case 10:
	ans= convert(78.96);
	break;

}

printf("\nRs. %f", ans);

}

float convert( float value){
float npr;
float amt;
printf("enter amt: ");
scanf("%f", &amt);
npr = value * amt;
return npr;

}
