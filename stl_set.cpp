#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<long long> s;
    int q;
    cin>>q;
    while(q--){
        cout<<q<<"q "<<endl;
       
        int y;
        long long x;
        cin>>y>>x;
         cout<<x<<"x "<<y<<"y "<<endl;
        switch(y){
            case 1: s.insert(x);
            break;
            case 2: if(s.find(x) != s.end()) s.erase(x);
            break;
            case 3:  if(s.find(x) != s.end()) cout<<"yes";
            break;
        }
                cout<<"\n";
        for(auto i = s.begin(); i != s.end(); i++){
            cout<<(*i)<<"s ";
        }

    } 
    return 0;
}



