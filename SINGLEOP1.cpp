#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                c++;
            else
                break;
        }
        cout<<c<<endl;
        
    }
	// your code goes here
	return 0;
}