/*          OUTUT
Enter the number 5
    1
   212
  32123
 4321234
543212345
*/
#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"Enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k;
            k--;
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;

}