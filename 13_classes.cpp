#include <iostream>
using namespace std;

// ****************************************** Start from main ************************************//

class player
{

public: // Make them public , so that we can access them in main function or anywhere else
    int x /* x co ordinate of player */, y /* y co ordinate of player */;

    int speed; // Speed of player

    void print(){

        std::cout<<"x co-ordinate = "<<x<<" , y co-ordinate = "<<y<<" , speed of player = "<<speed<<std::endl;
    }
    void speedup(int speedup ){

        speed += speedup ;
    }


};

int main()
{

    // Classes are there to improve code redundency //

    // For example if we are having 2 players and we have their code ordinates we will make it like

    int player1x, player1y;
    int player2x, player2y;

    // if we need more player we have have to write more code and it goes on and also if i want to write a function for it , it will be very
    // cumbersome to pass all arguments every time
    // ...........................................

    // But classes make it easy for us to declare them only once and create it a defined object

    // syntax:

    // class  nameofclass
    // {
    // private:           // variables private to class
    //     /* data */
    // public:          // variables public to classes
    //      nameofclass(/* args */);        // Constructor
    //     ~ nameofclass();                 // destructor
    // };

    //  nameofclass:: nameofclass(/* args */)   // May have some overloaoded constructors
    // {
    // }

    //  nameofclass::~ nameofclass() //  // Destructor for overloaoded constructors
    // {
    // }

    player player1;
    player player2;

    // now we can access these attributes

    player1.x = 1; // Setiing up the x variable as 1 for player 1
    player1.y = 2;
    player1.speed = 3;

    player2.x = 4;  // Setiing up the x variable as 1 for player 2
    player2.y = 5;
    player2.speed = 6;


    // we can write the function and it will be applicable for the objects

    // for example - print()

    player1.print();
    player2.print();

    // we can write similar function to speed up the player 

    // for example - speedup()
    
    player1.speedup(10);
    player2.speedup(100);

    player1.print();
    player2.print();


    // Terms - functions inside classes are called methods 



    return 0;
}