#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    while (true)
    {
        getline(cin, str);
        if (cin.fail())
            break;
        cout << str << "\n";
    }
    
}