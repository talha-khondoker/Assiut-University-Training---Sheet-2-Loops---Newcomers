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
        ll n;
        cin>>n;
        ll one=0;
        while (n!=0)
        {
            if(n%2==1)
            {
                one++;
            }
            n/=2;
        }
        ll sum=0;
        for(int i=0; i<one; i++)
        {
            sum+=1*(pow(2, i));
        }
        cout<<sum<<'\n';
    }
    
    return 0;
}
