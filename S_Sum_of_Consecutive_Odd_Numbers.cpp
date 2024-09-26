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
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll m, n;
        cin>>m>>n;
        if(m>n)
        {
            ll sum=0;
            for(int i=n+1; i<m; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            cout<<sum<<'\n';
        }
        else
        {
            ll sum=0;
            for(int i=m+1; i<n; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            cout<<sum<<'\n';
        }
    }
    
    return 0;
}
