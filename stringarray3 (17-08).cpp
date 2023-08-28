#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    char str1[25];
    cout<<"Enter The string : ";
    cin.get(str1,25);
    cout<<"The Entered String is : "<<str1<<endl;   

    int n = sizeof(str1);
    cout<<"Number of elements in the string : "<<n;

    return 0;
}

//using pointers aswell next code
