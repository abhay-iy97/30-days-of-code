#include <bits/stdc++.h>

using namespace std;

int hourglass_sum(vector<vector<int>> arr)
{
    int count = 0, max_count = INT_MIN;
    for(int i=0;i<arr.size()-2; i++)
    {
        for(int j=0; j<arr[i].size()-2; j++)
        {
            count  = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            count += arr[i+1][j+1];
            count += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(max_count < count)
                max_count = count;
        }
    }
    return max_count;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    printf("%d",hourglass_sum(arr));
    return 0;
}
