#include <iostream>
using namespace std;

struct entity
{
    int x, y;

    void print()
    {

        std::cout << x << " , " << y << std::endl;
    }
};

struct entity2
{
    static int x, y;

    void print()
    {

        std::cout << x << " , " << y << std::endl;
    }
};

// uncomment only when u reach the line to uncomment this ( COMMENT THEM IF NOT DONE INITIALLY )

// declare :

int entity2 ::x;
int entity2 ::y;


struct entity3
{
    static int m, n;

    static print()
    {

        std::cout << m << " , " << n << std::endl;
    }
};

int entity3::m;
int entity3::n;

// struct entity4
// {
//     int p, q;  // non static 

//     static print()
//     {

//         std::cout << p << " , " << q << std::endl;    // accessing non static
//     }
// };


int main()
{

    // below works as usually

    entity r;
    r.x = 10;
    r.y = 20;

    entity e = {30, 40};

    r.print();
    e.print();

    // if we make a new struct and make these variales static lets see what happens

    std::cout << "-----------------------------------------------------\n";

    entity2 r2;
    r2.x = 10;
    r2.y = 20;

    // entity2  = {30 , 40}; this initialization falis here as x and y are no more struct or class members

    entity2 e2;
    e2.x = 30;
    e2.y = 40;

    // error on running :

    // undefined reference to `entity2::x'
    // undefined reference to `entity2::y'
    // undefined reference to `entity2::x'
    // undefined reference to `entity2::y'


    // this is beacuse now we have to define thore variables somewhere as x and y are no longer class members
    // uncomment lable : declare

    r2.print();
    e2.print();

    // output :

    // 30 , 40
    // 30 , 40

    // reason : as these is only one instance for all instances , its a shared memory 

    // ALSO INITIALIATION IS 

    entity2::x = 10;
    entity2::y = 30;


    // useful when we use same varibles accross different classes


    // Now lets see behavior of static methods using entity3 

    std::cout << "-----------------------------------------------------\n";

    entity3::m = 3;
    entity3::n = 4;

    entity3::print();

    // REMEMBER : static methods can only access static variables 

    // uncomment below code and entity 4 to see

    // entity4 e4;
    // e4.p = 1000;
    // e4.q = 1000;

    // entity4::print();

    // error =  error: invalid use of member 'entity4::p' in static member function


    // How to access - we can pass the entity to use it , try it yourself !



    return 0;
}