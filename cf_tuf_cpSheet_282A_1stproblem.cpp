// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n; cin>>n;
// 	int ans = 0;

// 	for(int i = 0; i<n; i++){
// 		string a; cin>>a;
// 		if(a == "X++" || a == "++X") ans++;
// 		else ans--;
// 	}
// 	cout<<ans<<endl;

// 	return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
// 	// unsigned long long n; cin>>n;
// 	// unsigned long long temp = 0;
// 	// unsigned long long multi = 1;
// 	// while(n){
// 	// 	int x = n%10;

// 	//  	if(x > 4 && n/10 > 0) temp += (9-x)*multi;
// 	//  	else temp += multi*x;

// 	//  	multi *= 10;	
// 	//  	n /= 10;
// 	// }
// 	// cout<<temp<<endl;

// 	// test case 5 is failing so another way to do this

// 	string s; cin>>s;

// 	for(auto &digit : s) if(digit > '4') digit = '9'-digit+'0';

// 	if(s.front() == '0') s.front() = '9';
//     cout<<s<<endl;

// 	return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
// 	int a;
// 	int i,j;
// 	for(i = 1; i<=5; i++){
// 		for(j = 1; j<=5; j++){
// 			cin>>a;
// 			if(a == 1) break;
// 		}
// 		if(a == 1) break;
// 	}
// 	a = 0;
// 	a += i>3?(i-3):(3-i);
// 	a += j>3?(j-3):(3-j);
// 	cout<<a<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
// 	int n,k,l,c,d,p,nl,np;
// 	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
// 	int ans; 
// 	ans = min(min((k*l)/nl, c*d), p/np);
// 	cout<<ans/n<<endl;
// }


// #include<iostream>
// #include<algorithm>

// using namespace std;

// void soln(){
    
// }

// int main(){
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t; cin>>t;
//     while(t--){
//         soln();
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// #include<string>
// #include<sstream>
// using namespace std;

// void soln(){
//     // int n; cin>>n;
//     // int multi = 10;
//     // int ct = 0;
//     vector<int> ans;
//     // cout<<ct<<" ";
//     // multi = 10;
//     // while(n){
//     //     // cout<<n%multi<<" ";
//     //     int x = n%multi; //iski jgah sirf int x = n%10; se ho jata
//     //     cout<<n<<" "<<multi<<" "<<x<<endl;
//     //     if(x != 0){
//     //     	ct++;
//     //     	ans.push_back(x*multi);
//     //     }
//     //     n/=10;
//     //     multi*=10;
        
//     // }
// //     for(int i = n; i>0 && n; i/=10){
// //     	int x = n%multi;
// //     	cout<<i<<" "<<n<<" "<<x<<" "<<multi<<endl;

// //     	// cout<<(ans.size()>0?ans[ans.size()-1]:-1)<<endl;
// //     	if(x != 0){
// //     		// n/=10;
// //     		ans.push_back(x*multi/10);
// //     	}
// //     	n/=10;
// //     	multi*=10;
// //     	    	for(auto e:ans) cout<<"ans "<<e<<" ";
// //     	    		cout<<endl;
// //     		cout<<"as"<<ans.size()<<endl;
// //     }
// 	// string s; cin>>s;
// 	string s; cin>>s;
// 	int ct = 0;
// 	int mult = 1;
// 	for (int i = 1; i < s.size(); ++i) mult*=10;
// 	for(auto e:s){
// 		if(e != '0'){
// 			ct++;
// 			ans.push_back((e-48)*mult);
// 		}
// 		mult/=10;

// 	}
// 	cout<<ct<<endl;
//     for(auto e:ans) cout<<e<<" ";
// }

// int main(){
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t; cin>>t;
//     while(t--){
//         soln();
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void soln(){
    string s; cin>>s;
    vector<int> ans;
    int ct(0), mult(1);
    for(int i = 0; i<s.size()-1; i++) mult*=10;
    
    for(auto e:s){
        if(e != '0'){
            ct++;
            ans.push_back((e-48)*mult);
        }
        mult/=10;
    }
    cout<<ct<<endl;
    for(auto e: ans) cout<<e<<" ";
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        soln();
        cout<<endl;
    }
    return 0;
}



// ********cf 510A fox and snake****
void soln(){
    int n,m; cin>>n>>m;
    bool right = true;
    for(int i = 1; i<=n; i++){
        if(i%2 != 0){
            for(int j = 1; j<=m; j++) cout<<"#";
        } else {
            if(right){
                for (int j = 1; j<m; ++j) cout<<".";
                cout<<"#";
                right = false;
            } else {
                cout<<"#";\
                for (int j = 1; j<m; ++j) cout<<".";
                right = true;
            }

        }
            if(i!=n) cout<<endl;
    }
}

