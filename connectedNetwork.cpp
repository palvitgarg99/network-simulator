#include "header.cpp" 
void connectedNetwork()
{
					int t=0,upto;
					cin>>upto;
					string temp_user;
					while(t!=upto)
					{
						cin>>temp_user;
						cout<<temp_user<<" ";
						struct user* nextNode=start;
			    		while(nextNode->next!=NULL)
			    		{
			    			nextNode=nextNode->next;
			    			if(nextNode->username.compare(temp_user)==0)
			    			{
			    				user_list[t++]=nextNode->uid;
			    				break;	
			    			}
			    		}			
					}

					
					//user_list is uids of users which we have to find are fully connected or not.
					int cur,cur2;
					for(cur=0;cur<upto;cur++)
					{
						for(cur2=cur+1;cur2<upto;cur2++)
						{
							if(adjmat[user_list[cur]][user_list[cur2]]!=1)
							{
								cout<<"are not fully connected!\n";
								break;
							}
						}
						if(cur2!=upto)
							break;
					}
					if(cur2==upto&&cur==upto)
						cout<<" are fully connected!\n";
}