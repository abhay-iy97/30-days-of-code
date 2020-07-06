#include <vector>
#include <iostream>
using namespace std;

void calculateFine(vector<int> actual, vector<int> expected)
{
    int fine = 0;
    if(actual[2] == expected[2])    //YEAR
    {
        if(actual[1] == expected[1]) // MONTH
        {
            if(actual[0] > expected[0]) // DAY
            {
                fine = 15 * (actual[0] - expected[0]);
            }s
        }
        else if(actual[1] > expected [1])
        {
            fine = 500 * (actual[1] - expected[1]);
        }
    }
    else if(actual[2] > expected[2])
    {
        fine = 10000;
    }
    cout << fine;
}
int main() {
    vector<int> expected(3);
    vector<int> actual(3);
    for(auto &i: actual)
        cin >> i;
    for(auto &i: expected)
        cin >> i;
    calculateFine(actual, expected);
    return 0;
}