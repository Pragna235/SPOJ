#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%10==0)
        cout<<2<<endl;
    else
        cout<<1<<endl<<x%10<<endl;
    return 0;
}
