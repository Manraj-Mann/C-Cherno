#include <iostream>
using namespace std;

class entity
{
    int x, y;

public:

    void print()
    {
        std::cout << x << " , " << y << "\n";
    }
};

class entity2
{

public:

    // ------------ Note : Constructors should always be public else they will bnot be accessible outside the class or in any function -----//

    int x, y;

    // Constructor have same name as that of the class

    //  entity2(){}  // this is the example of impicit constructor which does nothing

    entity2() // this is the example of impicit constructor which does initialize x and y with 0
    {
        x = 0;
        y = 0;
    }

    // entity2() = delete; this deletes the cdefault constructor

    entity2(int x, int y) // explicit constructor with 2 arguments
    {
        this->x = x; // Use of this keyword is done to specify that we are setting up the variable x of classs equal to the local variable x
        this->y = y;
    }

    void print()
    {
        std::cout << x << " , " << y << "\n"; // Print values
    }
};

int main()
{

    entity set;

    // x and y are not initilized here if we print them it will print garbage values here

    set.print();

    // So we use contructors to set the values then the class is initialized , we can also write a function for it it be will not be handy
    // as we will have to initialize the function each time.

    // Every class has an inbuilt default constructor which runs automatically without calling and its called implicit constructor

    entity2 e; // calls the default constructor

    e.print(); // print 0 , 0

    // Also contructors can take the agruments and these constructors are called explicit constructors or user defined

    // Note : Any class can have any number of contructor but the should not have identical parameters

    entity2 e2(3, 9); // using explicit constructors

    e2.print(); // print 3 , 9


    // Advances topics will be covered ahead

    return 0;
}