// ********** cf775A ********
void soln(){
    int n; cin>>n;
    int ans = 0;
    for(int i = 0; i<n; i++){
        string a; cin>>a;
        if(a == "Tetrahedron") ans+=4;
        else if(a == "Cube") ans+=6;
        else if(a == "Octahedron") ans+=8;          else if(a == "Dodecahedron") ans+=12;
        else if(a == "Icosahedron") ans+=20;
    }
        cout<<ans;
}

// ********cf 144A arrival of general*********
void soln(){
    int n; cin>>n;
    int a[n]; fn cin>>a[i];
    int max = 0;
    int min = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(a[i]<=a[min]) min = i;
    }
    for (int i = min; i < n-1; ++i)
    {
            if(a[i]<a[i+1]){
            swap(a[i], a[i+1]);
            ans++;
        }

    }
    fn if(a[i]>a[max]) max = i;
    cout<<ans+max;
}

// *****cf 1030A in search of easy problem*****
void soln(){
    int n; cin>>n;
    bool flag = false;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        if(a == 1){
            flag = true;
            break;
        }
    }
    cout<<(flag?"HARD":"EASY")<<endl;
}

// *****ct 1010A nearly lucky number*****
void soln(){
    int n; cin>>n;
    int idx[n+1];

    for(int i = 1; i<=n; i++){
        int a; cin>>a;
        idx[a] = i;
    }
    for(int i = 1; i<=n; i++){
        cout<<idx[i]<<" ";
    }
}

// *****cf 116A tram*****
void soln(){
    int n; cin>>n;
    int maxcap = 0;
    int curr = 0;
    for(int i = 0; i<n; i++){
        int a,b; cin>>a>>b;
        curr-=a;
        curr+=b;
        maxcap = max(maxcap, curr);
    }
    cout<<maxcap<<endl;
}

// *****CF 977A wrong substraction*****
void soln(){
    int n; cin>>n;
    int k; cin>>k;
    for(int i = 0; i<k; i++){
        if(n%10 != 0) n--;
        else n/=10;
    }
    cout<<n<<endl;
}
//*****CF 546A soldier and bananas*****
void soln(){
    int k; cin>>k;
    long long n; cin>>n;
    int w; cin>>w;
    long long ans = k*(w*w+w)/2;
    cout<<(n>ans?0:ans-n)<<endl;
}
// *****CF 791A bear and big brother*****
void soln(){
    int a,b; cin>>a>>b;
    float ans = log((float)b/(float)a)/log(1.5);
    cout<<(int)ans+1<<endl;
}

// *****CF 236A boy or girl*****
void soln(){
    int freq[500]={};
    string s; cin>>s;
    int ct = 0;
    for(auto e:s) {
        freq[e]++;
        if(freq[e] == 1) ct++;edl;
        debug(freq[e]);
    }
    debug(ct);edl;
    if(ct%2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}

// *****CF 281A word capitalization*****
void soln(){
    string s; cin>>s;
    if(s[0] >= 'a') s[0]-=32;
    cout<<s;
}

// *****CF 339A helpful maths*****
void soln(){
    string s; cin>>s;
    if(s.size() == 1){
        cout<<s;
        return;
    }
    int o,t,th;
    o = t = th = 0;
    for(auto e:s){
        if(e == '1') o++;
        else if(e == '2') t++;
        else if(e == '3') th++;
    }
    vector<char> ans;
    int i = 0;
    while(o--){
        ans.push_back('1');
        if(t != 0 || th != 0) ans.push_back('+');
        else{
            if(o>0) ans.push_back('+');
        }
    }
    while(t--){
        ans.push_back('2');
        if(th != 0) ans.push_back('+');
        else if(t > 0) ans.push_back('+');
    }
    while(th--){
        ans.push_back('3');
        if(th>0) ans.push_back('+');
    }
    for(auto e:ans) cout<<e;
}

// *****CF 1368A C+= *****
void soln(){
    long long a,b,n; cin>>a>>b>>n;
    int i = 0;
    bool flag = false;
    while(a<=n && b<=n){
        if(a<b) a+=b;
        else b+=a;
        i++;
    }
    cout<<i;
}

// *****CF 702A max increase*****
void soln(){
    int n; cin>>n;
    long long a[n]; fn{ cin>>a[i]; }
    int maxs = 1; 
    int curr = 1;

    for(int i = 0; i<n-1; i++){
        if(a[i]<a[i+1]) curr++;
        else curr = 1;
        maxs = max(maxs, curr);
    }
    cout<<maxs<<endl;
}   

// *****CF 1097A gennady and a card game*****
void soln(){
    string s; cin>>s;
    string fv;
    int n = 5;
    bool flag = false;
    fn{
        cin>>fv;
        if(fv[0] == s[0] || fv[0] == s[1]){
            flag = true;
            break;
        } else if(fv[1]==s[0] || fv[1]==s[1]){
            flag = true;
            break;
        }
    }
    cout<<(flag?"YES":"NO")<<endl;
}

// *****CF 492A vanya and cubes*****
void soln(){
    int n; cin>>n;
    int sum = 0;
    int i = 1;
    while(sum<n){
        sum+=(((i*i)+i)/2);debug(sum);
        i++;
        
    }
    if(sum>n) cout<<i-2<<endl;
    else cout<<i-1<<endl;
}   

// *****CF 1433A - Boring Apartments*****
void soln(){
    int n; cin>>n;
    int ct = 0;
    int ans = 0;
    int temp = n%10;
    ans+= 10*(temp-1);
    while(n){
        // debug(n);
        ct++;
        ans+=ct;
        n/=10;
    }
    cout<<ans;
}

// *****CF 1303A Erasing Zeroes*****
   //  GOOOD QUESTION
void soln(){
    string s; cin>>s;
    int ans = 0;
    int currz = 0;
    bool flag = false;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1'){
            flag = true;
            ans+=currz;
            currz = 0;
        }
        if(flag && s[i] == '0') currz++;
        debug(ans);debug(currz);debug(flag);edl;
    }
    cout<<ans;
}

