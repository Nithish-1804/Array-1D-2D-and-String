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

    int max= arr1[0];
    for(int j=0;j<10;j++)
    {
        if(max < arr1[j])
        {
            max=arr1[j];
        }
    }

    int min= arr1[0];
    for(int k=0;k<10;k++)
    {
        if(min > arr1[k])
        {
            min=arr1[k];
        }
    }

    cout<<"The Gratest element in array is :"<<max<<endl;
    cout<<"The smalest element in array is :"<<min<<endl;

    return 0;
}