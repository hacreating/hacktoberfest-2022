#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> ak,pair<int,int> b)
{
    double value1=(double) ak.first/ak.second;
    double value2=(double) b.first/b.second;

    return value1>value2;

}

int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;

    vector< pair<int,int> > a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    for(int i=0;i<n;i++)
    {
        sort(a.begin(),a.end(),compare);
    }

    int w;
    cout<<"enter the weight of the knapsack"<<endl;
    cin>>w;
    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(w>=a[i].second)
        {
            ans=ans+a[i].first;
            w=w-a[i].second;
            continue;
        }

        double r=(double) a[i].first/a[i].second;
        ans=ans+(r*w);
        w=0;
        break;
    }

    cout<<"the profit is "<<endl;
    cout<<ans<<endl;

}
