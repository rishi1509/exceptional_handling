/*PRN: 22070123095
Experiment-no: 16(a)*/
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
/*OUTPUT-enter 2 numbers:10 0 
Divide by 0 error
*/

/*PRN: 22070123095
Experiment-no: 16(b)*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nenter your age:";
    cin>>a;
    try
    {
        if(a>=18)
        {
           cout<<"you are adult";
            
        }
        else
        {
            throw a;
            
        }
        
    }
    catch(int e)
    {
        cout<<"\nyour age is " << e << " error";
        
        
    }
    return 0;
    
}
/*OUTPUT-enter your age:10

your age is 10 error*/
