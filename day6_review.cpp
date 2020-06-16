#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printFormat(string sentence)
{
    string sen1="", sen2="";
    for(int i=0;i<sentence.length();i++)
    {
      if(i%2==0)
        sen1+=sentence[i];
      else
        sen2+=sentence[i];
    }
    cout<< sen1 <<" " << sen2 << endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    string sentence;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
      {
        getline(cin,sentence);
        printFormat(sentence);
      }
    return 0;
}
