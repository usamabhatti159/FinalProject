#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<iostream>
#include"Void Library Managment System.h"

using namespace std;

int a;
int b;
char c;
int e;
char f;
int g;
char h[20];
int logins;
int i;
int j=0;
int k;
int l;
int m=0;
int n;
int o;
int p=4;
char name[20];
char password[20];


char categories[][30]={"Computer","Electronics","Electrical","Poetry","Fiction","NON-fiction","Technology","Magzines","Literature","Programming Fundamentals"};
FILE *fp;
FILE *fc;
FILE *fn;
FILE *fd;



void mainmenu()
{
    system("cls");
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  MAIN  MENU  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 1. Add Books\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 2. Delete books\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 3. Search Books\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 4. Issue Books\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 5. View Book list\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 7. Close Application\n\n";
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	
}
void mainmenustud()
{
    system("cls");
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  MAIN  MENU  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 1. Search Books\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 2. View Book list\n\n";
	cout<<"\xDB\xDB\xDB\xDB\xB2 3. Close Application\n\n";
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	
}


class admin
{
	public:
		void addbooks();
		void deletebooks();
		void editbooks();
		void issuebooks();
		void searchbooks();
		void viewbooks();
		admin();
		
};

admin::admin()
{
	cout<<"i am the constructor";
	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
}


struct Books
{
	char studentname[20];
	char name[20];
	char author[20];
	int quantity;
	int racknumber;
	int id;
	char *d;
	
};

struct Books books;

COORD coord = {0, 0}; 
COORD max_res,cursor_size;
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; 
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int check(int b)
{
	rewind(fp);
	while (fread(&books , sizeof(books),1,fp) ==1 )
	if (books.id ==b)
	{
		return 0;      //book exits
	}
	  
    return 1; // book does not exist 
}
int getdata()
{
	printf("Category:%s " , categories[a-1]);
	cout<<"\n";
	printf("Please enter the book id:");
	scanf("%d" , &b);
	fflush(stdin);
	if (check(b)==0)
	{
		cout<<"\aBook id already exists\a\n";
		cout<<"Press enter to return to main menu:";
		c=getch();
		
		if (c==13)
		{
			system("cls");
			
		}
		return 0;
	}
	books.id = b;
	printf("Please enter the book name:");
	scanf("%[^\n]s", books.name);
	fflush(stdin);
	printf("Please enter the author name:"); 
	scanf("%[^\n]s", books.author);
	fflush(stdin);
	printf("Please enter the quantity:");
	scanf("%d", &books.quantity);
	fflush(stdin);
	printf("Please enter rack number:");
	scanf("%d", &books.racknumber);
	fflush(stdin);
	return 1;
	
}


void admin::addbooks()
{
 	system ("cls");
	int i;
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SELECT CATEGOIES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\xDB\xDB\xDB\xB2 1. Computer\n\n";
	cout<<"\xDB\xDB\xDB\xB2 2. Electronics\n\n";
	cout<<"\xDB\xDB\xDB\xB2 3. Electrical\n\n";
	cout<<"\xDB\xDB\xDB\xB2 4. Poetry\n\n";
	cout<<"\xDB\xDB\xDB\xB2 5. Fiction\n\n";
	cout<<"\xDB\xDB\xDB\xB2 6. NOn-Fiction\n\n";
	cout<<"\xDB\xDB\xDB\xB2 7. Magzines\n\n";
	cout<<"\xDB\xDB\xDB\xB2 8. Literature\n\n";
	cout<<"\xDB\xDB\xDB\xB2 9. Programming Fundamentals\n\n";
	cout<<"\xDB\xDB\xDB\xB2 10. Return to main menu\n\n";
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	printf("\nPlease enter your desired option:");
	scanf("%d",&a);
	fflush(stdin);
	if (a==10)
	{
		return;
	}
	
	system ("cls");
	fp=fopen("Data.dat","ab+");
	if (getdata()==1)
	{
		books.d=categories[a-1];
		fseek(fp,0,SEEK_END);
		fwrite(&books,sizeof(books),1,fp);
		fclose(fp);
	
		cout<<"The record is sucessfully saved\n";
	
		cout<<"Save any more?(Y / N):";
		if(getch()=='n')
		{
			return;
		}
	    	
		else
		{
			system("cls");
	    	addbooks();
		}
	    	
		
	}
	
}

