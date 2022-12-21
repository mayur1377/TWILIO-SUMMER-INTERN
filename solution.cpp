#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
vector<pair<vector<int> , string>>data;
while(t--)
{
    int s;
    int e;
    cin>>s;
    cin>>e;
    int temp;
    cin>>temp;
    string l;
    while(temp--)
    {
        string ok;
        cin>>ok;
        l+=ok;
        if(temp) l+=" ";
    }
    // cout<<l<<endl;
    vector<int>q;
    q.push_back(s);
    q.push_back(e);
    pair<vector<int> , string>tempi;
    tempi={{s , e} , l};
    data.push_back(tempi);
}

// for(auto i : data)
// {
//     cout<<i.first[0]<<" "<<i.first[1]<<" "<<i.second<<endl;
// }
// cout<<endl;
// cout<<endl;
// cout<<endl;
// cout<<endl;

vector<pair<vector<int> , string>>ans;
sort(data.begin() , data.end());
if(data.size()<=1)
{
ans=data;
for(int i=0 ; i<ans.size() ; i++)
{
    cout<<ans[i].first[0]<<" "<<ans[i].first[1]<<" "<<ans[i].second;
    if(i!=ans.size()-1) cout<<endl;
}
    exit(0);
}
ans.push_back(data[0]);
for(int i=1; i<data.size(); i++) {
if(ans.back().first[1]>=data[i].first[0]) 
{
    if(data[i].first[1]>=ans.back().first[1]) //last ka time is like less than whatever timdealing 
    {
        ans.back().first[1]=data[i].first[1]; //teime merge
        ans.back().second=ans.back().second+" "+data[i].second;
    }
}
else ans.push_back(data[i]); 
}
sort(ans.begin() ,ans.end());
for(int i=0 ; i<ans.size() ; i++)
{
    cout<<ans[i].first[0]<<" "<<ans[i].first[1]<<" "<<ans[i].second;
    if(i!=ans.size()-1) cout<<endl;
}
    return 0;
}
