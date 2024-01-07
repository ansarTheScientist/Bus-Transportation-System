#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<math.h>
#include"XDD.h"
//Admin Password is : fast1234




menu()
{
	printf("\n\n\n\n");
	printf("\t\t\t-------------------------------\n");
	printf("\t\t\t|      What is your Status?    |\n");
	printf("\t\t\t|      1.Student               |\n");
	printf("\t\t\t|      2.Staff                 |\n");
	printf("\t\t\t--------------------------------\n");
}

menu1()
{
	printf("\n\n\n\n");
	printf("\t\t\t--------------------------------\n");
	printf("\t\t\t|      Menu                    |\n");
	printf("\t\t\t|      1.Add New User          |\n");
	printf("\t\t\t|      2.Admin                 |\n");
	printf("\t\t\t--------------------------------\n");	
}

struct passenger 
{
	char name[100] , gender[100] , fname[100] ,address[100] , district[100] ;
	long long int phone ;
};


void disp()
{
	printf("\t\t\t\t Transport System\n\n");
}
void filing_s(struct passenger *ptr , int re){
	
	FILE * student;
	student = fopen("studentdata.txt","a");
	fprintf(student , " NAME :  %s \n GENDER :  %s \n FATHER NAME :  %s \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n",ptr->name , ptr->gender , ptr->fname , ptr->address , ptr->phone,re);
    fclose(student);
	
}
void filing_t(struct passenger *ptr, int re ){
	
	FILE * staff;
	staff = fopen("staffdata.txt","a");
	fprintf(staff , " NAME :  %s \n GENDER :  %s  \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n",ptr->name , ptr->gender , ptr->address , ptr->phone , re);
	fclose(staff);
	
}

void data_S (struct passenger *ptr )
{
	disp();
	printf("Enter the name of student  :  ");
	scanf(" %[^\n]s",&ptr->name);
	printf("Enter your gender  :  ");
	scanf(" %[^\n]s",&ptr->gender);
	printf("Enter the name of your Father  :  ");
	scanf(" %[^\n]s",&ptr->fname);
	printf("Enter your address  :  ");
	scanf(" %[^\n]s",&ptr->address);
	printf("Enter your cell number  :  ");
	scanf("%lld",&ptr->phone);
}

void data_t(struct passenger *ptr)
{
	disp();
	printf("Enter the name of staff   :   ");
	scanf(" %[^\n]s",&ptr->name);
	printf("Enter your gender   :  ");
	scanf(" %[^\n]s",&ptr->gender);
	printf("Enter your address   :  ");
	scanf(" %[^\n]s",&ptr->address);
	printf("Enter your cell number   :  ");
	scanf("%lld",&ptr->phone);
}

void one()
{		char name[100] , gender[100] , fname[100] ,address[100] , district[100] ;
		long long int phone , ph;
		int i,flag=0,z=0,d,choice;
		FILE *fp;
		FILE *fptr;
			system("cls");
			do{
			printf("Do you want to delete 1.Student Data or 2.Staff Data\n");
			scanf(" %d", &d);
			system("cls");
			printf("enter phone number of entry you want to delete \n");
			scanf("%llu", &ph);
			printf("\n");
			if(d==1){
			fp=fopen("studentdata.txt","r");
			fptr=fopen("studentdata2.txt","w");
			int p=0;
			i=0;
			while(!feof(fp))
			{
	
		    fscanf(fp, " NAME :  %s \n GENDER :  %s \n FATHER NAME :  %s \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n", name,gender,fname ,address , &phone, &choice);
		

			if (phone!=ph)
			{
				fprintf(fptr , " NAME :  %s \n GENDER :  %s \n FATHER NAME :  %s \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n",name ,gender ,fname ,address , phone, choice);
				flag=0;

	    	}
	    	else if(phone==ph)
	    	{
	    		flag=1;
			}
	    
	    	
	}
    fclose(fp);
	fclose(fptr);
	
	remove("studentdata.txt");
	rename("studentdata2.txt","studentdata.txt");
	if(flag==0)
		{
			printf("    No number found\n");
		}
	else if(flag==1)
		{
			printf("    FOUND\n");
		}
	
		printf("\n");		
	}else if(d==2){
			fp=fopen("staffdata.txt","r");
			fptr=fopen("staffdata2.txt","w");
			int p=0;
			i=0;
			while(!feof(fp))
			{
	
		    fscanf(fp, " NAME :  %s \n GENDER :  %s  \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n", name,gender,address , &phone, &choice);
		
		    p++;

			if (phone!=ph)
			{
			fprintf(fptr , " NAME :  %s \n GENDER :  %s  \n ADDRESS :  %s \n CELL NUMBER :  %lld \n Route = %d \n\n", name ,gender,address , phone, choice);
				flag=0;

	    	}
	    	else if(phone==ph)
	    	{
	    		flag=1;
			}
	    
	    	
	}
    fclose(fp);
	fclose(fptr);
	
	remove("staffdata.txt");
	rename("staffdata2.txt","staffdata.txt");
	if(flag==0)
		{
			printf("\n    No number found\n");
		}
	else if(flag==1)
		{
			printf("\n   FOUND   \n");
		}
	printf("\n");		
	}		
	else if(d!=1 && d!=2){
	system("cls");
	printf("Wrong Option Selected Please Try Again in a few seconds");
	int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
    
	system("cls");
	}
	}while(d!=1 && d!=2);
}

