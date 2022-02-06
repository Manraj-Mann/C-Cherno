#include <iostream>
using namespace std;

int main()
{

    // Used to control the flow of program , mainly 3 ketwords

    // continue - only used in loops
    // break - break instruction flow
    // return - return complete function

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // helps to skip every value where remainder by 2 is 0

            // continue asks loop to continue and skipping the below instructions (below continue)
        }

        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\n---------------------------------------------------\n";

    for (int i = 1; i < 10; i++)
    {
        if (i % 3 == 0)
        {
            break; // helps to break the loop when remainder is 0 with 3

            // break asks loop to break the loop and continue the instructions after loop
        }

        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\n---------------------------------------------------\n";

    for (int i = 1; i < 10; i++)
    {
        if (i % 3 == 0)
        {
            return 0; // completely return the function in which the instruction is called or stack trace 

        }

        std::cout << "i = " << i << std::endl;
    }

    return 0;
}