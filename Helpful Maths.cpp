
#include <iostream>


using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int N=s.length(),temp;

	
	for(int i=0 ; i < N ; i+=2)
	{
		for(int j =i+2; j < N ; j+=2)
		{
			if(s[i] > s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
				
		}
	}
	
	for(int i=0 ; i < N ; i++)
	{
		cout<<s[i];
	}
	
	return 0;
	
}
