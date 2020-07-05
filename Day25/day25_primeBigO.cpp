#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void prime(int n)
{
    int prime = 1;
    int reduced_n = sqrt(n);
    for(int i=2;i<=reduced_n;i++)
        {
            if(n%i == 0)
            {
                prime = 0;
                break;
            }
        }
    if(prime && n != 1)
        cout<<"Prime\n";
    else
        cout<<"Not prime\n";
}
int main() {
    int t;
    cin >> t;
    for(int i =0;i<t; i++)
    {
        int temp;
        cin>>temp;
        prime(temp);
    }  
    return 0;
}
