#ifndef rep
#define rep
#include <bits/stdc++.h>
using namespace std;

int uid_count=-1;//It will maintain count of users in social network.
int id_count=0;
int adjmat[10000][10000]={0};//This will maintain the friendship between users.1 represents friends and 0 not friends.
int user_list[10000];//This will contain the list of users for which we have to find whether network is fully connected or not.
struct user
{
	int uid;
	string username;
	string first_name;
	string last_name;
	struct user *next;
}*start,*newnode;

struct user* createuser()
{
	struct user *temp=new user;
	temp->uid=uid_count++;
	temp->username="";
	temp->first_name="";
	temp->last_name="";
	temp->next=NULL;
	return temp;
}

struct friendship
{
	int id;
	string requester;
	string requestee;
	bool accepted;
};

struct friendship* createfriend()
{
	struct friendship *temp=new friendship;
	temp->id=id_count++;
	temp->requester="";
	temp->requestee="";
	temp->accepted=0;
	return temp;
}

#endif



