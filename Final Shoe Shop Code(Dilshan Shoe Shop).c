#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mainmenu(void);
void stock (void);
void stockcasval (void);
void stockschoolshoes(void);
void stocksillpers (void);
void casval (void);
void schoolshoes (void);
void sillpers (void);
int  casual[5],school[5],sillper[5];
 int i;

void mainmenu (void) //main menu function
{
		
		printf("                                 **************************************************************************\n");
		
			system("color 06");
	printf("                                             Wellcom       Dilshan shoes center\n");
	
	printf("                                 **************************************************************************\n\n\n");
		printf("          1. stock--> \n\n          2. Casval shoes--> \n\n          3. school shoes--> \n\n          4.sillper --> \n\n          5. Exit--> \n\n\n\n             Enter Your Choice --->");
	//catch to option
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{

		stock();
	}
	else if(choice==2)
	{
	casval();
	}
	else if(choice==3)
	{
     schoolshoes();
	}
	else if(choice==4)
	{
	sillpers();
	}
	else if(choice==5)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");


		exit(0);
	}

	

	getch();
}



void stock () //stock function
{
	
	
	int no;
	
	system("cls");
	system("color 04");
	printf("                     **********************This a stock ************\n\n\n  ");
	printf("......you can select any option.....\n\n\n");
	printf("    1:casual stock--->\n\n    2:school shoes--->\n\n    3:sillpers--->\n\n    4:mainmenu--->\n\n\n       Enter Your Choice --->");
	scanf("%d",&no);
	if(no==1)
	{
		stockcasval();
	}
	else if(no==2)
	{
		stockschoolshoes();
	}
	else if(no==3)
	{
		stocksillpers();
	}
	else
	{
		mainmenu();
		
	}
		getch();
}
void stockcasval () //stocks casual shoe function
{

	system("cls");
		
		printf("********Enter the caual stock********\n");
	for (i=0;i<5;i++)
	{
		printf("enter the item code:\n");
		scanf("%d",&casual[i]);
		
	}
	printf("  press enter key\n\n  ");
	getch();
	stock();	
}
void stockschoolshoes () //stock school shoe function
{
system("cls");
		printf("****Enter the school shoes stock******\n");
	for (i=0;i<5;i++)
	{
		printf("enter the item code:\n");
		scanf("%d",&school[i]);
		
	}
	printf("  press enter key\n\n  ");
	getch();
	stock();	
}
void stocksillpers () //stock slippers function
{
system("cls");
		printf("Enter the sillper stock\n");
	for (i=0;i<5;i++) //stock slippers  5times in to slipper array 
	{
		printf("enter the item code:\n");
		scanf("%d",&sillper[i]);
		
	}
	printf("  press enter key\n\n  ");
		getch();
		stock();
	
}	
	
	
void casval () 
{system("cls");
	printf("**********: This a casual Shoes :*******************\n ");
	
	int shoep[]={1,2,3};
	int code,quantity;
	printf("Enter Shoe Code:\n");
	scanf("%d",&code);
	printf("Enter quantity:\n");
	scanf("%d",&quantity);
	
	//storing calculation in to shoep array
	
	shoep[1]=quantity*1000; //casual shoes calculate
	shoep[2]=quantity*800;//school she calculate
	shoep[3]=quantity*400;//slippers calculate
	
		if (code==casual[0])
	{
		printf("Shoe Model:Casual Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[1]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");



	}
	else if (code==casual[1])
	{
		printf("Shoe Model:Casual Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[1]);
		printf("Thank You! Come Again.\n");
	}
		else if (code==casual[2])
	{
		printf("Shoe Model:Casual Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[1]);
	printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
		else if (code==casual[3])
	{
		printf("Shoe Model:Casual Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[1]);
	printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
		else if (code==casual[4])
	{
		printf("Shoe Model:Casual Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[1]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
		else
	{
		printf("Invalid Code !\n");

	}
	printf("  press enter key\n\n  ");
		getch();
		mainmenu();
}
void schoolshoes ()
{
	system("cls");
	printf("**********: This a school Shoes :*******************\n ");
	
		int  shoep[]={1,2,3};
	int code,quantity;
	printf("Enter Shoe Code:\n");
	scanf("%d",&code);
	printf("Enter quantity:\n");
	scanf("%d",&quantity);
	
	shoep[1]=quantity*1000;
	shoep[2]=quantity*800;
	shoep[3]=quantity*400;
	
			if (code==school[0])
	{
		printf("Shoe Model:School Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[2]);
	printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
				else if (code==school[1])
	{
		printf("Shoe Model:School Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[2]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
				else if (code==school[2])
	{
		printf("Shoe Model:School Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[2]);
	printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
				else if (code==school[3])
	{
		printf("Shoe Model:School Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[2]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
				else if (code==school[4])
	{
		printf("Shoe Model:School Shoes\t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[2]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
		else
	{
		printf("Invalid Code !\n");

	}
	printf("  press enter key\n\n  ");
	getch();
	
	mainmenu();
}
void sillpers ()
{
	system("cls");
	printf("**********: This a sillpers:*******************\n ");
	
		int  shoep[]={1,2,3};
	int code,quantity;
	printf("Enter Shoe Code:\n");
	scanf("%d",&code);
	printf("Enter quantity:\n");
	scanf("%d",&quantity);
	
	shoep[1]=quantity*1000;
	shoep[2]=quantity*800;
	shoep[3]=quantity*400;
	
		 if (code==sillper[0])
	{
		printf("Shoe Model:Slippers \t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[3]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
					else if (code==sillper[1])
	{
		printf("Shoe Model:Slippers \t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[3]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
					else if (code==sillper[2])
	{
		printf("Shoe Model:Slippers \t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[3]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
					else if (code==sillper[3])
	{
		printf("Shoe Model:Slippers \t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[3]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}
					else if (code==sillper[4])
	{
		printf("Shoe Model:Slippers \t");
		printf("Quantity:%d\t",quantity);
		printf("Price:%d\n",shoep[3]);
		printf("                                 **************************************************************************\n");
	printf("                                             Thank You! Come Again.\n");
	printf("                                 **************************************************************************\n\n\n");

	}



	else
	{
		printf("Invalid Code !\n");

	}
	printf("  press enter key\n\n  ");

	getch();
	mainmenu();

}
	int main ()
{

	
	mainmenu();
	
	
	
	return 0;
}