void admin::deletebooks ()
{
	system ("cls");
	int e;
	char z='y';
	while (z=='y')
	{
		
		system ("cls");
	    printf("Please enter the Book ID to delete:");
		scanf("%d" , &e);
		fflush(stdin);
		fp=fopen("Data.dat" , "rb+");
		rewind(fp);
		while (fread(&books , sizeof(books), 1 , fp) ==1 )
		{
			if ( books.id==e)
			{
				printf("Book is available\nBook name is %s\nBook is placed on rack number %d" , books.name , books.racknumber);
				f='b';
			}
		}
		
		if(f!='b')
		{
			cout<<"No record is found modify the search";
	    	if(getch())
	    	return;
		}
		if ( f=='b')
		{
			cout<<"\nDo you want to delete this record?(Y/N):";
			if (getch()=='y')
			{
				fc=fopen("Test.dat" , "wb+");
				rewind(fp);
				while (fread(&books , sizeof(books),1,fp) ==1 )
				{
					if (books.id != e)
					{
						fseek(fc , 0 , SEEK_CUR);
						fwrite(&books , sizeof(books), 1 , fc);
					}
				}
			
			fclose(fp);
			fclose(fc);
			remove("Data.dat");
			rename("Test.dat" , "Data.dat")	;
			fp=fopen("Data.dat" , "rb+");
			cout<<"\nThe desired record has been deleted\n";
			cout<<"\nDo you want to delete some other records?(Y/N):";
			if (getch()=='y')
			{
				deletebooks();
			}
			}
			
			
		else 
		
			system ("cls");
			return;
			z=getch();
		}
		
	}
	getch();
	return;
	
}

void admin:: searchbooks()
{
	system ("cls");
	cout<<"*****************************Search Books*********************************\n";
    cout<<"\xDB\xDB\xB2 1. Search By ID\n\n";
    cout<<"\xDB\xDB\xB2 2. Search By Name\n\n";
    cout<<"Please enter your desired option";
    fp=fopen("Data.dat","rb+"); 
    rewind(fp);   
    switch(getch())
    {
    	case '1':
    		{
    			system ("cls");
    			
    			cout<<"***** Search Books By Id *****\n";
    			printf("Please enter the book ID to search:");
    			scanf("%d" , &g);
    			while (fread(&books , sizeof(books),1,fp) ==1 )
    			{
    				if (books.id == g)
    				{
		    			cout<<"The Book is available in the library\n";
		    			printf("\xB2 Book ID:%d\n\n" , books.id);
		    			printf("\xB2 Book Name:%s\n\n" , books.name);
		    			printf("\xB2 Author Name:%s\n\n" , books.author);
		    			printf("\xB2 Qantity:%d\n\n" , books.quantity);
		    			printf("\xB2 Rack Number:%d\n\n" , books.racknumber);
		    			f='b';
					}
					//rewind(fp);
				}
					 
	    		if (f != 'b') 
	    		{
	    			cout<<"\aNo Record Found\a\n";
	    		}
	        	cout<<"Do you want to try another search?(Y/N)";
	    		if(getch() == 'y')
	    		searchbooks();
	    		else
	    		return;
	    		break;
			}
			
		case '2':
			{
				system ("cls");
				cout<<"***** Search Books By Name  *****\n";
				printf("Please enter the Book name to search:");
				scanf("%s" , h);
				while (fread(&books , sizeof(books),1,fp) ==1 )
				{
					if (strcmp(books.name,(h)) == 0)
					{
						cout<<"The Book is available in the library\n";
		    			printf("\xB2 Book ID:%d\n\n" , books.id);
		    			printf("\xB2 Book Name:%s\n\n" , books.name);
		    			printf("\xB2 Author Name:%s\n\n" , books.author);
		    			printf("\xB2 Qantity:%d\n\n" , books.quantity);
		    			printf("\xB2 Rack Number:%d\n\n" , books.racknumber);
						i++;
					}
				}
				
				if (i == 0)
				{
					cout<<"\aSORRY!The required record isn't found\a\n";
				}
				cout<<"Do you want to go for another search?(Y/N)";
	    		if(getch() == 'y')
				{
	    			searchbooks();
				}
	    		
	    		else
	    		return;
	    		break;
			}
			
			default :
			getch();
			searchbooks();
	}
    fclose(fp);
}
                            

