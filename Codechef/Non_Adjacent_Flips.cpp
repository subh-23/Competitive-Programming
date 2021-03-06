/*Boil
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/
// Header Files and Macros//----------------------------------------------------------------->>
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define mod (int)1e9
#define printCase(x) cout << "Case #" << x << ": "
// End Here//--------------------------------------------------------------------------------->>
void readVector(vi &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
}
void Print(int n)
{
    cout << n << '\n';
}

// put function

// Code Here -------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v;
    int even = 0, odd = 0;
    // printCase(z); //(For Google Competitions)
    // Code it Here
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.push_back(i);
        }
    }
    if (v.size() == 0)
    {
        cout << '0' << "\n";
        return;
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] + 1 == v[i + 1])
        {
            cout << '2' << "\n";
            return;
        }
    }
    cout << '1' << "\n";
}
//------------------------------------------------------------------------------------------>>
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int google = 1;
    cin >> google; // if not multiple testcase, remove it
    for (int i = 1; i <= google; i++)
    {
        solve(i);
    }
    return 0;
}
/*
INSTRUCTIONS TO KEEP IN MIND
-> Read the problem statement very clearly.
-> Dig deep into the problem statement and try to find the crispy part
   of the question. (Basically Logic)
-> Find out how the crispy part is helping you to design the algorithm
   to solve the current question
-> Try to find the edgecases.
-> Formulate the code in paper.
-> Code it.. Woohhhaaaahhh!! (Accepted)
*/