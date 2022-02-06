#include <iostream>
using namespace std;

// Suppose there are some variable A , B and C which we will use

int A = 0;
int B = 1;
int C = 3;

enum Example
{

    // by default thery are like 0 , 1 , 2 ......

    a = 0,
    b = 1,
    c = 2,
};

enum Example2
{

    p = 5,
    q,
    r,

    // there are p = 5 , q = 6 , r = 7 automatically if we hust give value to one of them
};

enum Example3 : char // defined as char 
{

    w = 'c',
    s = 'd',
    t = 's',

    
};

class log
{

public: // see we have 2 different public sections . its just there to show the diffrenetiation of the use
    enum level
    {

        Error = 0,
        Warning,
        Info,

    };

private:
    level m_loglevel = Info; // created a restriction on the m_loglevel so there are no values other then them could be entered

public:
    void setlevel(level level)
    {

        m_loglevel = level;
    }

    void warn(const char *msg)
    {
        if (m_loglevel >= Warning)
        {
            std::cout << "[WARNING] : " << msg << std::endl;
        }
    }
    void error(const char *msg)
    {
        if (m_loglevel >= Error)
        {
            std::cout << "[ERROR] : " << msg << std::endl;
        }
    }
    void info(const char *msg)
    {
        if (m_loglevel >= Info)
        {
            std::cout << "[INFO] : " << msg << std::endl;
        }
    }
};

int main()
{

    // Enums

    // using above in our functionality as :

    // int value = B;

    // if (B == value)
    // {

    //     // Do something
    // }

    // But there are just freely available everywhere and having the same use , what if we can group them togeather -> enums

    // We can assign only the variable which we defined inside our enums , example:

    Example value = b; // asigned value = 1

    if (value == 1)
    {
        std::cout << value << std::endl;
    }

    Example value2 = c;

    std::cout << value2 << std::endl;

    //  Example value3 = d;  // Gives error -  error: 'd' was not declared in this scope

    //   Example value3 = 9;  // Gives error -  invalid conversion from 'int' to 'Example'

    // So now only the desfined values can be assigned not anything could be given as we saw in previous case

    Example3 l = s;

    std::cout << l << std::endl;

    // USing enums in log class


    log console;

    console.setlevel(log::Error);

    console.warn("hello warning");
    console.error("hello warning");
    console.info("hello warning");

    // See how we name our class more cleaner and specific

    // We will improve this code to production level code in future again :)



    return 0;
}