void admin:: viewbooks()  //show the list of book persists in library
{
    
    system("cls");
    gotoxy(1,1);
    cout<<"******************************* Book List ***************************\n\n";
    gotoxy(2,3);
    cout<<" CATEGORY       ID      BOOK NAME       AUTHOR         QTY       RackNo ";
    
    k=5;
    fp=fopen("Data.dat","rb");
    while (fread(&books , sizeof(books),1,fp) ==1 )
    {
	gotoxy(3,k);
	printf("%s" , books.d);
	gotoxy(19,k);
	printf("%d" , books.id);
	gotoxy(27,k);
	printf("%s" , books.name);
	gotoxy(42,k);
	printf("%s" , books.author);
	gotoxy(58,k);
	printf("%d" , books.quantity);
	gotoxy(69,k);
	printf("%d" , books.racknumber);
	k++;
	j=j+books.quantity;
      }
      gotoxy(120,21);
      printf("\nTotal Books =%d",j);
      gotoxy(35,22);
      fclose(fp);
      getch();
      return;

}

void admin::editbooks()
{
	system ("cls");
	cout<<"****** Edit Books Section ******";
	char z='y';
	while (z=='y')
	{
		system ("cls");
		printf("Please enter the book ID to be edited:");
		scanf("%d" , &l);
		fflush(stdin);
		fp=fopen("Data.dat" , "rb+");
		while (fread(&books , sizeof(books) , 1 ,fp) ==1 )
		{
			if (check(l) == 0)
			{
				cout<<"This Books is available\n";
				printf("The Book ID is : %d\n" , books.id);
				printf("Please enter modified book name :");
				scanf("%[^\n]s" , books.name);
				fflush(stdin);
				printf("Please enter modified Author name :");
				scanf("%[^\n]s" , books.author);
				fflush(stdin);
				printf("Please enter quantity :");
				scanf("%d" , & books.quantity);
				fflush(stdin);
				printf("Please enter modified rack number :");
				scanf("%d" , & books.racknumber);
				fflush(stdin);
				fseek(fp , ftell(fp)-sizeof(books) , 0);
				fwrite(&books , sizeof(books) , 1 ,fp);
				fclose(fp);
				m++;
			}
			
			if (m ==0)
			{
				cout<<"\aSorry! No record found\a";
			}
			
		}
		
		cout<<"Do you want to modify some other record?(Y/N)";
		fflush(stdin);
		z=getch() ;
	}
}

