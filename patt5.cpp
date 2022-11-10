/*
Enter the number of stars to be printed 5
    *
   **
  ***
 ****
*****
*/
#include<iostream>
using namespace std;
int main() 
{
    int n,i,j;
    cout<<"Enter the number of stars to be printed ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}