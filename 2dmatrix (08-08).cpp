#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{   

    int n,m;
    cout<<"Enter the 1st dimension Value (n) :"<<endl;
    cin>>n;
    cout<<"Enter the 2nd dimension Value (m) :"<<endl;
    cin>>m;    

    int mat1[n][m];
    int mat2[n][m];
    int add[n][m];

    //For matrix 1
    cout<<"Enter the elements 0f matrix 1 :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cin>>mat1[i][j];
        }
    }

    //for matrix 2
    cout<<"Enter the elements 0f matrix 2 :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cin>>mat2[i][j];
        }
    }

    //For addition of matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          add[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //For printing the added matrix
    cout<<"The addition of the matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }

    //For printing the transpose of the added matrix
    cout<<"The transpose of the matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<add[j][i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}