#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
const int INF = 1e9;
const ll LLINF = 4 * 1e18;
const ll MOD = 1e9 + 7;
typedef set<int> si;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<int, pii> iii;
typedef vector<pii> vii;
typedef vector<iii> viii;
typedef priority_queue<int> pqi;
typedef stack<int> sti;
typedef queue<int> qi;
typedef deque<int> di;
typedef map<int, int> mii;
typedef set<ll> sl;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> lll;
typedef vector<pll> vll;
typedef vector<lll> vlll;
typedef priority_queue<ll> pql;
typedef stack<ll> stl;
typedef queue<ll> ql;
typedef deque<ll> dl;
typedef map<ll, ll> mll;
#define f first
#define s second
// -----------------------------------------------------------

int evalRPN(vector<string> &tokens)
{
    stack<string> st;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+")
        {
            int op1 = stoi(st.top());
            st.pop();
            int op2 = stoi(st.top());
            st.pop();
            st.push(to_string(op1 + op2));
        }
        else if (tokens[i] == "*")
        {
            int op1 = stoi(st.top());
            st.pop();
            int op2 = stoi(st.top());
            st.pop();
            st.push(to_string(op1 * op2));
        }
        else if (tokens[i] == "-")
        {
            int op1 = stoi(st.top());
            st.pop();
            int op2 = stoi(st.top());
            st.pop();
            st.push(to_string(op2 - op1));
        }
        else if (tokens[i] == "/")
        {
            int op1 = stoi(st.top());
            st.pop();
            int op2 = stoi(st.top());
            st.pop();
            st.push(to_string(op2 / op1));
        }
        else
        {
            st.push(tokens[i]);
        }
    }
    return stoi(st.top());
}

int main()
{
}