#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum=n*(n+1);
	    sum=sum/2;
	    if(sum%2==0)
	    {
	        cout<<n<<endl;
	    }
	    else{
	        cout<<n-1<<endl;
	    }
	    
	}
	return 0;
}