#include <iostream>
using namespace std;

int main()
{

    // Array - Collection of elements or variable in contiuous memory locations

    int array[3]; // syntax : type_of_array name_of_array [size u need]

    /// accessing the elements

    //           [garbage][garbage][garbage] // contains some garbage values
    // indices:     0        1        2

    array[1] = 0;
    array[2] = 10;

    /// [garbage][0][10] // contains value at 1

    cout << array[2]<<endl; // prints 10

    // Accesseing indices not present - memory access voilation

    //  cout<<array[40]; // some random value

    // using with for loops

    for (int i = 0; i < 3; i++)
    {
        array[i] = i; // for i - 0 , array[0] = i;
    }

    // Printing 

    for (int i = 0; i < 3; i++)
    {
        cout<<array[i]<<endl;
    }
    
    // Baiscally the name of array is just a pointer to the contiguous memory block

    int * ptr = array;


    cout<<ptr[1]<<endl; // prints 1

    cout<<(*(ptr + 2))<<endl; // since pte points to o index 0 +2 will point to index 2
    // so it prints 2 as output

    // Note since integer is of 4 bytes every +1 addition to ptr results 4 byte addtion which is the size of integer ( for my system)

    ptr = array;// resetting ptr to 0 index

    cout<<(*(int *)((char*)ptr + 8))<<endl; // prints 2 as we typecasted pointer to char type 
    // so that if we add 1 it will add only one byte so in order to reach 2 we added 8 bytes
    // after that we recasted it in int type and dereferenced it

    // size of areay

    int size =  sizeof(array)/sizeof(int);
    // also secondly 

    int * arr = new int[10]; // dynamic array

    // normal array is made in stack
    // dynamic array is in heap
    
    return 0;

}
