#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s) {
    // base condition
    if (i >= s.size() / 2)
        return true;

    // check characters
    if (s[i] != s[s.size() - i - 1])
        return false;

    // recursive call
    return f(i + 1, s);
}

int main() {
    string s = "madqam";

    if (f(0, s))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome " << endl;

    return 0;
}
