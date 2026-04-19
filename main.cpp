// 1-mashq
#include <bits/stdc++.h>
using namespace std;

vector<int> ms(vector<int> a){
    if(a.size()<=1) return a;
    int m=a.size()/2;

    auto l=ms(vector<int>(a.begin(),a.begin()+m));
    auto r=ms(vector<int>(a.begin()+m,a.end()));

    vector<int> res;
    merge(l.begin(),l.end(),r.begin(),r.end(),back_inserter(res));
    return res;
}

int main(){
    vector<int> v={5,2,4};
    v=ms(v);
    for(int x:v) cout<<x<<" ";
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={1,2,3,4};
    int k=2;

    int sum=accumulate(v.begin(),v.begin()+k,0);
    int mx=sum;

    for(int i=k;i<v.size();i++){
        sum+=v[i]-v[i-k];
        mx=max(mx,sum);
    }

    cout<<mx;
}
