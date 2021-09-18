#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    int sum = 0;

    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        sum += pow(n[i] - '0', 5);
    }

    cout << sum << endl;
}
