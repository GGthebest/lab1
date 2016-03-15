#include <iostream>

using namespace std;

int main()	
{
	int x;	
	cout<<"Please enter a number"<<endl;
	cin>>x;
        cout<<x<<" ";

	while (1)
	{
		

		if (x%2==0)
		{		
			x=x/2;
			cout<<x<<" ";
		}	
	
   		if (x%2==1&&x!=1)
		{	
			x=x*3+1;
			cout<<x<<" ";
		}	
		if (x==1)
		{
			break;
		}
	
	}
        
        cout << endl;

	return 0;
}

