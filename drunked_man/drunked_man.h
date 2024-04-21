#include <iostream>
#include <thread>
#include <chrono>

const char man = '#';
char map[] = "|                   |";
int mapsize = sizeof(map) / sizeof(char);
bool finish = 0;
short step;
void start()
{
    srand(time(NULL));
    int i = 2;
    while (!finish)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        int step = rand() % 3;
        if (map[1] == man && step == 1)
        {
            continue;
        }
        switch (step)
        {
        case 0:
            break;
        case 1:
            --i;
            break;
        case 2:
            ++i;
            break;
        }

        map[i] = man;
        if(map[i-1] != '|') map[i-1] = ' ';
        if(map[i+1] != '|') map[i+1] = ' ';
        std::cout << map << std::endl;
        if (map[mapsize - 2] == man)
        {
            finish = 1;
            std::cout << "YEAH!" << std::endl;
        }

    }
}
