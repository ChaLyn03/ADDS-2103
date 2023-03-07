#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Player> computer(new Computer());
    std::unique_ptr<Player> human(new Human());
    Referee ref;
    ref.refGame(computer.get(), human.get());

    return 0;
}
