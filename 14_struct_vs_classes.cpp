#include <iostream>
using namespace std;

class player
{
    int x, y;
};
struct play
{
    int x, y;
};


struct vec
{
    float vecx;
    float vecy;

    void add( const vec &v){

        vecx += v.vecx;
        vecy += v.vecy;
    }

};


int main()
{
    // Struct vs Class

    //-> Class varibale are private if we donot declare them public but strcuts are always public by default

    player p;

    // p.x = 0; // give error as x is private by default  error message will be : int player::x' is private within this context

    play q;

    q.x = 0; // perfectly fine as x is public by default

    // NOte : we can specify x as public in classes by using public keyword and simlarly in struct make x private using private keyword

    //---------------------------------------------- Usage in code ---------------------------------------------------//

    //-> There is just difference in usage

    // struct - preferred to declare a collection of variable example see vector structure above  , here we just wnated it to have some varibles
    // without any functionality or no kind of handling but we can have functions like we made add , or just manipulating variables

    // classes - classes are used to give much more functionality to our objects , also features like inheritance make class better , we can also 
    // inherit structures but they are not made for that pirpose


    return 0;
}
