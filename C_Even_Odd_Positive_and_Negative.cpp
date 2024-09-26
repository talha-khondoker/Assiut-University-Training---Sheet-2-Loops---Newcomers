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
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll e=0, o=0, p=0, ne=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0) ne++;
        if(a[i]>0) p++;
        if(a[i]%2==0) e++;
        if(a[i]%2!=0) o++;
    }
    cout<<"Even: "<<e<<'\n';
    cout<<"Odd: "<<o<<'\n';
    cout<<"Positive: "<<p<<'\n';
    cout<<"Negative: "<<ne<<'\n';
    return 0;
}
