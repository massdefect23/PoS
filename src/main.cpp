#include <iostream>
#include <vector>

class Block
{
public:
    int id;
    std::string prev_id;
    Block(int x, std::string y)
    {
        id = x;
        prev_id = y;
    }
};

int main()
{
    size_t size = 10;
    int sarray[10];
    int *darray = new int[size];

    for(int i=0; i<10; i++)
        sarray[i] = i;


    return 0;
}