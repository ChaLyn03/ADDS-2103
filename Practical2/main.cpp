#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <memory> //for smart pointer objects using 'unique_ptr'

int main() {
    //dynamic allocation of memory using smart pointer objects (pointing to player instance)
    std::unique_ptr<Player> computer(new Computer());
    std::unique_ptr<Player> human(new Human());
    //ref is an instance of Referee
    Referee ref;
    //passing computer and human objects to refgame()
    ref.refGame(computer.get(), human.get());

    return 0;
}
