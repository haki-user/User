#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<char, vector<vector<int>>> mp;
vector<vector<int>> A ={
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,1,0,1,0,0,0},
        {0,0,1,1,1,1,1,0,0},
        {0,1,0,0,0,0,0,1,0},
        {1,0,0,0,0,0,0,0,1}
    };
vector<vector<int>> D = {
        {1,1,1,1,1,1,0,0,0},
        {1,0,0,0,0,0,0,1,0},
        {1,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1,0},
        {1,1,1,1,1,1,0,0,0}
    };
vector<vector<int>> I = {
        {1,1,1,1,1,1,1,1,1},
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0},
        {1,1,1,1,1,1,1,1,1}
    };
vector<vector<int>> T = {
        {1,1,1,1,1,1,1,1,1},
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0}
    };
vector<vector<int>> Y = {
        {0,1,0,0,0,0,0,0,1},
        {0,0,0,1,0,0,1,0,0},
        {0,0,0,0,1,0,0,0,0},
        {0,0,1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0}
    };
vector<vector<int>> P = {
        {1,1,1,1,1,1,1,1,0},
        {1,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,0},
        {1,0,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0}
    };

void print(string s){
    for(int i = 0; i<5; i++){
        for(auto e:s){
            vector<vector<int>> ch = mp[e];
            for(int j = 0; j<9; j++){
                int val = ch[i][j];
                if(val == 0) cout<<" ";
                else if(val == 1) cout<<"o";
                else if(val == -1) cout<<"   ";
                else cout<<'^';
            }
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    string adi = "ADITYAP";
    
    mp.insert({'A',A});
    mp.insert({'D',D});
    mp.insert({'I',I});
    mp.insert({'T',T});
    mp.insert({'Y',Y});
    mp.insert({'P',P});
    
    print(adi);
    
    
    return 0;
}