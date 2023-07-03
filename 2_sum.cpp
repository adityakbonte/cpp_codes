#include <bits/stdc++.h>
using namespace std;

vector<int>Twosum(vector<int>v,int target){
    vector<int>temp;
    map<int,int>m;
    m[0]++;
    int size = v.size();
    for(int i=0;i<size;i++){
        if(m.find(target-v[i])!=m.end()){
            temp.push_back(m[target-v[i]]);
            temp.push_back(i);
        }
        m[v[i]]==i;
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    vector<int>v{2,7,11,15};
    int k = 9;
    vector<int>temp = Twosum(v,k);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}
