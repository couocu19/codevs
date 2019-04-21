#include<string>

#include<iostream>

int main() {

using namespace std;

string s;

getline(cin, s);

const int t[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,

                       2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};

   int cnt(0);

for (int i(0); i < s.size(); ++i)

    cnt += (s[i] == ' ' ? 1 : t[s[i] - 'a']);

    cout << cnt << endl;

    return 0;

}
