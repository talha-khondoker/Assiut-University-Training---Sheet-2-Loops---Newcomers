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
        // ll n;
        // cin>>n;
        // while (n!=0)
        // {
        //     cout<<(n%10)<<" ";
        //     n/=10;
        // }
        // cout<<'\n';
        
        string s;
        cin>>s;
        for(int i=s.size()-1; i>=0; i--)
        {
            cout<<s[i]<<" ";
        }
        cout<<'\n';
        
    }
    
    return 0;
}
