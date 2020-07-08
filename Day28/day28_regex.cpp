#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
//Code starts
void printValues(vector<vector<string>> names_emails)
{
    regex pattern(".+@gmail\\.com$");
    multiset<string> data_sort;
    for(auto &i : names_emails)
    {
        if(regex_match(i[1], pattern))
            data_sort.insert(i[0]);
    }
    for(auto &i: data_sort)
        cout << i << "\n";
}
//Code ends
/*hackerrank boilerplate*/
int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<vector<string>> names_emails;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];
        string emailID = firstNameEmailID[1];
        names_emails.push_back(firstNameEmailID);
    }
    printValues(names_emails);
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
