#include <iostream>
using namespace std;

void func()
{

    static int i = 0; // local static variable , only initialized once
    std::cout << i << std::endl;
    i++;
}

class singleton0
{

    static singleton0 *s_instance0;

public:
    static singleton0 &get()
    {

        return *s_instance0;
    }

    void hello()
    {

        std::cout << "hello\n";
    }
};

singleton0 * singleton0::s_instance0 = nullptr;

class singleton
{

public:
    static singleton &get()
    {
        static singleton s_instance;
        return s_instance;
    }

    void hello()
    {

        std::cout << "hello\n";
    }
};

int main()
{

    func();
    func();
    func();
    func();

    // singleton class

    singleton0::get().hello();

    // More appropriate 
    singleton::get().hello();

    return 0;
}