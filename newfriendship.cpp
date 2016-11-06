#include "header.cpp" 
void newfriendship()
{
	struct friendship *temp=createfriend();
			    	cin>>temp->requester;
			    	cin>>temp->requestee;
			    	cin>>temp->accepted;

			    	int requester_id=-1,requestee_id=-1;
			    	
			    	//searching the uids of usernames,going to be friends.
			    	struct user* nextNode=start;
			    	while(nextNode->next!=NULL)
			    	{
			    		nextNode=nextNode->next;
			    		if(nextNode->username.compare(temp->requester)==0||nextNode->username.compare(temp->requestee)==0)
			    		{
			    			if(requester_id==-1)
			    				requester_id=nextNode->uid;
			    			else
			    				requestee_id=nextNode->uid;
			    		}
			    		
			    	}	
			    	//searching completed.
			  
			    	if(temp->accepted==1)
			    	{
			    		adjmat[requester_id][requestee_id]=1;
			   			adjmat[requestee_id][requester_id]=1;
			   			cout<<temp->requestee<<" successfully accepted the friend request of "<<temp->requester<<"\n";
			    	}
			    	else
			    	{
			    		adjmat[requester_id][requestee_id]=0;
			    		adjmat[requestee_id][requester_id]=0;
			    		cout<<temp->requestee<<" successfully unfriended "<<temp->requester<<"\n";
			    	}		
}