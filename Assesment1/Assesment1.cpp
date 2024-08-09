#include<stdio.h>

menu()     // This is menu list function
{
	printf("****************Menu****************");
	printf("\n1.Pizza          Price = 180rs/pcs");
	printf("\n2.Burger       Price = 100rs/pcs");
	printf("\n3.Dosa         Price = 120rs/pcs");
	printf("\n4.Idli         Price = 50rs/pcs");
}

pizza(int*totalAmount)   // This is pizza function
{
	int n;
	
	printf("\nPlease select Quantity : ");   // quantity how much
	scanf("%d",&n);
	*totalAmount += 180*n;                  // totalamount save and calculate
	printf("Amount : %d",180*n);			// print amount of pizza
	
	
}

burger(int*totalAmount)
{
	int n;
	
	printf("\nPlease select Quantity : ");
	scanf("%d",&n);
	*totalAmount += 100*n;
	printf("Amount : %d",100*n);
}

dosa(int*totalAmount)
{
	int n;
	
	printf("\nPlease select Quantity : ");
	scanf("%d",&n);
	*totalAmount += 120*n;
	printf("Amount : %d",120*n);
}

idli(int*totalAmount)
{
	int n;
	
	printf("\nPlease select Quantity : ");
	scanf("%d",&n);
	*totalAmount += 50*n;
	printf("Amount : %d",50*n);
}


main()
{
	int totalAmount = 0;
	int choice;
	char order;
	
	do        					
	{
		printf("\n\n");
		menu();
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
                printf("You have selected pizza\n");
                pizza(&totalAmount);
                break;
                
            case 2:
                printf("You have selected burger\n");
                burger(&totalAmount);
                break;
                
            case 3:
                printf("You have selected dosa\n");
                dosa(&totalAmount);
                break;
                
            case 4:
                printf("You have selected idli\n");
                idli(&totalAmount);
                break;
                
            default:
                printf("Please select a valid number for order!\n");
                break;
                
		}
		
		printf("\nDo you want place more order y & n : ");
		scanf(" %c",&order);
		
	}
	
	while(order == 'y' || order == 'Y');
	
	printf("\nTotal Amount Bill : %d",totalAmount);
}
