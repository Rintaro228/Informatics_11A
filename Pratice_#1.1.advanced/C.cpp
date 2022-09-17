#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    pair <int, int> result = (b % a == 0) ? make_pair(1, b/a) : make_pair(0, 0);
    cout << result.first << ' ' << result.second;
}