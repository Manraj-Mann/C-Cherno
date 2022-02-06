#include <iostream>
using namespace std;

// Recursion is a programming technique which is used when we have to real with do same task repetitively on a part upto a certian base condtition

// a stack of functions calls is made which can cause stack overflow if there is no base case

// Note : Every recursion program must have a base case

// For example - fictorial code

int fict(int n) // Input n is given to the factorial 
{

    if (n == 1)   // n == 1 is base case beacuse 0 and -ve factorials are not defined we cant go beyond it 
    {
        return 1; // since factorial 1 is 1 we will return 1
    }
    
    return n * fict(n-1); // makes a recursive call as we know  n ! = n * (n-1)
}

// Working of recursion : 

// if n = 5 , let s be an empty stack 
//                                            top
// as we make call to fict(5) from main s - [fict(5)]

//                                     top
// as we make call to fict(4) , s - [ fict(4) , fict(5)]

//                                     top
// as we make call to fict(3) ,  s - [ fict(3) , fict(4) , fict(5)]

//                                     top
// as we make call to fict(2) ,  s - [fict(2), fict(3) , fict(4) , fict(5)]

//                                     top
// as we make call to fict(1) ,  s - [fict(1) , fict(2), fict(3) , fict(4) , fict(5)]

// now after n is passed as 1 we go in if statement and return 1 so now stack has return value we pop back the values to previous call

//                top
// return 1  s - [ 1 , fict(2), fict(3) , fict(4) , fict(5)]

//                                                  top
// return 1 * 2  ( as return was 2 * fict(1) ) s - [ 2 , fict(3) , fict(4) , fict(5)]

//                                                       top
// return 1 * 2 * 3  ( as return was 3 * fict(2) ) s - [  6 , fict(4) , fict(5)]

//                                                            top
// return 1 * 2 * 3 * 4  ( as return was 4 * fict(3) ) s - [  24 , fict(5)]


//                                                               top
// return 1 * 2 * 3 * 4 * 5  ( as return was 5 * fict(4) ) s - [ 120]


//                                                               
// return returned 120 to main function as it was last return call and stack s is empty 

// Remember : In a recursion a stack of functions is created in memory so return values follow the LIFO 
// This implies that the base case is returned first 


// Note : every recusove function always have an iterative substitute 

// for example for above code

int fic_iter(int n ){

    int sum = 1; // This is same as base case of recusive fn above 

    for (int i = 2; i <= n; i++) // this loops serves the puspose of iterative calls 
    {
        sum = sum * i; // following property n! = n * (n-1)
    }

    return sum;  // returned fictorial 
    
}



int main(){


    cout<<fict(5)<<endl; // recursive call 

    cout<<fic_iter(5)<<endl; // iterative call 
    


return 0;
}