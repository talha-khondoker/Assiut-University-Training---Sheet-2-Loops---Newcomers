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
    while (true)
    {
        ll n,m;
        cin>>n>>m;
        if(n<=0 || m<=0)
        {
            break;
        }
        else
        {
            if(m>n)
            {
                ll sum=0;
                for(int i=n; i<=m; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
                cout<<"sum ="<<sum<<'\n';
            }
            else
            {
                ll sum=0;
                for(int i=m; i<=n; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
                cout<<"sum ="<<sum<<'\n';
            }
        }
    }
    
    return 0;
}