void admin::issuebooks ()
{
	system ("cls");
	cout<<"**************************** ISSUE BOOKS **************************\n\n";   
    cout<<"\xDB\xDB\xDb\xB2 1. Issue a Book\n\n";   
    cout<<"\xDB\xDB\xDb\xB2 2. View Issued Book\n\n";  
    cout<<"\xDB\xDB\xDb\xB2 3. Remove Issued Book\n\n";
    cout<<"\xDB\xDB\xDb\xB2 4. retrn to the main menu\n\n";
    cout<<"Please choose an option: ";
    
    switch(getch())
    {
    	case '1':
    		{
    			system ("cls");
    			char z='y';
				while (z =='y')
				{
					system ("cls");
					cout<<"**** Issue Book ****\n\n";
					printf("Please enter the Book ID to issue: ");
					scanf("%d" , &n);
					fflush(stdin);
					fp=fopen("Data.dat" , "rb");
					fn=fopen("Issue.dat" , "ab+");
					if (check(b) == 0)
					cout<<"This Book is available\n";
					printf("There are %d unissued books in the library\nBook name is %s\n" , books.quantity , books.name);
					printf("Please enter student's name :");
					scanf("%[^\n]s" , books.studentname);
					fflush(stdin);
					fseek(fn , sizeof(books) , SEEK_END);
			     	fwrite(&books , sizeof(books) , 1 ,fn);
			     	fclose(fn);
			     	o++;
					
				if (o ==0)
				{
					cout<<"\aSORRY! No Record Found\a\n ";
					
				}
				
				cout<<"Do you want to Issue some other book?(Y/N):";
				fflush(stdin);
				z=getch();
				if (getch()=='n')
				{
					issuebooks();
				}
				fclose(fp);
				}
				
    				
    			break ;
    		}
    
	
	
		case '2':
			{
				system ("cls");
				cout<<"***************************** Issued book list *****************************\n\n";
				gotoxy(2,2);
				cout<<"STUDENT NAME        CATEGORY           ID           BOOK NAME";
	      	 	fn=fopen("Issue.dat","rb");
				while (fread(&books , sizeof(books) , 1 ,fn) ==1 )
				{
	
					gotoxy (2,p);
					printf("%s" , books.studentname);
					gotoxy (22,p);
					printf("%s" , books.d);
					gotoxy (41,p);
					printf("%d" , books.id);
					gotoxy (54,p);
					printf("%s" , books.name);
					p++;
					
					
					
	
				}
				cout<<"\n\n\n\n\tPress enter to return to main menu";
				getch();
				system("cls");
				fclose(fn);
			}
			
			break ;
			
		
		case '3':
			{
				system("cls");
				int b; 
				char z='y';
				while (z =='y')
				{
					printf("Please enter the book id to remove:");
					scanf("%d",&b);
					fn=fopen("Issue.dat","rb+");
					while (fread(&books , sizeof(books) , 1 ,fn) ==1 )
					{
						if(books.id==b)
						{
							printf("The Book has taken by Mr. %s\n",books.studentname);
							f='b';
						}
						if(f=='b')
						{
							cout<<"Do You Want to Remove it?(Y/N)";
							if ( getch() == 'y')
							{
								fd=fopen("record.dat","wb+");
								rewind(fn);
								while(fread(&books , sizeof(books) , 1 ,fn) ==1 )
								{
									if(books.id!=b)
									{
										fseek(fn,0,SEEK_CUR);
										fwrite(&books , sizeof(books) , 1 ,fd);
									}
								}
							fclose(fn);
							fclose(fd);
							remove("Issue.dat");
							rename("record.dat","Issue.dat");
							cout<<"\nThe issued book is removed from the list \n";

				    		}
				    		
				    		
				    		if ( getch() == 'n')
				    		{
				    			return;
							}
						}
						if(f!='b')
						{
					
							cout<<"\aSORRY!No Record Found \n";
						}
					}
					cout<<"Do you want to Delete any more? (Y/N) :";
					z=getch();
					if (getch()=='n')
					{
						issuebooks();
					}
				}
			}
			break;
			
		case '4':
			{
				return;
			}
		
			default:
			cout<<"\aWrong Entry!!";
    		getche();
			issuebooks();
			break;
		}
	
}

int t(void) //for time
{
time_t t;
time(&t);
printf("Date and time:%s\n",ctime(&t));

return 0 ;
}



