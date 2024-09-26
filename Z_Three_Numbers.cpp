#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll k, s;
    cin>>k>>s;
    ll cnt=0;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
                if((s-i-j)>=0 && (s-i-j)<=k)
                {
                    cnt++;
                }
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
