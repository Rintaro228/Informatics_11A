#include <bits/stdc++.h>

using namespace std;

char min_string(string s) {
    char out = '9';
    for(int i = 0; i < s.size(); i++) {
        out = min(s[i], out);
    }
    return out;
}

int main() {
    string s;
    cin >> s;
    if(s.size() == 2) {
        cout << s[1];
    } else {
        cout << min_string(s);
    }
}