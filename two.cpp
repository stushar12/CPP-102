#include<iostream>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    long long int n;
    cin>>n;
    if(n==0)
    {
        cout<<"NO";
        break;
    }

    if((n&(n-1))==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}