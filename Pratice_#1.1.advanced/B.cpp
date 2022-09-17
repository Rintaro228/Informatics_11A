#include <bits/stdc++.h>

using namespace std;


int main() {
    int a[9];
    for(int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    cout << accumulate(a, a+9, 0) - (*min_element(a, a + 9)) * 9;
}