// *****CF 1095A - Repeating Cipher*****
void soln(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i = 1; i<s.size(); i++) s.erase(i, i);
    cout<<s;
}   

// *****CF 1391B - Fix You*****
//      GOOD QUESTION
void soln(){
    int n; cin>>n;
    int m; cin>>m;
    // debug(n);debug(m);
    int ans(0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            char c; cin>>c;
            if(j==m-1 && c=='R') ans++;
            else if(i==n-1 && c=='D') ans++;
        }
    }
    // edl;debug(r);edl;
    cout<<ans;
}   

// *****CF 118A - String Task*****
void soln(){
    string s; cin>>s;
    int i = 0;int ct=0;
    for(i = 0; i<s.size(); i++){
        if(s[i] < 'a') s[i] += 32;
    }
    i = 0;
    while(s.size() && i<s.size()){
        if(s[i] == 'a' || s[i]=='e' || s[i]=='y' || s[i]=='i' || s[i]=='o' || s[i]=='u') s.erase(i,1);
        else i++;
    }
    i = 0;
    while(i<s.size()){
        s.insert(i, 1, '.');
        i+=2;
    }
    cout<<s;
}   

// 
int n; cin>>n;
    n=2*n;
    long long a[n]; fn{cin>>a[i];}
    sort(a, a+n);
    cout<<(a[(n/2)]-a[(n/2)-1]);

