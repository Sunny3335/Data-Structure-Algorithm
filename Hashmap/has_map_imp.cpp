#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter the string"<<endl;
    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    cout<<"jncj"<<endl;
    return 0;
}