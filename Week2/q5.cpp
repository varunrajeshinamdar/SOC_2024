#include<bits/stdc++.h>
using namespace std;

int startindex(int stations[],int aj,int n){
    int minm = n;
    for(int i=0;i<n;i++) if(stations[i] == aj) minm = min(minm,i);      // mistake typed '='
    return minm;
}

int endindex(int stations[],int bj,int n){
    int maxm = -1;                                                      // so that wrong if doesnt exist, same for above MAKES A HUGE DIFFERENCE, MADE THE CODE WORK
    for(int i=0;i<n;i++) if(stations[i] == bj) maxm = max(maxm,i);
    return maxm;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int a=0;a<t;a++){
        int n,k; cin >> n >> k;

        int stations[n];
        for(int i=0;i<n;i++) cin >> stations[i];
        int aj[k],bj[k];
        for(int i=0;i<k;i++) cin >> aj[i] >> bj[i];

        for(int i=0;i<k;i++){
            if(startindex(stations,aj[i],n) <= endindex(stations,bj[i],n)) cout << "yes" << '\n';
            else cout << "no" << '\n';
        }
    }

    return 0;
}