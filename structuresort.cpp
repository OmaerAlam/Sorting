#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct info{
    double score;
    int age;
    string name;
};

bool cmp(info a, info b){
    if(a.score>b.score) return true;
    else if(a.score==b.score && a.age<b.age) return true;
    else if(a.score==b.score && a.age==b.age && a.name<b.name) return true;

    return false;
}

int main(){

    optimize();

    vector<info> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double score1;
        int age1;
        string name1;

        cin>>score1>>age1>>name1;

        info a;
        a.score = score1;
        a.age = age1;
        a.name = name1;

        v.push_back(a);
    }

    sort(v.begin(),v.end(), cmp);

    for(auto u:v) cout<<u.score<<" "<<u.age<<" "<<u.name<<endl;

return 0;
}