void route1()
{
	
	printf("\n    ROUTE 1  \n 1. Malir Flyover  2. Qaidabad        3. Malir Morr         4. Airport           5. Shah Faisal Colony  6. FAST NUCES \n");
	
}

void route2()
{
	
	printf("\n    ROUTE 2   \n 1. Bharia Town   2. Highway         3. Gulshan e Hadid    4. Steel Town        5. Port Qasim          6. FAST NUCES \n ");
	
}

void route3()
{
	
	printf("\n    ROUTE 3   \n 1. Orangi Town   2. North Nazimabd  3. Nazimabad          4. Federal B Area    5. Azizabad            6. FAST NUCES \n");
	
}

void route4()
{
	
	printf("\n     ROUTE 4     \n 1. Ziauddin   2. Bilawal House   3. Zamzama            4. Phase 8           5. Gizri               6. FAST NUCES \n");
	
}

void route5()
{
	
	printf("\n     ROUTE 5     \n 1. Korangi    2. Garden          3. Sindhi Muslim      4. Baloch Pull       5. PAF FAISAL          6. FAST NUCES \n");
	
}

void route6()
{
	
	printf("\n     ROUTE 6     \n 1. Dolman     2. Clifton         3. Defense            4. Boat Basin        5. Teen Talwaar        6. FAST NUCES \n");
	
}


void route7 ()
{

	printf("\n    ROUTE 7  \n 1. Maymar More		    2. Al Asif        3. Abbas Town         4. Maskan            5. Disco Bakery        6. Fast Nuces \n");
	
}
void route8()
{
	
	printf("\n    Route 8   \n 1. Samama		   2. Continental    3. Johar Chorongi     4. Johar Morr        5. Malir Halt          6. FAST NUCES  \n");
	
}

void route9()
{
	
	printf("\n     Route 9   \n 1. Ayesha		   2. Gulhsan        3. Askari 4           4. COD               5. Drigh Road          6. FAST NUCES \n");
	
}
void route10()
{
	
	printf("\n     ROUTE 10   \n 1. Teen Hati	   2. Dakhana        3. Ayeesha Manzil     4. Mukka Chauk       5. 13 D                6. FAST NUCES \n");
	
}

void route11()
{
	
	printf("\n     Route 11   \n 1. 4K Stop 	   2. Power House    3. U.P Morr           4. Nagan             5. Water Pump          6. FAST NUCES \n");
	
}

void route12()
{
	
	printf("\n     ROUTE 12  \n 1. Ajmair Nagri   2. Bara Dari     3. Anda Mor           4. Gulberg           5. Ancholi             6. FAST NUCES \n");
	
}

