#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
    cout<<"prime"<<endl;
    break;
    }}
    if(i==n)
    {
        cout<<"not prime"<<endl;
    }
    return 0;
}