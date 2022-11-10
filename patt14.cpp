/*          OUTPUT
Enter the number 4
   *   
  ***  
 ***** 
*******
*******
 ***** 
  ***  
   *   
*/
#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"Enter the number ";
    cin>>n;
    //FOR FIRST HALF PATTERN
    for(i=1;i<=n;i++)
    {
       
            for(j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;   
    }
    //FOR FIRST HALF PATTERN
    for(i=n;i>=1;i--)
    {
       
            for(j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        
    }
    return 0;
}