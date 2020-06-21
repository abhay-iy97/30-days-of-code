#include <bits/stdc++.h>

using namespace std;

int dec_to_bin(int n)
{
    int count = 0, max_count = 0;
    while(n > 0)
    {
        if(n % 2)
            count++;
        else
            count = 0;
        if(max_count < count)
            max_count = count;
        n /= 2;
    }
    return max_count;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << dec_to_bin(n);
    return 0;
}
