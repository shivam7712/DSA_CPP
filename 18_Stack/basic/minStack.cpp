#include <iostream>
#include <stack>
using namespace std;


class MinStack {
public:
    stack<pair<int, int>> st;
    int mn = INT_MAX;


    void push(long long x) {
        if(st.empty()) st.push({x, x});
        else st.push({x, min(x, getMin())});
    }

    void pop() {
        if(st.empty()) return;
        st.pop();
    }

    long long top() {
        if(!st.empty()) return st.top().first;
        return -1;
    }

    long long getMin() {
        if(st.empty()) return -1;
        return st.top().second;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    MinStack st;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;
            st.push(x);
        } else if (type == 2) {
            st.pop();
        } else if (type == 3) {
            cout << st.top() << "\n";
        } else {
            cout << st.getMin() << "\n";
        }
    }

    return 0;
}
