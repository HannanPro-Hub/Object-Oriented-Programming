#include <iostream>

using namespace std;

class Player
{
private:
    string name;
    static int playerCount;

public:
    Player(string name)
    {
        this->name = name;
        playerCount++;
    }

    static void showPlayerCount()
    {
        cout << "Number Of Players : " << playerCount << "\n\n";
    }
    ~Player()
    {
        playerCount--;
    }
};

int Player::playerCount = 0;

int main()
{
    Player p1("Hannan");

    Player p2("Laiba");

    {
        Player p3("Hussnain");
        Player::showPlayerCount();
    }

    Player::showPlayerCount();

    Player p4("Ali");

    Player::showPlayerCount();

    return 0;
}