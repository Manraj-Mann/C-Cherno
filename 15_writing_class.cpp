#include <iostream>
using namespace std;

// *************************************** Start from main ********************************************//

class log
{

public: // see we have 2 different public sections . its just there to show the diffrenetiation of the use

    const int loglevelerror = 1;
    const int loglevelwarning = 2;
    const int loglevelinfo = 3;

private:
    int m_loglevel = loglevelinfo; // just a cobvention to diffrentiate b/w private or public members
public:
    void setlevel(int level)
    {

        m_loglevel = level;
    }

    void warn(const char *msg)
    {
        if (m_loglevel >= loglevelwarning)
        {
            std::cout << "[WARNING] : " << msg << std::endl;
        }
    }
    void error(const char *msg)
    {
        if (m_loglevel >= loglevelerror)
        {
            std::cout << "[ERROR] : " << msg << std::endl;
        }
    }
    void info(const char *msg)
    {
        if (m_loglevel >= loglevelinfo)
        {
            std::cout << "[INFO] : " << msg << std::endl;
        }
    }
};

int main()
{

    // Having some more particular dicussion on class

    // We will make a log class with 3 different levels

    // 1. error
    // 2. warning
    // 3. messege

    // move to log class

    log console;

    console.setlevel(console.loglevelwarning);

    console.warn("hello warning");
    console.error("hello warning");
    console.info("hello warning");


    // We will improve this code to production level code in future :)



    return 0;
}