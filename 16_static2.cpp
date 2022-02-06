#include <iostream>
#include "16_static.cpp"
using namespace std;

// code 1 :
// int s_var = 10; // gave it same name as that of our previous static

// code 2

extern int s_var; // extern - look for external translational unit or also called external linking

int main(){

    std::cout<<"s_var = "<<s_var<<std::endl;

    // if we use code 1 

    // error -  error: redefinition of 'int s_var'
    // In file included from 16_static2.cpp:2:0:
    // 16_static.cpp:9:16: note: 'int s_var' previously defined here
    // static int s_var = 2; // will be linked internally in this translaional unit


    // if we use code 2 and uncomment it and comment 1



return 0;
}