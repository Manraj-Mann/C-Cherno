#include <iostream>
using namespace std;

// Inheritace - prevents code dupliction

class entity   // suppose we have a class entity which is havin position of player and move function 
{
    public:

    float x , y ; // position of player 

    void move(float xa , float ya) // move contains the movement of player
    {

        x += xa;
        y += ya;
    }
};

// Suppose a player which will have some position and move here and there 
// along with other useful functions and arrtibutes 

class player{

    public:
    const char * name;

    
    float x , y ; // position of player 

    void move(float xa , float ya) // move contains the movement of player
    {

        x += xa;
        y += ya;
    }

    void nameprint(){

        std::cout<<name<<std::endl;
    }


};

// But  as we can see we have used a lot of code again in this class which was previouly present 
// So inheritance helps here we caj use inheritance like this

// Now class is type entity and player both

class player_new : public entity
{
    public:

    const char * name;

    void nameprint(){

        std::cout<<name<<std::endl;
    }

};



int main(){


    // checking  if player_new contains entity or not 

    player_new p;
    p.x = 0;
    p.y = 0;
    p.move(1 , 2);
    p.name = "Hello";
    p.nameprint();

    // it works as we access all of them 


    

return 0;
}