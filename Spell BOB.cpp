#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	
	for(ll i=0;i<t;i++)
	{
	    int n=3;
	    string a,b;
	    
	    cin>>a>>b;
	    
	    int ob[8][3]={  0,0,0,
	                    0,0,1,
	                    0,1,0,
	                    0,1,1,
	                    1,0,0,
	                    1,0,1,
	                    1,1,0,
	                    1,1,1
	                   };
	                  
	   int flag=0;
	   
	   for(int j=0;j<8;j++)
	   {
	       
	       string s="";
	       
	       int k=0;
	       while(k<3)
	       {
	       if(ob[j][k]==0)
	       {
	           s+=a[k];
	       }
	       else if(ob[j][k]==1)
	       {
	           s+=b[k];
	       }
	       k++;
	       }
	       //cout<<j<<s<<endl;
	       if(s=="bob" || s=="bbo" || s=="obb")
	       {
	           cout<<"yes"<<endl;
	           flag=0;
	           break;
	       }
	       else
	       {
	           flag=1;
	       }
	   }
	   
	   if(flag==1)
	   cout<<"no"<<endl;
	}
}