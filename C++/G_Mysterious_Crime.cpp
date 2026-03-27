#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

void solve()
{
    ll n, m, ans=0;
    cin >> n >> m;

    vector<vector<ll>> v(m, vector<ll>(n + 1));
    vector<ll> v1(m);

    for (ll i = 1; i <= n; i++)
    {
        cin >> v[0][i];
    }

    for (ll i = 1; i < m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            v[i][a] = j;
        }
    }

    ll st = 1, en = 1;
    bool flag = false;

    for (en = 1; en <= n;)
    {
        for (ll i = 1; i < m; i++)
        {
            v1[i] = v[i][v[0][en]] + 1;
        }

        en++;

        while (en <= n)
        {
            for (ll i = 1; i < m; i++)
            {
                if (v1[i] == v[i][v[0][en]])
                    v1[i]++;
                else
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                flag = false;
                break;
            }

            en++;
        }

        ll temp = en - st ;
        ans += (temp * (temp + 1)) / 2;
        st = en;
    }

    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}