#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <memory>

int main() {
    //dynamic allocation of memory for pointer objects (pointing to player instance)
    std::unique_ptr<Player> computer(new Computer());
    std::unique_ptr<Player> human(new Human());
    //ref is an instance of Referee
    Referee ref;
    //passing computer and human objects to refgame()
    ref.refGame(computer.get(), human.get());

    return 0;
}