int north(int s_opt)
{
	static r1 =0 , r2 = 0 , r3 = 0 ;
	int choice ;
	static max_s = 20 ;
	FILE * student ;
	FILE * staff ;
	do{
		disp();
		if(r1 != max_s  &&  r2 != max_s  &&  r3!= max_s)  // condition if none of the bus is full
	{
		route1();
		route2();
		route3();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
	}
	else if(r2 != max_s  &&  r3!= max_s)           // condition if bus 1 is full and other 2 buses are empty
	{	do{
		printf("     Route 1 \n  The bus of this route is full kindly select from the route given below \n");
		route2();
		route3();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		system("cls");
		}while(choice==1);
	}
	else if(r1 != max_s  &&  r3 != max_s)          // condition if bus 2 is full and the other 2 buses are empty
	{
		do{
		printf("     Route 2 \n  The bus of this route is full kindly select from the route given below \n");
		route1();
		route3();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		system("cls");
		}while(choice==2);
	}
	else if(r1 != max_s  &&  r2 != max_s)           // condition if bus 3 is full and the other 2 buses are empty
	{
		do{
		printf("     Route 3 \n  The bus of this route is full kindly select from the route given below \n");
		route1();
		route2();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice==3);
	}
	else if(r2 != max_s )                      // condition if only bus 2 is empty
	{	
	do{
		printf("     Route 1 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 3 \n  The bus of this route is full kindly select from the route given below \n");
		route2();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
	}while(choice !=2);
		
	}
	else if(r1 != max_s )                      //condition if only bus 1 is empty
	{
		do{
		printf("     Route 2 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 3 \n  The bus of this route is full kindly select from the route given below \n");
		route1();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=1);
	}
	else if(r3 != max_s )                       //condition if only bus 3 is empty
	{
		do{
		printf("     Route 1 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 2 \n  The bus of this route is full kindly select from the route given below \n");
		route3();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		system("cls");
		}while(choice!=3);
	}else{
		printf("sorry all the routes are full you can select another district if you want ");
	}
	if(choice!=1 && choice!=2 && choice!=3 ){
	system("cls");
	printf("Wrong Route Selected Please Try Again in a few seconds");
	int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
    
	system("cls");}
	}while(choice!=1 && choice!=2 && choice!=3 );
	if(choice == 1 && r1 != max_s){
		r1 = r1 + 1 ;
	}else if (choice == 2 && r2 != max_s){
		r2 = r2 + 1 ;
	}else if(choice == 3 && r3 != max_s){
		r3 = r3 + 1 ;
	}
	return choice ;
}
	