int main (void)
{
	LinkedList a;
	a.loadlist();
	admin dt;
		restart:
	printf("***********!!!!!!!!!!  VORT LIBRARY MANAGMENT SYSTEM   !!!!!!!!!!!!************* \n\n");




//a.print();

printf("Press 1 for login, 2 for new account\n");
	char check;
	int passcheck;
	char ch=0;
	char password[20]="";

	check=getch();

	if (check=='2')
	{
		printf("New account\n");
		printf("\nUser id: ");
		scanf("%s",name);
		fflush(stdin);
		printf("\npassword: ");

		while(ch!=13)
		{
			ch=getch();
			if (ch!=13 && ch!=8)
			{
				putch('*');
				password[i]=ch;
				i++;
			}
			
		}

		

		a.append(name,password);
		a.save();

		
	}
	else if(check=='1')
	{
		printf("Login\n");
		printf("\nUser id: ");
		scanf("%s",name);
		fflush(stdin);
		printf("\npassword: ");
		while(ch!=13)
		{
			ch=getch();
			if (ch!=13 && ch!=8)
			{
				putch('*');
				password[i]=ch;
				i++;
			}
			
		}

		int logins;
		logins=a.compare(name,password);
		if (logins==0) //not found
		{
			printf("ID or password is incorrect!\n");
			Sleep(3000);

			system("cls");
			

			goto restart;

			
		}
		if (logins==2)//admin
		{
			Sleep(3000);
			system("cls");
			while(true)
	{
	
	mainmenu();
	cout<<"Please enter your desired option:";
	
	
	
	switch(getch())
	{
		case '1':
			{
				dt.addbooks();
				cout<<"\n\t";
				t();
				
			}
			break;
		case '2':
			{
				dt.deletebooks();
				cout<<"\n\t";
				t();
			}
			break;
		case '3':
			{
				dt.searchbooks();
				cout<<"\n\t";
				t();
			}
			break;
		case '4':
			{
				dt.issuebooks();
				cout<<"\n\t";
				t();
			}
			break;
	    case '5':
	    	{
	    		dt.viewbooks();
	    		cout<<"\n\t";
	    		t();
			}
			break;
	    case '6':
	    	{
	    		dt.editbooks();
	    		cout<<"\n\t";
	    		t();
			}
			break;
	    case '7':
	    	{
	    		system("cls");
				cout<<"\n\n\n\n \t\t\tProgrammers....\n\n\n";
				cout<<"\t  \2 1. Sana Younas	 E-mail:bscs14033@itu.edu.pk\n\n\n\n";
				cout<<"\t\1 2. Muhammad Abdullah Sajjad  E-mail:bscs14042@itu.edu.pk\n\n";
				cout<<"\n\n\t\t";
				t();
				
				cout<<"\n\n\n\n\n\n\n\n";
				exit(0);
			}
	    default:
	    	{
	    		cout<<"\n\aWrong Entry!!Please re-entered correct option\a\n";
				if(getch())
				mainmenu();
			}

    }
}
			
			
		}
		if (logins==3) //student
		{
			Sleep(3000);
			system("cls");
			while(true)
	{
	
	mainmenustud();
	cout<<"Please enter your desired option:";
	
	
	
	switch(getch())
	{

		case '1':
			{
				dt.searchbooks();
				cout<<"\n\t";
				t();
			}
			break;
	    case '2':
	    	{
	    		dt.viewbooks();
	    		cout<<"\n\t";
	    		t();
			}
			break;
	    case '3':
	    	{
	    		system("cls");
				cout<<"\n\n\n\n \t\t\tProgrammers....\n\n\n";
				cout<<"\t  \2 1. Sana Younas	 E-mail:bscs14033@itu.edu.pk\n\n\n\n";
				cout<<"\t\1 2. Muhammad Abdullah Sajjad  E-mail:bscs14042@itu.edu.pk\n\n";
				cout<<"\n\n\t\t";
				t();
				
				cout<<"\n\n\n\n\n\n\n\n";
				exit(0);
			}
	    default:
	    	{
	    		cout<<"\n\aWrong Entry!!Please re-entered correct option\a\n";
				if(getch())
				mainmenustud();
			}

    }
}
		}
		
	}
}
