#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int variable = 8; // size depends on compiler  ( store between -2 billion -> +2 billion)

    std::cout << "Variable = " << variable << std::endl;

    // Why there are limits

    // consirdering integer to be 4 byte
    //  1 byte = 8 bits
    //  32 bits
    // 1 bit for sign +ve or -ve
    // 31 bits remaining each could have 0 or 1  = 2147483648 or 2 ^ 31

    // if we don't want to specify sign or always positive

    // use unsigned keyword with range 2 ^ 32

    unsigned int var = 9;

    std::cout << "Variable = " << var << std::endl;

    // data type  |     size
    // char             1
    // short            2
    // int              4
    // long             4
    // long long        8
    // flaot            4  
    // double           8
    // bool             1  ( why 8 byte ? ) ( beacuse we dont have any way to access 1 bit in memory )

    float f = 8.2f;

    char a = 0;
    for (int i = 0; i < 1000; i++)
    {
        std::cout<<a<<" ";
        a = a + 1;
    }
    

    // sizeof () 

    std::cout<<"int "<<sizeof(int)<<std::endl;
    std::cout<<"float "<<sizeof(float)<<std::endl;
    std::cout<<"double "<<sizeof(double)<<std::endl;

    // Also all these things can be used as pointer 

    
 
    return 0;
}