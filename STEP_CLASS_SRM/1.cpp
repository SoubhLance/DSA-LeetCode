//Basic Pointer Approach 

#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int *ptr = 0;
    
    cout<<"Value of a = " << a<<endl;
    cout<<"Address of a = " << (&a)<<endl;
    cout<<"Adress of a = " << ptr<<endl;
    
    cout<<"Adress of ptr = " << &ptr<<endl;

    int* ptr2 = &a;

    //ptr2=ptr;

    if(ptr == ptr2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}


/////////////////////////////////////////
///             OUTPUT                ///
/////////////////////////////////////////
///                                   ||
///      Value of a = 10              ||
///      Address of a = 0x61ff08      ||
///      Adress of a = 0              ||
///      Adress of ptr = 0x61ff04     ||
///                                  ///
////////////////////////////////////////