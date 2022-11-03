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

// *****CF 131A cAPS lOCK*****
    // bruteforce soln
void soln(){
    string s; cin>>s;
    // cout<<(int)'l';
    bool all = true;
    bool cap = false;
    if(s[1] < 'a') cap = true;
    for(int i = 2; i<s.size(); i++){
        if(cap){
            if(s[i] >= 'a'){
                all = false;
                cout<<s;
                return;
            }
        } else {
            if(s[i] < 'a'){
                all = false;
                cout<<s;
                return;
            }
        }
    }
    if(s[0]>='a' && s[1]<'a'){
        s[0]-=32;
        for(int i = 1; i<s.size(); i++){
            s[i]+=32;
        }
    } else if(s[0]<'a' && s[1]<'a'){
        for(int i = 0; i<s.size(); i++){
            s[i]+=32;
        }
    } else {
        cout<<s;
        return;
    }
    cout<<s;
    return;
}

 // *****CF 1139B - Chocolates*****
// tags: good greedy tricky (not well defined question)
void soln(){
    ll n; cin>>n;
    ll a[n]; fn{cin>>a[i];}

    ll pmin = a[n-1];
    ll max = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        pmin = min(pmin-1, a[i]);
        if(pmin < 0) break;
        max+=pmin;
        // if(max<a[i]) max = a[i]; //*****for max increasing(not actually but satisfying this que's conditions) subarray sum
    }
    cout<<max;
}

// *****CF 1199A - City Day*****
// tags: constraints are not well defined took 1 day to solve
bool findy(ll a[], ll n, ll i, ll y){
    ll pvt = a[i];
    ll tmp = i;
    for(int j = i+1; j<n && y>0; j++){
        if(pvt > a[j]) return false;
        y--;
    }
    cout<<tmp+1;
    return true;
}
void soln(){
    ll n,x,y; cin>>n>>x>>y;
    ll a[n]; fn{cin>>a[i];}

    for(int i = 0; i<n; i++){
        bool flag = true;
        ll pvt = a[i];
        for(int j = i-1; j>=0 && x>0; j--){
            if(pvt > a[j]){
                flag = false;
                break;
            }
            x--;
        }
        if(flag){
            if(findy(a, n, i, y)) return;
        }
    }
}

// *****CF 1073A - Diverse Substring*****
// tags: easy good-approach-in-editorial
    // Notice that he string of two distinct letter is already diverse. 
    // That implies that the answer is "NO" if and only if all the letters in the string are the same. 
    // Otherwise you can check all pairs of adjacent letters in O(n).
void soln(){
    int n; cin>>n;
    string s; cin>>s;
    // vector<char> ans;
    char temp = s[0];
    // ans.push_back(s[0]);
    
    for(int i = 0; i<n; i++){
        if(temp != s[i]){
            cout<<"YES"<<endl;
            cout<<temp<<s[i]<<endl;
            return ;
        } else {
            temp = s[i];
        }
    }
    cout<<"NO"<<endl;
    return;
}

// *****CF 109A - Lucky Sum of Digits****
// tags logical realisation took 1day brute force; Div1 A; Div2C
void soln(){
    int n; cin>>n;
    int f = 0;
    int s = n/7;
    n %= 7;
    if(n>0){
        while(n > 0 && s>=0){
            if(n%4 > 0){
                s--;
                f++;
                n+=3;
            } else {
                f += n/4;
                n%=4;
            }
            debug(n);debug(s);debug(f);edl;
        }
    }
    if(s<0){
        cout<<-1<<endl;
        return;
    }
    for(int i = 0; i < f; ++i) cout<<4;
    for(int i = 0; i < s; ++i) cout<<7;
}
// other's good aproach
while(n>=0)
{
    if(n%7==0)
    {
        bsev=n/7;
        n=0;
        break;
    }
    bfr++;
    n=n-4;
}

// *****CF 1244B - Rooms and Staircases*****
// 1st time me ho gya good logical
void soln(){
    int n; cin>>n;
    string s; cin>>s;
    if(s[0] == 1 || s[n-1] == 1){
        cout<<2*n<<endl;
        return;
    }
    int fari = -1;
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            if(i<n/2) fari = max(fari, n-i);
            else fari = max(fari, i+1);
        }
    }
    cout<<(fari>0?2*fari:n);
}


