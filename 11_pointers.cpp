#include <iostream>
using namespace std;


// *************** ignore this part *******************//
template <typename T>
void memset(T * ptr , T data , int bytes ){
    
    for (int i = 0; i < bytes; i++)
    {
         *ptr = data;
    }
    
}

//************************************************//

int main(){

    // MEMORY IS EVEVRYTHING 
    
    // computer works on memory , pointer helps to manage memmory

    // A pointer just stores the memory addresses

    // A memory is just like a one linear line of lots of houses , and all these houses are our memory blocks or various memory locations with
    // thier unique addresses.


    //--------------------------------------------------------------------------------------------------//

     void * /* void dont care about type */ ptr  = NULL;  // 0 is not a valid address  ( cceptable but not good in practise )
     void * /* void dont care about type */ ptr2  = nullptr ;  // poointer pointing to NULL
    
    //--------------------------------------------------------------------------------------------------//

    int var = 8;

    std::cout<<"Address of var = "<<&var<<std::endl;
    
    int * add = &var;

    std::cout<<"Address of var = "<<add<<std::endl; // stored the same value as &var , means address of var is stored in add

    //--------------------------------------------------------------------------------------------------//


    // Accessing the data to read write

    *add = 10;

    std::cout<<"var = "<<var;

    // ---------------------------------------------------------------------------------------------------//

    //  dynamic memory allocation

    char * string = new char[100];  // dynamically allocated 100 bytes of char type memory

    memset(string , 'a' , 100); // to set all memory location with a value

    delete [] string; // free the memory ( means releae it from our use )





    






return 0;
}                                                                                                                                                                                                             