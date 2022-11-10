/*          OUTPUT
Enter the number of rows and columns 5
4
****
*  *
*  *
*  *
****
*/
#include<iostream>
using namespace std;
int main() {
    int row,col,i,j;
    cout<<"Enter the number of rows and columns ";
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || j==col || i==row || j==1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}