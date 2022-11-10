/*      output
Enter the number 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
#include<iostream>
using namespace std;
int main() {
    int n,i,j,count=1;
    cout<<"Enter the number ";
    cin>>n;
    //for fisrt half;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int sp=2*n-2*i;
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
        //for second half;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int sp=2*n-2*i;
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}