int south(int s_opt)
{
	disp();
    static int r4 = 0 , r5 = 0  , r6 = 0 ;
	int choice , max_s = 2 ;
	FILE * student ;
	FILE * staff ;
	do{
	
		if(r4 != max_s  &&  r5 != max_s  &&  r6 != max_s)     // condition if none of the bus is full
	{
		
		route4();
		route5();
		route6();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
	}
	else if(r5 != max_s  &&  r6 != max_s)              // condition if bus 4 is full and other 2 buses are empty
	{
		do{
		printf("     Route 4 \n  The bus of this route is full kindly select from the route given below \n");
		route5();
		route6();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 4) ;
	}
	else if(r4 != max_s  &&  r6 != max_s)              // condition if bus 5 is full and other 2 buses are empty
	{
		do{
		route4();
		printf("     Route 5 \n  The bus of this route is full kindly select from the route given below \n");
		route6();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		} while(choice==5) ;
	}
	else if(r4 != max_s  &&  r5 != max_s)              // condition if bus 6 is full and other 2 buses are empty  
	{
		do{
		route4();
		route5();
		printf("     Route 6 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 6);
	}
	else if(r4 != max_s )                         //condition if only bus 4 is empty
	{
		do{
		route4();
		printf("     Route 5 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 6 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=4) ;
		
	}
	else if(r5 != max_s )                         //condition if only bus 5 is empty
	{
		do{
		printf("     Route 4 \n  The bus of this route is full kindly select from the route given below \n");
		route5();
		printf("     Route 6 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=5);
	}
	else if(r6 != max_s )                         //condition if only bus 6 is empty
	{
		do{
		printf("     Route 4 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 5 \n  The bus of this route is full kindly select from the route given below \n");
		route6();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		} while(choice !=6);
	}else                                      // if all the buses are full
	{ 
	
		printf(" sorry all the routes are full you can select another district if you want  ");
	}
	if(choice!=4 && choice!=5 && choice!=6 ){
	system("cls");
	printf("Wrong Route Selected Please Try Again in a few seconds");
	int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
    
	system("cls");}
	}while(choice!=4 && choice!=5 && choice!=6 );
	
	if(choice == 4 && r4 != max_s){
		r4 = r4 + 1 ;
	}else if (choice == 5 && r5 != max_s){
		r5 = r5 + 1 ;
	}else if(choice == 6 && r6 != max_s){
		r6 = r6 + 1 ;
	}
	return choice ;
}
	 


int  east (int s_opt)
{
	disp();
	static int r7 = 0 , r8 = 0 , r9 = 0 ;
	int choice , max_s = 20 ;
	FILE * student ;
	FILE * staff ;
	
	do{
		if(r7 != max_s  &&  r8 != max_s  &&  r9 != max_s)         // if none of buses are full
	{
		route7();
		route8();
		route9();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
	}
	else if(r8 != max_s  &&  r9 != max_s)                   // condition if bus 7 is full and other 2 buses are empty
	{
		do{
		printf("     Route 7 \n  The bus of this route is full kindly select from the route given below \n");
		route8();
		route9();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 7);
	}
	else if(r7 != max_s  &&  r9 != max_s)                   // condition if bus 8 is full and other 2 buses are empty
	{
		do{
		route7();
		printf("     Route 8 \n  The bus of this route is full kindly select from the route given below \n");
		route9();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 8);
	}
	else if(r7 != max_s  &&  r8 != max_s)                   // condition if bus 9 is full and other 2 buses are empty
	{
		do{
		route7();
		route8();
		printf("     Route 9 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 9);
	}
	else if(r7 != max_s )                               //condition if only bus 7 is empty
	{
		do{
		route7();
		printf("     Route 8 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 9 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while (choice !=7);
		
	}
	else if(r8 != max_s )                                 //condition if only bus 8 is empty
	{
		do{
		printf("     Route 7 \n  The bus of this route is full kindly select from the route given below \n");
		route8();
		printf("     Route 9 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=8);
	}
	else if(r9 != max_s )                                  //condition if only bus 9 is empty
	{
		do{
		printf("     Route 7 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 8 \n  The bus of this route is full kindly select from the route given below \n");
		route9();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=9) ;
	}else{
		printf("sorry all the routes are full you can select another district if you want  ");
	}
	if(choice!=7 && choice!=8 && choice!=9 ){
	system("cls");
	printf("Wrong Route Selected Please Try Again in a few seconds");
	int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
    
	system("cls");}
	}while(choice!=7 && choice!=8 && choice!=9 );
	
	if(choice == 7 && r7 != max_s){
		r7 = r7 + 1 ;
	}else if (choice == 8 && r8 != max_s){
		r8 = r8 + 1 ;
	}else if(choice == 9 && r9 != max_s){
		r9 = r9 + 1 ;
	}
	   

		return choice ;
}

int west(int s_opt)
{
	disp();
	static int r10 = 0 , r11 = 0 , r12 = 0 ;
	int choice , max_s = 20 ;
	FILE * student ;
	FILE * staff ;
	
	do{
		if(r10 != max_s  &&  r11 != max_s  &&  r12 != max_s)             //condition if none of the full is full 
	{
		route10();
		route11();
		route12();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
	}
	else if(r11 != max_s  &&  r12 != max_s)                        //condition if bus 10 is full and other two buses are empty 
	{
		do{
		printf("     Route 10 \n  The bus of this route is full kindly select from the route given below \n");
		route11();
		route12();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 10);
	}
	else if(r10 != max_s  &&  r12 != max_s)                        //condition if bus 11 is full and other two buses are empty
	{
		do{
		route10();
		printf("     Route 11 \n  The bus of this route is full kindly select from the route given below \n");
		route12();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 11);
	}
	else if(r10 != max_s  &&  r11 != max_s){                       //condition if bus 12 is full and other two buses are empty
		do{
		route10();
		route11();
		printf("     Route 12 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice == 12);
	}
	else if(r10 != max_s )                                     //condition if only bus 10 is empty
	{
		do{
		route10();
		printf("     Route 11 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 12 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=10);
	}
	else if(r11 != max_s )                                     //condition if only bus 11 is empty
	{
		do{
		printf("     Route 10 \n  The bus of this route is full kindly select from the route given below \n");
		route11();
		printf("     Route 12 \n  The bus of this route is full kindly select from the route given below \n");
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=11);
	}
	else if(r12 != max_s )                                     //condition if only bus 12 is empty
	{
		do{
		printf("     Route 10 \n  The bus of this route is full kindly select from the route given below \n");
		printf("     Route 11 \n  The bus of this route is full kindly select from the route given below \n");
		route12();
		printf("\nEnter your choice :  ");
		scanf("%d",&choice);
		}while(choice !=12);
	}
	else                                                   // if all the buses are full
	{
		
		printf(" Ssorry all the routes are full you can select another district if you want  "); 
	}
	if(choice!=10 && choice!=11 && choice!=12 ){
	system("cls");
	printf("Wrong Route Selected Please Try Again in a few seconds");
	int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
    
	system("cls");}
	}while(choice!=10 && choice!=11 && choice!=12 );
	
	if(choice == 10 && r10 != max_s){
		r10 = r10 + 1 ;
	}else if (choice == 11 && r11 != max_s){
		r11 = r11 + 1 ;
	}else if(choice == 12 && r12 != max_s){
		r12 = r12 + 1 ;
 	}

		return choice ;
}
int district(int s_opt)
{
	static int no = 0 , sou = 0 , est = 0 ,x, wst = 0 , re;
	int d_opt , opt;
	system("cls");
	disp();
	do {
	printf("\nWhat is your district? \n\t 1. North \t 2. South  \n\t 3. East \t 4. West \n ");
	scanf("%d",&d_opt);
	system("cls");

	switch (d_opt){
		
		case 1 : 
		    if(no != 60){
			re = north(s_opt);
			no ++ ;
			return re ;
			}else{
				printf("This district is full \n Do you want to \n 1. select another district \t 2. Exit");
				scanf(" %d",&opt);
				if(opt == 1){
				
					x = district(s_opt);
					return x ;
			}
				else{
				
					return 0 ;
			}}
			break ;
		case 2 :
			if(sou !=60){
			re = south(s_opt);
			sou++;
			return re;
		}else{
			printf("This district is full \n Do you want to \n 1. select another district \t 2. Exit");
				scanf(" %d",&opt);
				if(opt == 1){
					x=district(s_opt);
					return x ;
					}else{
					return 0;
		}}
			break ;
		case 3 :
			if(est != 60 ){
			re = east(s_opt);
			est++ ;
			return re ;
			}else{
				printf("This district is full \n Do you want to \n 1. select another district \t 2. Exit");
				scanf(" %d",&opt);
				if(opt == 1){
				
				x=district(s_opt);
				return x ;
			}
				else{
				
				return 0 ;
			}}
			break ;
		case 4 :
			if(est != 60 ){
			re = west(s_opt);
			wst++ ; 
			return re ; 
			}else{
				printf("This district is full \n Do you want to \n 1. select another district \t 2. Exit");
				scanf(" %d",&opt);
				if(opt == 1)
				{
					x=district(s_opt);
					return x ;
					}else{
					return 0 ;
		}}
			break ;
		default :
			printf(" You entered the wrong choice please wait for few seeconds ");
			int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
			system("cls");
			disp();
			break ;
	}
	}while(d_opt != 1 && d_opt != 2 && d_opt != 3 && d_opt != 4 );
}
void bill_s(struct passenger *ptr,int re)
{
	int fee = 22000;
	int final ;
	final = fee * 1 ;
	system("cls");
	disp();
	printf("\t\t=============================Bill=============================\n\n");
	printf("\n				Name : %s",ptr->name);
	printf("\n				Father Name : %s",ptr->fname);
	printf("\n				Address : %s",ptr->address);
	printf("\n				Your total amount is : %d", final);	
	printf("\n				ROUTE = %d ",re);
}
void bill_t(struct passenger *ptr , int re)
{
	int fee = 22000 ;
	int final = fee * 0.85 ;
	system("cls");
	disp();
	printf("\t\t=============================Bill=============================\n\n");
	printf("\n 				Name : %s", ptr->name);
	printf("\n 	   			Address : %s", ptr->address);
	printf("\n				Your total amount is  : %d", final);
	printf("\n				ROUTE = %d ",re);
}

int admin()
{
	char pass[]="fast1234";
	char password[50];
	int count;
	while(count<3){
	system("cls");
	printf("Enter admin password : \n");
	scanf(" %s", password);
	system("cls");
	
	if(strcmp(password,pass)==0){
		printf("\n\n Password Accepted\n\n");
			int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
			system("cls");
			disp();
		return count;
	}
	else{
		printf(" Password Incorrect please wait for few seeconds and try again ");
			int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
			system("cls");
			disp();
	}
	count++;
	}
	return count;
}



int main()
{
	int flag = 1 , c, opt , s_opt , f , anopt , fopt , re; 
	struct passenger p[150] ;
	struct passenger *ptr = &p[0] ;
	
	FILE * student ;
	FILE * staff ;
	intro();
	do {
		do{
		system("cls");
		disp();
		menu1();
		scanf("%d",&opt);
		system("cls");
		disp();
		if(opt == 1 ){
			do{
			menu();
			scanf("%d",&s_opt);
			system("cls");
			if(s_opt == 1 ){
				
				data_S(&p[0]);
				re = district(s_opt);
				if(re != 0 ){
				filing_s(&p[0] , re) ;
				bill_s(&p[0] , re);
				
				}
			}else if (s_opt == 2 ){
				data_t(&p[0]);
				
				re = district(s_opt);
				if(re != 0){
				filing_t(&p[0] , re) ;	
				bill_t(&p[0] , re);	
				}
			}else {
			
				printf("Wrong Input Try Again in a few seconds !!!\n");
				int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
				system("cls");
			}
		}while(s_opt!=1&&s_opt!=2);
		}
		else if (opt == 2 ){
			int count;
			count=admin();
			if(count<2){
			do{
				printf("Do you want to \n 1. Print data \t 2. Delete data \n") ;
				scanf(" %d", &anopt);
				system("cls");
				if(anopt == 1){
			do{
			printf("Do you want to print \n 1. Student Data \t 2. Staff Data \t 3. All Of Them \n ");
			scanf("%d",&fopt);
			system("cls");
			disp();
			if(fopt == 1)
			{	
				printf("\t\tStudent Data\n\n");
				student = fopen("studentdata.txt","r");
				if ((student=fopen("studentdata.txt","r")) == NULL){
			       printf("Error! opening file");
			       break;
			}
				while(!feof(student))
				{
					c = fgetc(student);
					printf("%c",c) ;
				}
				fclose(student);
				}
			else if(fopt == 2 )
			{	
				printf("\t\tStaff Data\n\n");
				staff = fopen("staffdata.txt" , "r");
				if ((staff=fopen("staffdata.txt","r")) == NULL){
			       printf("Error! opening file");
			       break;
			  	}
				while(!feof(staff))
				{
					c = fgetc(staff);
					printf("%c",c);
			}
				fclose(staff);
			}else if(fopt == 3 ){
				student = fopen("studentdata.txt" , "r");
				staff = fopen("staffdata.txt" , "r");
				printf("\t\tStudent Data\n\n");
				student = fopen("studentdata.txt","r");
				if ((student=fopen("studentdata.txt","r")) == NULL && (staff=fopen("staffdata.txt","r")) == NULL ){
			       printf("Error! opening file");
			       break;}
			    else if((staff=fopen("staffdata.txt","r")) == NULL){
				printf("\t\tStudent Data\n\n");
				while(!feof(student))
				{
					c = fgetc(student);
					printf("%c",c) ;
				}
				printf("\n");}
				else if((student=fopen("studentdata.txt","r")) == NULL){
				printf("\t\tStaff Data\n\n");
				while(!feof(staff))
				{
					c = fgetc(staff) ;
					printf("%c",c) ;
				}
				}
				else{
				printf("\t\tStudent Data\n\n");
				while(!feof(student))
				{
					c = fgetc(student) ;
					printf("%c" ,c);
				}
				printf("\n");
				
				printf("\t\tStaff Data\n\n");
				while(!feof(staff))
				{
					c = fgetc(staff) ;
					printf("%c",c);
				}
				
				}
				fclose(student);
				fclose(staff);
			}
			else{
				printf("\nWrong Input try again in few seconds!!\n");
				int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
       			system("cls");
			}
			}while(fopt!=1 && fopt!=2 && fopt!=3);
		}else if(anopt == 2){
						int abc;
						printf("Confirm to delete 1.yes 2.no\n");
	                    scanf("%d", &abc);
                    	if(abc==1){
	                	one();
			}
				}
			}while(anopt != 1 && anopt != 2) ;
		}
		else{	
			system("cls");
			printf("\n\t\tWrong password entered multiple times");
		}
		
		}else {		
			printf("Wrong input try again in few seconds!!\n\n");
			int c, d;
   				for (c = 1; c <= 32767; c++)
       			for (d = 1; d <= 32767; d++)
       			{}
       			system("cls");
		}
    
		}while(opt!= 1 && opt!=2);
	do{
	printf("\n\nDo you want to Add Another : \n\t 1. Yes \t 2. No \n");
	scanf("%d",&flag);
	
	if(f == 2)
	{
		flag = 0 ;
	}
	if(flag!=1 && flag!=2){
	system("cls");
	printf("Wrong Input try again in few seconds!!\n");
	int c, d;
   	for (c = 1; c <= 32767; c++)
    	for (d = 1; d <= 32767; d++)
    	{}
    system("cls");
	}
	}while(flag!=1 && flag!=2);
	}while(flag == 1 );
	end();
	return 0 ;
}
