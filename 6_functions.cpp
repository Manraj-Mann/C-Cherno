// Prevents code duplication 

#include <iostream>
using namespace std;

// Example

int multiply(int a , int b ){

    return a * b;
}
void multiplyandlog(int a , int b ){

    std::cout<<a * b<<std::endl;

}

int main(){


    /*
    syntax : 

    return type   nameoffunction ( parameters (optional) .......... ){


        // body


    }
    
    */

   int result = multiply(3 , 4);
   std::cout<<"result - "<<result<<std::endl;

   // or 

   std::cout<<multiply(  3, 8)<<std::endl;

   // or 

   // modify function 

   multiplyandlog(4 , 8);
   
    


return 0;
}