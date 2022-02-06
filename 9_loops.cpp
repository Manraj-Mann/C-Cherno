#include <iostream>
using namespace std;

int increment(int *i)
{

    (*i) = (*i) + 1;
    return *i;
}

int main()
{

    // repeat the instructions

    // syntax for loop:

    // for (int i = 0; i < 5 ; i++) // inialization ;  true condition ; increment / decrement or and other fix loop operation
    // {
    //
    // }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Hello World\n";
        std::cout << "Hello World\n";
    }

    // for loops are adjustable

    // example -

    bool cond = 1;
    int i = 0;
    for (/*no initialization is fine*/; cond; /*no increment decrement id fine*/)
    {

        std::cout << "Hello World how are you\n";
        if (!(i < 5))
        {
            cond = false;
        }

        i++;
    }

    // for loops can also have functions

    for (int i = 0; i < 5; increment(&i))
    {
        std::cout << "Hello World I am fine\n";
    }

    std::cout << "\n---------------------------------------------------\n";

    // While loops

    int j = 0;

    while (j < 10)
    {

        std::cout << "Hello World I am fine\n";
        j++;
    }


    // There is no difference , preference is given depending upon condition beacuse sometimes we could have some condition from above code 
    // then we can use a while loop else for loop is preferred as it is much more clear.

    // do while 


    std::cout << "\n---------------------------------------------------\n";
 
    int k = 0;
    do
    {
        std::cout<<"I am a naughty loop\n";
        k++;

    } while (k < 5);
    
    std::cout << "\n---------------------------------------------------\n";

    // do while loop runs one time even if the condition is false 

    bool condt = 0;
    do
    {
        std::cout<<"I am a very naughty loop\n";

    } while (condt);




    return 0;
}