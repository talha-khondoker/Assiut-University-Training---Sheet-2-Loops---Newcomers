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
    string s;
    cin>>s;
    string k;
    k=s;
    reverse(k.begin(), k.end());
    k.erase(0, k.find_first_not_of('0')); // delete all leadding zeros
    cout<<k<<'\n';
    if(k==s) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}
