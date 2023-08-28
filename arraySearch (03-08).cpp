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

    int ele;
    cout<<"Enter the element to be searched :";
    cin>>ele;

    int j;
    for(j=0;j<10;j++)
    {
        if(arr1[j]==ele)
        {
            cout<<"Element found at index "<<j;
            break;
        }
    }
    if(j==10)
    {
        cout<<"Element not found";
    }

    return 0;
}