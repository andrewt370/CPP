#include <iostream>
using namespace std;

int main()
{
    string names[5] = {"Andy", "John", "Will", "Phil", "Alex"};
    string temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (names[i].compare(names[j]) > 0)
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Name %d is %s\n", i, names[i].c_str());
    }
    
}