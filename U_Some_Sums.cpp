#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i / 10 == 0)
        {
            if (i >= a && i <= b)
            {
                sum += i;
            }
        }
        else
        {
            ll tmp_num = i;
            ll tmp_sum = 0;
            while (tmp_num)
            {
                ll tmp_digit = tmp_num % 10;
                tmp_sum += tmp_digit;
                tmp_num /= 10;
            }
            if (tmp_sum >= a && tmp_sum <= b)
            {
                sum += i;
            }
        }
    }
    cout << sum;
    return 0;
}
