/*      OUTPUT
Enter the number of rows and columns4
5
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter the number of rows and columns ";
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}