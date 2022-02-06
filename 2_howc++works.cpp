#include <iostream> // Preprocessor statement

// Preprocess this file before actual compilation
// Take all content on iostream and then paste it here 

using namespace std;

int main() // main funtion = entry point in a prgram 
{
    std::cout << "Hello World" << std::endl;   // these << are opertors or more appropriate functions int which we push string "Hello World" in cout t print       
    std::cin.get(); // Wait for us to press something 

    return 0; // return after the ending of the function if not written then it assumes it to be 0


}
/*

Step 1 = Preprocessing 

Step 2 = Compilation = ( c++ --->  machine code ) cpp to object file (.obj)

Step 3 = Linking ( Linker stiches all the obj file of a project and stich them togeather in  exe file ) and it finds the definitions of
functions and link them with calls but if it fails to find definitions it throws the error


*/