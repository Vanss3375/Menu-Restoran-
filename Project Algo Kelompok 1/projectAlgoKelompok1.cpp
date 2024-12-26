#include<stdio.h>
#include<stdlib.h>

struct data{
	char name[100];
	float price;
}menu[101];


void garis(){
	printf("------------------------------------------------------------------------------\n");
}


int main(){
int order = 0;
char name[30],choice;
int num1=0, num2 = 0, num3 = 0, num4  =0, num5 = 0,num_customers;
int count = 0,opsi1 = 1,opsi2 = 1;
float menu1= 200000.00, menu2= 75000.00, menu3=    39000.00, menu4= 29000.00, menu5= 25000.00;
float jumlah1=0, jumlah2=0, jumlah3=0, jumlah4=0, jumlah5=0,total=0, bayar = 0, hasil=0;
int index = 0;
system("COLOR 75");
	
	do{
		system("cls");
		count++;
		printf("\t       __      __        __\n");
		printf("\t      /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n");
		printf("\t      \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n");
		printf("\t       \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \\|  ___/\n");
		printf("\t        \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n");
		
		printf("	  _____ _____ _______     __  _____  ______  _____ _______      _   __ _____            _   _ ______ \n");
	printf("\t |  __ \\_   _/ ____\\ \\   / / |  __ \\|  ____|/ ____|__   __|/\\  | |  | |  __ \\     /\\   | \\ | |__   _|\n");
 	printf("	 | |  | || || |  __ \\ \\_/ /  | |__) | |__  | (___    | |  /  \\ | |  | | |__) |   /  \\  |  \\| |  | |\n");
	printf("	 | |  | || || | |_ | \\   /   |  _  /|  __|  \\___ \\   | | / /\\ \\| |  | |  _  /   / /\\ \\ | . ` |  | |\n");   
 	printf("	 | |__| || || |__| |  | |    | | \\ \\| |____ ____) |  | |/ ____ \\ |__| | | \\ \\  / ____ \\| |\\  |  | |\n");    
 	printf("	 |_____/_____\\_____|  |_|    |_|  \\_\\______|_____/   |_/_/    \\_\\____/|_|  \\_\\/_/    \\_\\_| \\_|  |_|\n");
	printf("\t=================================================================================================\n");
	printf("\t=================================================================================================\n");
     
		printf("\n\tEnter your name to continue: ");
		scanf("%s", name);
	do{
		system("cls");
   		printf("\n CUSTOMER : %s\n", name);
   		printf(" Do you want to proceed to the main menu? ");
   		printf(" \n Press [Y] for continue to menu : ");
   		scanf("%c", &choice);
	}while((choice !='Y')&&(choice !='y'));
   	system("cls");
   		FILE *fm = fopen("daftarMenu.txt", "r");
   		while (!feof(fm)){
   			fscanf(fm,"%[^#]#%f\n", menu[index].name, &menu[index].price);
   			index++;
		   }
    	switch (choice) 
   		case 1=='Y'||'y':
   		printf("    _____\n");
   		printf("   /     \\   ____   ____    __ __\n");
   		printf("  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n");
   		printf(" /    Y    \\  ___/|   |   \\|  |  |\n");
   		printf(" \\____|____/\\____>____|____|_____|\n");
   		printf("==========================================\n\n");
   		printf("    FOOD\t\t\tPRICE\n");
   		
   		for(int i=0; i<index; i++){
   			printf("(%d) %s\tRP %.2f\n", i+1, menu[i].name, menu[i].price);
		   }
		   index = 0;
		   fclose(fm);
	while (opsi2 != 0){
		do{
    printf(" \n From the list of food, what would you like : ");
    scanf("%d", &order);
   		} while ((order > 5)&&(order < 1));
   		switch(order){
   				case 1:  
                 printf(" How many Super Burger would you like to order : ");
                 scanf("%d", &num1);
                 jumlah1 = menu1 * num1;
                 break;
    			case 2:
                 printf(" How many Amazing Spaghetti would you like to order : ");
     			 scanf("%d",&num2);
                 jumlah2 = menu2 * num2;
                 break;              
                case 3:
                 printf(" How many French Fries of Heaven would you like to order : ");
                 scanf("%d",&num3);              
                 jumlah3 = menu3 * num3;
                 break;
                case 4:
                 printf(" How many Spicy Chicken Wings would you like to order : ");
                 scanf("%d",&num4);
                 jumlah4= menu4 * num4;
                 break;
                case 5:
                 printf(" How many Softdrinks would you like to order : ");
                 scanf("%d",&num5);             
                 jumlah5= menu5 * num5;
                 break;            
                default: printf(" Please choose a valid item from our list\n");
		}
   		
   		
		printf(" You have ordered:\n\n");
 		garis();
  		printf(" ITEM\t\t\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n");
  		garis();
  		printf("Super Burger:\t\t\t%d\t\tRp %.2f\tRp %.2f\n", num1, menu1, jumlah1);
  		printf("Amazing Spaghetti:\t\t%d\t\tRp %.2f\tRp %.2f\n", num2, menu2, jumlah2);
  		printf("French Fries of Heaven:\t\t%d\t\tRp %.2f\tRp %.2f\n", num3, menu3, jumlah3);
  		printf("Spicy Chicken Wings:\t\t%d\t\tRp %.2f\tRp %.2f\n", num4, menu4, jumlah4);
  		printf("Softdrinks:\t\t\t%d\t\tRp %.2f\tRp %.2f\n", num5, menu5, jumlah5);
  		total = 0;
  		total = total + jumlah1 + jumlah2 + jumlah3 + jumlah4 + jumlah5;
  		garis();
  		printf("\t\t\t\t\t\tThat would be:  Rp %.2f\n", total);
  		garis();
	do{
		printf(" Order Again [0] no [1] yes : ");
   		scanf("%d", &opsi2);
	}while ((opsi2 != 0)&&(opsi2 != 1));
	}
	do{
  		system("cls");
   		printf("\n\tCUSTOMER : %s\t\t\t\t\tTransaction #%d\n", name, count);
   		garis();
  		printf(" You have ordered:\n\n");
   		printf(" ITEM\t\t\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n");
  		if (num1 != 0)
  		{
   		printf(" Super Burger:\t\t\t%d\t\t%.2f\t%.2f\n", num1, menu1, jumlah1 );
   		
  		}
    	if (num2 != 0)
 		{
   		printf(" Amazing Spaghetti:\t\t%d\t\t%.2f\t%.2f\n", num2, menu2, jumlah2 );
 		 }
  		if (num3 != 0)
  		{
   		printf(" French Fries of Heaven:\t%d\t\t%.2f\t%.2f\n", num3, menu3, jumlah3 );
 		 }
  		if (num4 != 0)
  		{
   		printf(" Spicy Chicken Wings:\t\t%d\t\t%.2f\t%.2f\n", num4, menu4, jumlah4 );
  		}
  		if (num5 != 0)
  		{
   		printf(" Softdrinks:\t\t\t%d\t\t%.2f\t%.2f\n", num5, menu5, jumlah5 );
  		}
  		garis();
  		printf("\tTotal : %.2f", total);
 		printf("\n\tEnter Received Cash : "); scanf("%f", &bayar);
 		} while (bayar < total);
 		hasil = bayar - total;
 		printf("\tYour change is : %.2f\n\n\n\n\t\t", hasil);
 	
  		do{
   		printf(" New transaction [0] no [1] yes : ");
   		scanf("%d", &opsi1);
   		opsi2 = opsi1;
  		} while ((opsi1 != 0)&&(opsi1 != 1));
}while (opsi1 != 0);

system("cls\n\n\n\t\t");
system("PAUSE");
return 0;
}



