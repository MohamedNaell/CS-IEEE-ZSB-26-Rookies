#include <iostream>
#include <set>
using namespace std;

set<string> st;

void generate(string s, int l) {
    if (l == s.size() - 1) {
        st.insert(s);
        return;
    }
    for (int i = l; i < s.size(); i++) {
        swap(s[l], s[i]);
        generate(s, l + 1);
        swap(s[l], s[i]);
    }
}

int main() {
    string s;
    cin >> s;

    generate(s, 0);

    cout << st.size() << "\n";
    for (auto &str : st)
        cout << str << "\n";

    return 0;
}

