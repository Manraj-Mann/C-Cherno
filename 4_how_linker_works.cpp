#include <iostream>
#define INTEGER int

#if 1

const char * log(const char * msg);

// If above file is not there it will throw a compile time error 
// error: 'log' was not declared in this scope
    // log("Multiply\n");
    //                 ^

// Event after including the above declaration the compiler trusts us the that there will be some definifion of log function but 
// at linking stage the linker finds out that the log function is not define ( till now 4_1_log.cpp is now included ) and throws :

// C:\Users\mann1\AppData\Local\Temp\ccEPNJ9O.o:4_how_linker_works.cpp:(.text+0xe): undefined reference to `log(char const*)'
// collect2.exe: error: ld returned 1 exit status

// if we include this file 

#include "4_1_log.cpp"

// this runs perfectly 

// Output : 40


INTEGER multiply(INTEGER a, INTEGER b)  // if we add staic here it will link the function oinly if it is called in main function and internal linking 
                                        // means not not linking other files and not visible either
{
    log("Multiply\n"); 

    return a * b;

// } if we remove this brace and use out header file here
#include "3_2_endbrace.h" // see the error is removed

#endif 



   // -------------------------------------- READ FROM HERE -------------------------------//


    // After creation of the obj file the linker comes into the play 

    // if we run tha above code the error is there : 

    //c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../libmingw32.a(main.o):(.text.startup+0xa0): undefined reference to `WinMain@16'
    //collect2.exe: error: ld returned 1 exit status

    // Says that there is no main function  

    // undefined reference  this is linker error where as  error: expected  is compilation error

int main(){

    std::cout<<multiply(5,8);
}

// After build output : 40



