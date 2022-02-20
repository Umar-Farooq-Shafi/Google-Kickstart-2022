#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string &kingdom)
{
    string ruler = "";

    for (auto &&str : kingdom)
    {
        
    }
    

    return ruler;
}

int main()
{
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t)
    {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
             << GetRuler(kingdom) << ".\n";
    }
    return 0;
}
