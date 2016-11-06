#include "header.cpp" 
void newuser()
{
	struct user *temp=createuser();
	cin>>temp->username;
	cin>>temp->first_name;
	cin>>temp->last_name;
	newnode->next=temp;
	newnode=temp;
	cout<<temp->username<<" added successfully!\n";
}