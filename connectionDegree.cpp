#include "header.cpp" 
void connectionDegree()
{
	string user1,user2;
					cin>>user1>>user2;
					int user1_id=-1,user2_id=-1;
					struct user* nextNode=start;
			    	while(nextNode->next!=NULL)
			    	{
			    		nextNode=nextNode->next;
			    		if(nextNode->username.compare(user1)==0||nextNode->username.compare(user2)==0)
			    		{
			    			if(user1_id==-1)
			    				user1_id=nextNode->uid;
			    		    else
			    		    	user2_id=nextNode->uid;	
			    		}
			    		
			    	}	
			    	int degree=dijkistra(user1_id,user2_id);
			    	if(degree>uid_count)
					cout<<user1<<" & "<<user2<<" don't have any relation through any of friends\n";
					else
						cout<<"Degree of friendship between "<<user1<<" and "<<user2<<" is : "<<degree<<"\n";

}