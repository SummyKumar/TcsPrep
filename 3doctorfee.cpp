#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int a[20], i = 0, income = 0;
    string line;


    while (true)
    {
        getline(cin, line); // read entire line

        if (line.empty()) // stop if Enter pressed without input
            break;

        stringstream ss(line);
        ss >> a[i];

        if (a[i] < 1 || a[i] > 120)
        {
            cout << "INVALID INPUT";
            return 0;
        }
        else if (a[i] <= 17)
            income += 200;
        else if (a[i] <= 40)
            income += 400;
        else
            income += 300;

        i++;
        if (i == 20)
            break;
    }

    cout << "Total Income " << income << " INR";
    return 0;
}
