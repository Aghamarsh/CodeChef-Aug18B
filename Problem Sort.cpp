#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    
    ll n,s;
    
    cin>>n>>s;
    
    vector <pair <ll,ll>> ans;
    
    for(ll i=0;i<n;i++)
    {
        vector <pair <ll,ll>> p;
        ll temp;
        
        for(ll j=0;j<s;j++)
        {    
        cin>>temp;
        p.push_back(make_pair(temp,0));
        }
        
        for(ll j=0;j<s;j++)
        cin>>p[j].second;
        
        sort(p.begin(),p.end());
        
        int count=0;
        
        for(int j=0;j<s-1;j++)
        {
            if(p[j].second>p[j+1].second)
            {
                count++;
            }
        }
        ans.push_back(make_pair(count,i));
    }
    
    
    sort(ans.begin(),ans.end());
        
    for(ll i=0;i<n;i++)
    {
        cout<<(ans[i].second+1)<<endl;
    }
}