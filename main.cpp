#include "header.cpp"
#include "dijkistra.cpp"
#include "newuser.cpp"
#include "newfriendship.cpp"
#include "connectedNetwork.cpp"
#include "connectionDegree.cpp"
main()
{
	freopen("input.txt","r",stdin);
	// 1 for creating user
	// 2 for creating friendship
	// 3 to check fully connected network
	// 4 to find the degree of connections
	int choice;
	start=createuser();//dummy user
	newnode=start;
	int count;
	cin>>count;
	while(count--)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:
		        {
					newuser();
				}
					break;
			case 2:
			    {
			    	
			    	newfriendship();
				}
					break;
			    
			case 3:
				{
					connectedNetwork();
				}	

					break;
			case 4:
				{
					connectionDegree();
				}
					
			    	break;

			

		}
		
	}
	

}