// *****CF 139A Petr and Book*****
void soln(){
    int n; cin>>n;
    vector<int> v;
    for(int i = 0; i<7; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int j = 0;
    while(n>=0){
        n-=v[j];
        if(n>0) j++;
        if(j>6) j = 0;
    }
    cout<<j+1;
}

// *****CF 1430C - Numbers on Whiteboard*****
   // *****fine question*****
void soln(){
    int n; cin>>n;
    float avg = n;
    cout<<2<<endl;
    for(int i = n-1; i>0; i--){
        cout<<avg<<" "<<i;
        if(i!=1) cout<<endl;
        avg = (avg+i)/2;
        if(avg > (int)avg) avg++;
        avg = (int)avg;
        // alt: avg = (avg + i + 1)/2;
    }
}  

 // *****CF K-string*****
void soln(){
    int k; cin>>k;
    string s; cin>>s;
    int freq[500]={};
    for(int i = 0; i<s.size(); i++) freq[s[i]]++;
    for(int i = 0; i<s.size(); i++){
        if(freq[s[i]]%k != 0){
            cout<<-1;
            return;
        }
    }
    // *****alt for without freq array*****
    // 
    // sort(s.begin(),s.begin()+s.size());
    // for(int i=0;i<s.size();i++){
    //     if(i%k==0){
    //        ch=s[i]; 
    //     }
    //     if(s[i]==ch){
    //         count++;
    //     }
    // }

    sort(s.begin(), s.end());
    int n = k;
    while(n--){
        for(int i = 0; i<s.size(); i+=k){
            cout<<s[i];
        }
    }
}   

// *****CF 118B Present from Lena*****
// tags: pattern fine B
void soln(){
    int n; cin>>n;
    for(int i = 0; i<=n; i++){
        int spc = n-i;
        while(spc>0){
            cout<<"  ";
            spc--;
        }
        int num = 0;
        while(num<=i){
            cout<<num;
            if(i != 0) cout<<" ";
            num++;
        }
        num = i-1;
        while(num>=0){
            cout<<num;
            if(num!=0) cout<<" ";
            num--;
        }
        cout<<endl;
    }
    for(int i = n-1; i>=0; i--){
        int spc = n-i;
        while(spc>0){
            cout<<"  ";
            spc--;
        }
        int num = 0;
        while(num<=i){
            cout<<num;
            if(i != 0) cout<<" ";
            num++;
        }
        num = i-1;
        while(num>=0){
            cout<<num;
            if(num != 0) cout<<" ";
            num--;
        }
        cout<<endl;
    }   
}

// *****CF 1373A - Donut Shops*****
// tags: tricky good 
void soln(){
    ll a,b,c; cin>>a>>b>>c;
    double f = (float)c/(float)b;
    debug(f);
    debug(a);
    debug(c)edl;
    // if((double)a<f){//a sasta
    //  if(a > c) cout<<b-1<<" "<<b;
    //  else if(a < c) cout<<b-1<<" "<<-1;
    //  // else cout<<
    // }
    // else if((double)a > f){ //a mehga
    //      if(a == c){
    //          cout<<-1<<" "<<b;
    //      } else if(a < c) {
    //          cout<<1<<" "<<b;
    //      } else if(a > c) {
    //          cout<<-1<<" "<<b;
    //      }
    // } else {
    //  // a==f
    //  // cout<<-1<<" "<<-1;
    //  if(c > a) cout<<b-1<<" "<<-1;
    //  else if(c < a) cout<<-1<<" "<<2*b;
    //  else cout<<-1<<" "<<-1;
    // }

    // *****better approach after previous one*****
    if(a < c){
        cout<<1;
    } else {
        cout<<-1;
    }
    cout<<" ";
    if(a*b <= c){
        cout<<-1;
    } else {
        cout<<b;
    }
    
}   

// *****CF 268A

void soln(){
    int n;
    // cout<<((n+1)*(n-2) + n);
    // int ct = 0;
    // int i = 1;
    // int ans = 0;
    // while(ct < n){
    //  if(i == n-ct){
    //      i = 0;
    //      ct++;
    //  } else ans+=ct;
    //  ans++;
    //  i++;
    // }
    // cout<<ans;

    // improved version
    for(int j = 0; j<50; j++){
        n = j;
        int sum = 0;
        for(int i = 1; i<n; i++){
          sum+=(n-i)+((n-i)*i)-i;
        }
        int a1 = sum+n;
        cout<<sum+n<<" ";

        // my old soln
        int ct = 0;
        int i = 1;
        int ans = 0;
        while(ct < n){
            if(i == n-ct){
                i = 0;
                ct++;
            } else ans+=ct;
            ans++;
            i++;
        }
        int a2 = ans;
        cout<<ans<<" ";

        // other's solution chinese
        int s = n;
        ans = 0;
        for(int k=1;n>=1;k++)
        {
            ans+=k*(n-1);
            n--;
        }
        int a3 = ans+s;
        cout<<ans+s<<endl;
        if(a1 != a2 || a1 != a3 || a2 != a3) break;
    }
}   

// *****CF 476A - Dreamoon and Stairs*****
// tags: tricky logical good
void soln(){
    int n,m; cin>>n>>m;
    if(n<m){
        cout<<-1;
        return;
    }
    int t = n/2;
    if(n%2 != 0) t++;
    while(t%m != 0) t++;
    cout<<t;
}

// *****CF 500A - New Year Transportation*****
    // good logical first time me hi accepted
void soln(){
    int n,t; cin>>n>>t;
    int idx[n]={};
    idx[1] = 1;
    for(int i = 1; i<n; i++){
        int a; cin>>a;
        if(idx[i] > 0) idx[i+a]++;
    }
    cout<<(idx[t]>0?"YES":"NO");
}   
    // other's soln chinese
    int sum=a[0]+1;//下一步要到达的格子 
    for(int j=1;j<t;j++){
        if(sum==t){//先判断。。 
            flag=1;
            break;
        }
        if(sum>t) break;
        sum+=a[sum-1];
    }

