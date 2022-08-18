

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1,4,3,65,7,4,23,63,345};
    int a=7;
    bool ls=true;
    int n=v.size();
    for(int i=0;i<n;i++){
    if(v[i]==a)
{        ls=false;
        cout<<"Found "<<a<<endl;
        break;
    }
    }
    if(ls)
    cout<<"Not Found"<<endl;
}
