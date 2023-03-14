#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include "Rock.hpp"
#include "Paper.hpp"
#include "Scissors.hpp"
#include "Robot.hpp"
#include "Zombie.hpp"
#include "Pirate.hpp"
#include "Ninja.hpp"
#include "Monkey.hpp"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Move> rock(new Rock());
    std::unique_ptr<Move> paper(new Paper());
    std::unique_ptr<Move> scissors(new Scissors());
    std::unique_ptr<Move> robot(new Robot());
    std::unique_ptr<Move> zombie(new Zombie());
    std::unique_ptr<Move> pirate(new Pirate());
    std::unique_ptr<Move> ninja(new Ninja());
    std::unique_ptr<Move> monkey(new Monkey());

    // dynamic allocation of memory using smart pointer objects
    std::unique_ptr<Player> computer(new Computer({rock.get()}));
    std::unique_ptr<Player> human(new Human({rock.get(), paper.get(), scissors.get(), robot.get(), zombie.get(), pirate.get(), ninja.get(), monkey.get()}));

    // referee instance
    Referee ref;

    // passing computer and human objects to refGame()
    ref.refGame(computer.get(), human.get());

    return 0;
}
