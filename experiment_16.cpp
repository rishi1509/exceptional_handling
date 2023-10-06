#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nenter 2 numbers:";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"\ndivision="<<c;
            
        }
        else
        {
            throw b;
            
        }
        
    }
    catch(int e)
    {
        cout<<"\nDivide by"<<e<<"error";
        
        
    }
    return 0;
    
}
