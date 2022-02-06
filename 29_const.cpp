#include <iostream>
using namespace std;
class entity
{
private:
    int m_x, m_y;
    int * m;
    mutable int var;  // editable

public:
    int get_x() const // signifies that we cannot modify any of actuall class member variables
    {
        var++; // could be edited 
        //  m_x = 10;// invalid
        return m_x;
    }

    int set_x(){

        m_x = 10;
        return m_x;
    }

    const int * const get_m() const{

        return m;
    }


};

// using reference of object but not modifying

void print( const entity * e){

    std::cout<<e->get_x()<<endl;

    // we can't even call a functions which modify the entity

   // std::cout<<e->set_x()<<endl; // gives error as set x modifies x aswe can see in the method 
}

int main()
{
    //-------------------------- START FROM HERE --------------------------//

    // const - promise to keep value constant
    // but we can bypass them too

    const int a = 0;

    // a = 94; //error

    int *p = new int; // interger on heap not on stack on memory

    *p = 5;

    cout << (*p) << endl;

    // uing pointer to change const - it may not work in all compilers

    p = (int *)&a;

    cout << (*p) << endl; // stores

    *p = 94;

    cout << a << endl;

    const int *q = new int;

    // *q = 2; // error - we cant change the value of memory pointed by q

    q = (int *)&a; // we can change the pointer or memory where it should point

    int *const r = new int;

    // This makes the pointer to be constant not the location

    // in this type we can change the value not pointer

    *r = 2; // valid

    // r = (int *) &a; // in valid

 


    return 0;
}