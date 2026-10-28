#include <iostream> 
using namespace std;

void GetName()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!\n";
}

int main()
{

    GetName();
    return 0;
}