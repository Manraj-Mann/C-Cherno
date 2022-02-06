#include <iostream>
#include <string>
using namespace std;

class entity
{
private: // Private  - visible only to class
    int x, y;

public: // Public  - visible everywhere in code

    void setval(int i, int j)
    {

        x = i;
        y = j;
    }

protected:
    int z;
};

class player : public entity // inherits publicaly means that all the methods which are inherited will be public members of the class now
{

public:
    void setnewval(int p, int q)
    {

        // x = 10; //  Not accessible

        setval(p * q, p - q); // Accessible since its public

        z = 0; // Acessible since its inherited class
    }
};

int main()
{

    // Visibilituy - who can se who

    // Visibility mode
    // - private , protected , public

    entity w;

    // w.x = 0;// Not accessible since its private to entity

    w.setval(2, 3); // Accessible since the are public

    // protected - more visivle then private less than public

    // z = 10; // can not access protected inside main function 

    // Visiblility helps to main access of one class in others and main function or which context is relevant to which 

    return 0;
}