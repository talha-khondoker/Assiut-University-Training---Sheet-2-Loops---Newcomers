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
    ll a, b;
    cin>>a>>b;
    ll st, cp, fl=0, ind=0;
    for(int i=a; i<=b; i++)
    {
        cp=i;
        fl=0;
        while (cp)
        {
            st=cp%10;
            if(st==4 || st==7)
            {
                fl=1;
            }
            else
            {
                fl=0; break;
            }
            cp/=10;
        }
        if(fl==1)
        {
            cout<<i<<" ";
            ind=1;
        }
    }
    if(ind==0) cout<<-1;
    return 0;
}