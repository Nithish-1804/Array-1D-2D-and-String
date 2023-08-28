#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int arr1[10];

    
    cout<<"Enter the element :";
    for(int i=0;i<10;i++)
    {
        cin>>arr1[i];
    }

    cout<<"The array elements are :";
    for(int j=0;j<10;j++)
    {
        cout<<arr1[j]<<endl;
    }

    return 0;
}