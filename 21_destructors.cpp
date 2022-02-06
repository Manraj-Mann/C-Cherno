#include <iostream>
using namespace std;
class entity
{
    int x, y;

public:
    entity(int x, int y)
    {

        this->x = x;
        this->y = y;
        cout << "Constructed Entity !\n";
    }
    void print()
    {
        std::cout << x << " , " << y << "\n";
    }

    ~entity() // Destructor
    {
            // it will contains the delete for dynamucally allocated resources
        cout << "Destroyed Entity !\n";
    }
};

void func()
{

    entity e(3, 4);
}
int main()
{

    // A destructor free's the memory when object is destroyed

    entity obj(2, 3);

    cin.get(); // Hold the programs

    // we if we don't destroy the object ourrselevs the object will be deleted automatically when main will end destructor will be called

    // Lets see how it works

    func(); // will make entity object inside it and when function will end entity will call its destrctor

    return 0;
}