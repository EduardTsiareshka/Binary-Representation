using namespace std;
#include <iostream>
#include <bitset>

int main()
{
    int a = -584, b = a >> 40, c = -30;

    cout << "a = " << std::bitset<8>(a) <<endl;
    cout << "b = " << std::bitset<8>(b) <<endl;
    cout << "c = " << std::bitset<16>(c) <<endl;
}
