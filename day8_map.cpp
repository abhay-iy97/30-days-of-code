#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, long> phoneBook;
    string name;
    for(int i=0;i<n;i++)
    {
      long number;
      cin >> name >> number;
      phoneBook[name] = number;
      cin.ignore();
    }
    while (getline(cin, name))
    {
      auto it = phoneBook.find(name);

      if (it!=phoneBook.end())
        cout << name << "=" << it->second<<"\n";
      else
        cout << "Not found\n";
    }
    return 0;
}
