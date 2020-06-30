#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bubbleSort(vector<int> &a)
{
    int n =a.size(), maxSwaps = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                swap(a[j], a[j + 1]);
                maxSwaps++;
            }
        }
    }
    return maxSwaps;
}
int main() {
    vector<int> sort_this;
    int n, temp;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        {
            scanf("%d", &temp);
            sort_this.push_back(temp);
        }
    printf("Array is sorted in %d swaps.\n", bubbleSort(sort_this));
    printf("First Element: %d\n", sort_this[0]);
    printf("Last Element: %d\n", sort_this[sort_this.size()-1]);
    return 0;
}
