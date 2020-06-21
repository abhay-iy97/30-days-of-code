#include <bits/stdc++.h>

using namespace std;


int dec_to_bin(int n)
{
    int count = 0, keep_track = 0, max_count = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
            {
                if(keep_track == 0)
                    keep_track = 1;
                count++;
            }
        else {
            keep_track = 0;
            if(max_count < count)
                max_count = count;
            count = 0;
        }
        n = n / 2;
    }
    if(max_count < count)
        max_count = count;
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
