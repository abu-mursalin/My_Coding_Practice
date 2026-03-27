#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }

    for (auto u : m)
    {
        if (u.second % u.first != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (auto u : m)
    {
        if (u.second > u.first)
        {
            int i = 0, cnt = 0, check = 1;
            for (i = 0; i < n; i++)
            {
                if (v[i] == u.first)
                    cnt++;
                if (cnt == u.first)
                    break;
            }
            cnt = 0;
            i++;
            int len = u.second / u.first;
            len--;
            while (len--)
            {
                while (m[check] > 0)
                {
                    check++;
                }
                for (int j = i; j < n; j++)
                {
                    if (v[j] == u.first)
                    {
                        v[j] = check;
                        cnt++;
                    }
                    if (cnt == u.first)
                    {
                        i = j + 1;
                        cnt = 0;
                        break;
                    }
                }
                check++;
            }
        }
    }

    for (auto u : v)
        cout << u << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}