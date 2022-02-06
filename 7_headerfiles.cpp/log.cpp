#include "log.h"
#include <iostream>

void log(const char *msg)
{

    std::cout << msg << std::endl;
}
void initlog(){

    log("Initialized log");
}