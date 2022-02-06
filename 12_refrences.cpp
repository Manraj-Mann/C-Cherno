#include <iostream>
//                                                                                                              ||
// ------------------------------------------ Start from main --------------------------------------------------||
//                                                                                                              ||
//                                                                                                             \  /
//                                                                                                              \/
# define log(x) std::cout<<x<<std::endl;


void increment(int a){

    a++;
}

void incre(int &a){

    a++; // increment + cleaner
}


void increment(int * v){

    (*v)++; // derefrences + increment
}

int main(){
    
    // remember : refrences serves the sam purpose as that of pointers there is just a suntax difference

    int a = 5;
    int &ref = a; // storing a reference to a or address of a  && cant be reassifned to other variable 

    ref = 2;  // changes value at address of a

    increment(a); // fails to increment as a copy of a is creted for increment function , the value is not changes at original address

    log(a);

    increment(&a); // success 

    log(a);

    incre(a); // success 

    log(a);



return 0;
}