// *****CF 1027A - Palindromic Twist*****
// easy string 15ms 1sttry
void soln(){
    int n; cin>>n;
    string s; cin>>s;

    for(int i = 0; i<n; i++){
        if(s[i] == s[n-1-i]) continue;
        else if(abs(s[i]-s[n-i-1]) != 2){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}

// *****CF 1278A - Shuffle Hashing*****
// easy 1sttry realisation brute force
  // editorial: can sort h but i think that won't work
void soln(){
    string p,h; cin>>p>>h;
    int n = p.size();
    if(n>h.size()){
        cout<<"NO";
        return;
    }
    int pfreq[300]={};

    fn{ pfreq[p[i]]++; }

    for(int j = 0; j<=(h.size()-n); j++){
        int hfreq[300]={};
        for(int i = 0; i<n; i++) hfreq[h[i+j]]++;
            
        int flag = true;
        fn{
            if(pfreq[h[i+j]] != hfreq[h[i+j]]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

// *****CF 1133A - Middle of the Contest*****
// tags: strings implementation good time 1stattempaccepted
// editorial: The second part is to obtain t1=h1⋅60+m1 and t2=h2⋅60+m2. Then let t3=t1+t22. It is the answer.
//  We have to print h3=⌊t360⌋ and m3=t3%60, where ⌊ab⌋ is a divided by b rounding down and a%b is a modulo b.
void soln(){
    string a, b; cin>>a>>b;
    int h1 = 10*(a[0]-48);
    h1 += a[1]-48;
    int m1 = 10*(a[3]-48);
    m1 += a[4]-48;

    int h2 = 10*(b[0]-48);
    h2 += b[1]-48;
    int m2 = 10*(b[3]-48);
    m2 += b[4]-48;
    

    int dm = (m2-m1)/2;
    int dh;
    if((h2-h1)%2 == 0){
        dh = (h2-h1)/2;
    } else {
        dh = (h2-h1)/2;
        dm+=30;
    }

    if(dm >= 60){
        dh++;
        dm-=60;
    }
    if(dm>=0){
        h1+=dh;
        m1+=dm;
        if(m1 >= 60){
            h1++;
            m1-=60;
        }
        cout<<((h1<10)?"0":"")<<h1<<":"<<((m1<10)?("0"):"")<<m1;
    } else {
        h2+=dh;
        m2+=dm;
        if(m2 >= 60){
            h2++;
            m2-=60;
        }
        cout<<((h2<10)?"0":"")<<h2<<":"<<((m2<10)?"0":"")<<m2;
    }
}


// *****CF 507A - Amr and Music*****
// tags: sorting greedy implementation 1sttry
void soln(){
    int n,k; cin>>n>>k;
    vector<int> a(n, 0); fn{cin>>a[i];}
    vector<int> min;
    int idx;

    for(int i = 0; i<n && k>0; i++){
        bool flag = true;
        for(int j = 0; j<n && k>0; j++){
            if(a[j] == -1) continue;
            if(flag){
                idx = j;//idx ko 1st time inititalize karne ke liiye if(j==0) won't work
                flag = false;
            }
            if(a[idx] > a[j]) idx = j;
        }
        k-=a[idx];
        if(k < 0) break;
        min.push_back(idx);
        a[idx] = -1;
    }
    cout<<min.size()<<endl;
    for(auto e:min) if(e != -1) cout<<e+1<<" ";
}
// editorial good implementation with pair and vectors sorting
pair<int,int> A[105];
vector<int> ans;
 
int main()
{
    int n,days;
    cin >> n >> days;
    for(int i=0;i<n;i++)
        scanf("%d",&A[i].first),A[i].second = i;
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        if(days < A[i].first)
            break;
        ans.push_back(A[i].second + 1);
        days-=A[i].first;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++)
    {
        if(i) printf(" ");
        printf("%d",ans[i]);
    }
    return 0;
}


// *****CF 1237A - Balanced Rating Changes*****
// easy logical realisation implementation greedy float decimal digit extraction
// editorial: Let bi=ai2+δi. It follows that if ai is even, then δi=0, and if ai is odd, then either δi=12 or δi=−12.
// later improved it from abouve:
void soln(){
    int n; cin>>n;
    vector<int> a(n); fn{cin>>a[i];}
    float num;
    bool flag = 1;
    fn{
        num = a[i]/(float)2;
        float ld = (int)(num*10)%10;

        if(ld == 5 || ld == -5){
            if(flag) a[i] = ceil(num);
            else a[i] = floor(num);
            flag ^= true;
        }
        else if(ld > 5) a[i] = ceil(num);
        else a[i] = floor(num);
    }
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
}
// editorial: good intuition based soln, indeed better version
// At the same time, the sum of bi is equal to the sum of δi, as the sum of ai is 0. Thus, as the sum of bi must be equal to 0, we need to have an equal number of δi equal to 12 and −12.
// In simple words, we have to divide all numbers by 2, and out of all non-integers, exactly half of them must be rounded up and the other half must be rounded down.
// soln by tourist:
  int flag = 1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x / 2 << '\n';
    } else {
      cout << (x + flag) / 2 << '\n';
      flag *= -1;
    }
  }


//*****CF 486B - OR in Matrix*****
 //tags: good took 1 day solved by kinda bruteforce 
int m,n;
int a[100][100];
bool check(int r, int c){
    bool ck = false;
    for(int i = 0; i<n; i++){
        if(a[r][i] != 1){
            ck = true;
            break;
        }
    }
    if(!ck) return true;
    for(int i = 0; i<m; i++){
        if(a[i][c] != 1) return false;
    }
    return true;
}
void soln(){
    
    cin>>m>>n;
    bool allz = true;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>a[i][j];
            if(a[i][j] == 1) allz = false;
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(a[i][j] == 1){
                if(!check(i, j)){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    vector<int> row;
    vector<int> col;
    int prevj = 0;
    int ct = 0;
    for (int i = 0; i < m; ++i)
    {
        bool flag = true;
        for(int j = 0; j<n; j++){
            // if(flag && a[i][j]==1) prevj=j;
            if(a[i][j]==1)ct++;
            if(a[i][j] != 1){
                flag = false;
                
            }
        }
        // if(a[i][prev])
        if(flag) row.push_back(i);
    }
    if(row.size() == 0 && !allz){
        cout<<"NO";
        return;
    }
    for(int i = 0; i<n; i++){
        bool flag = true;
        for(int j = 0; j<m; j++){
            if(a[j][i] != 1){
                flag = false;
                break;
            }
        }
        if(flag) col.push_back(i);
    }
    if(col.size() == 0 && !allz){
        cout<<"NO";
        return;
    }
    cout<<"YES"<<endl;
    int ans[m][n]={};
    debug(row);debug(col);edl;
    for(int i = 0; i<row.size(); i++){
        for(int j = 0; j<col.size(); j++){
            ans[row[i]][col[j]] = 1;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}