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
    cout<<"Hello, World!\n";
    return 0;
}