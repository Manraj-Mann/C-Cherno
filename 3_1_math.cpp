#define INTEGER int

#if 1

const char *  log( const char * msg){

    return msg;
}
INTEGER multiply(INTEGER a, INTEGER b)
{
    log("Multiply\n");

    return a * b;

// } if we remove this brace and use out header file here
#include <3_2_endbrace.h> // see the error is removed

#endif 


    // After this we build this file

    // 3_1_math.obj file file will be created


    // The obj file will be a binary file containing the machine code 

    // We can see a readalble file using the properties = Assembly only listing

    // This will contain asssembly instructions ( in debug mode with no optimization will contain a long assembly level code )

    //  Call instruction calls the functions using the unique id or name or more appropriate function signature





