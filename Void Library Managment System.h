#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
class LinkedList
{
	private:
		struct Node
		{
			char login_id[20];
			char password[20];
			char issuedbook[20];
			Node* next;
		};
		
		Node * head=NULL;
		
	public:
		LinkedList();
		void append(char * ,char * );
		int compare(char * ,char * );
		void print();
		void save();
		void loadlist();
		~LinkedList();
};

LinkedList::~LinkedList()
{
	Node * temp = head;
	head = NULL;
	while(temp!=NULL)
	{
		Node*temp2 = temp;
		temp = temp->next;
		free(temp2);
	}	
}

LinkedList::LinkedList()
{
	
	//head=(Node *)malloc(sizeof(Node));
	//head->next=NULL;
	
	
}


void LinkedList::append(char *n,char *m)
{
	//printf("<%s> <%s>\n",n,m);

	
	

		
		
		if( head== NULL)
	{
		
		head=(Node *)malloc(sizeof(Node));
	
		strcpy(head->login_id , n);
		strcpy(head->password , m);
		head->next = NULL;
	}
	
	
else{

		Node *temp=head;
		while(temp->next!=NULL)
		{
			
			temp = temp->next;
		}
		temp->next = (Node* )malloc(sizeof(Node));
		strcpy(temp->next->login_id , n);
		strcpy(temp->next->password , m);
		
		temp->next->next = NULL;
		
		

		
		
		
		
}

}

int LinkedList::compare(char *n,char *m)
{
	Node* temp = head;
	int a,s;
	char admins[20]="admin";
	a=strcmp(admins,n);
	s=strcmp(admins,m);

	if(a==0 && s==0)
	return 2;

	int check;
	int check2;
while(temp!=NULL)
	{
		check=strcmp(temp->login_id , n);
		if (check==0)
		{
			check2=strcmp(temp->password , m);
			if (check2==0)
			{
				printf("\nID and Password MATCH!\n");
				Sleep(1000);
				free(temp);
				return 3;
			}
		}

		temp = temp->next;
	}
	
	free(temp);

}

void LinkedList::print()
{
	Node* temp = head;
	

	
while(temp!=NULL)
	{
		printf("%20s\t", temp->login_id);
		printf("%20s\n", temp->password);
		temp = temp->next;
	}
	
	free(temp);
	


}


void LinkedList::save()
{
	Node* temp = head;
	FILE * record;
	record=fopen("students.txt","w+");

	
while(temp!=NULL)
	{
		fprintf(record,"%20s",temp->login_id);
		fprintf(record,"%20s\n",temp->password);
		temp = temp->next;
	}
	
	free(temp);
	fclose(record);
	

	

}

void LinkedList::loadlist()
{
	int count=0;
	char login_id[20];
	char password[20];
	Node* temp = NULL;
	//temp=(Node*)malloc(sizeof(Node));
	temp=head;
	FILE * record;
	record=fopen("students.txt","a+");
while(true)
{
	
	//printf("count == %d\n",count);
	//count++;
	if (feof(record))
		break;
	fscanf(record," %s      %s",login_id,password);
	//printf("%s\t",login_id);
	
		//printf("%s\n",password);
	
	
	append(login_id,password);
	

}
}


