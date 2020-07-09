#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void calculate(int n, int k)
{
    int max = 0;
    for(int i=1;i<k;i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int temp = i & j;
            if(temp < k && temp > max)
            {
                max = temp;
            }
        }
    }
    cout<<max<<endl;
}

int main()
{
    int t;
    cin >> t;
    vector<pair<int,int>> values;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n,k;
        cin >> n >> k;
        cin.ignore();
        values.push_back(make_pair(n,k));
    }
    for(auto &i:values)
    {
        calculate(i.first, i.second);
    }
    return 0;
}
