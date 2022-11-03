// 1. *****CF 1337A - Ichihime and Triangle*****
void soln(){
	int a,b,c,d; cin>>a>>b>>c>>d;
	cout<<b<<" "<<c<<" "<<c;
}

// 2. *****CF 1389A - LCM Problem*****
void soln(){
	long long l,r; cin>>l>>r;
        if(r < 2*l){
            cout<<-1<<" "<<-1<<endl;
            return;
        }
        cout<<l<<" "<<2*l<<endl;
}

// 3. *****CF 959A - Mahmoud and Ehab and the even-odd game*****
 //tags: easy tricky realization 800
 void soln(){
	long long n; cin>>n;
	cout<<((n%2==0)?"Mahmoud":"Ehab");
}

// 4. *****CF 1426A - Floor Number*****
 // tags: realisation
 // editorial ?: If n≤2 then the answer is 1. Otherwise, you can "remove" the first floor and then the answer is ⌊n−3x⌋+2.
void soln(){
	int n, x; cin>>n>>x;
	if(n == 1){
		cout<<1;
		return;
	}
	n-=2;
	cout<<((n%x==0)?n/x+1:n/x+2);
}

// 5. *****CF 1296A - Array with Odd Sum*****
 // tags: easy realisation 
 // maybe better than editorial
void soln(){
	int n; cin>>n;
	int a[n];
	int odd = 0; //even or odd does'nt matter, no it matters
	for(int i = 0; i<n; i++){
		cin>>a[i];
		if(a[i]%2 != 0) odd++;
	}
	if(odd == 0 || (odd==n && odd%2==0)) cout<<"NO";
	else cout<<"YES";
}

// 6. *****CF 1385A - Three Pairwise Maximums*****
// had to check all cases
void soln(){
	int n = 3;
 	int a,b,c;
	int x[3]; fn{cin>>x[i];}
	sort(x, x+3);
	if(x[0] == x[1] && x[1] == x[2]){
		a = b = c = x[0];
	}
	else if(x[1] == x[2]){
		a = x[2]
		b = 1;
		c = x[0];
	} else {
		cout<<"NO";
		return;
	}
	cout<<"YES"<<endl;
	cout<<a<<" "<<b<<" "<<c;
}

// 7. *****CF 1358A - Park Lighting*****
  // lilbit greedy
  // edit: Note that if at least one of the sides is even, the square can be divided into pairs of neighbors and the answer is nm2.
  //got that above aproach by myself
  // If both sides are odd, we can first light up a (n−1)×m part of the park. Then we'll still have the part m×1. We can light it up with m+12 lanterns. Then the total number of the lanterns is (n−1)⋅m2+m+12=nm−m+m+12=nm+12.
  // Note that both cases can be combined into one formula: ⌊nm+12⌋.
void soln(){
	long long n,m; cin>>n>>m;
	cout<<((long long)ceil((n*m/(float)2))); // one liner also working instead of below code
	// if(n%2!=0 && m%2==0){
	// 	cout<<(m/2)*n;
	// } else if(n%2==0 && m%2!=0){
	// 	cout<<(n/2)*m;
	// } else cout<<((long long)ceil((n*m/(float)2)));
}

// 8. *****CF 	1294A - Collecting Coins*****
  // same as editorial except single intuition:  the answer if "YES" if the number n−(2c−b−a) is divisible by 3.
  // This is true because after making a,b and c equal we need to distribute all remaining candies between three sisters.
void soln(){
	long long a[3],n = 3; fn{cin>>a[i];}
	cin>>n;
	sort(a, a+3);
	long long diff = a[2]*2-a[0]-a[1];
	if(diff > n || (n-diff)%3 != 0) cout<<"NO"; 
	else cout<<"YES";
}

// 9. *****CF 1353A - Most Unstable Array*****
  //easy greedy
  // editorial: So the answer can be represented as min(2,n−1)⋅m.
void soln(){
	int n,m; cin>>n>>m;
	if(n == 1) cout<<0;
	else if(n == 2) cout<<m;
	else cout<<2*m;
}

// 10. *****CF 1371A - Magical Sticks*****
  // got same as editorial
void soln(){
	long long n; cin>>n;
	cout<<(long long)ceil(n/(long double)2);
}

// 11. *****CF 1360A - Minimal Square*****
  //greedy
  //edit: Thus, the minimum side of the square is equal to the minimum of these two options.
  //Then the answer is (min(max(2b,a),max(2a,b)))2.
void soln(){
	int a,b; cin>>a>>b;
	if(a < b) swap(a, b); // for a > b
	if(a>=b && 2*b>=a) cout<<4*b*b;
	else cout<<a*a;
}

// 12. *****CF 1367B - Even Array*****
 //edit: different, intuitive approach:- 
  // We split all the positions in which the parity of the index does not match with the parity of the element into two arrays. 
  // If there is an odd number in the even index, add this index to the e array. Otherwise, if there is an even number in the odd index, add this index to the o array.
  // Note that if the sizes of the o and e arrays are not equal, then there is no answer. 
  // Otherwise, the array a can be made good by doing exactly |o| operations by simply swapping all the elements in the o and e arrays.
void soln(){
	int n; cin>>n;
	int a[n];
	int ct = 0; 
	int even = 0;
	fn{
		cin>>a[i];
		if(a[i]%2 != i%2) ct++;
		if(a[i]%2 == 0) even++;
	}
	if(ct == 0) cout<<0;
	else if(even==0 || even==n) cout<<-1;
	// else if(n%2==0 && even==n/2) cout<<ct/2; //working without this
	else if(n%2!=0 && even==n/2+1) cout<<ct/2;
	else cout<<-1;
}

// 13. *****CF 1374A - Required Remainder*****
  // tags: intuitive GSAE (got same as editorial)
void soln(){
	long long x,y,n; cin>>x>>y>>n;
	long long ans = n-(n%x); 
	cout<<((ans+y)>n?ans-x+y:ans+y);
}

// 14. *****CF 1343B - Balanced Array*****
	// took some time but done it by myself
	// editorial: why i didn't think of this: 
	// like i have calcuated sum of even(from 2) is n^2-n/2 odd(from 1) n^2. 
	// and odd+even==odd,
	// array [2,4,6,…,n,1,3,5,…,n−1]. 
	// This array is almost good except one thing: 
	// the sum in the right half is exactly n2 less than the sum in the left half. 
	// So we can fix it easily: just add n2 to the last element.
void soln(){
	int n; cin>>n;
	if(n%4!=0){
		cout<<"NO"; // because sum of odd no of odd nos is odd and sum of even nos is always 0.
		return;
	}
	cout<<"YES"<<endl;
	int avg = n/2+2;
	int two = 2;       //the idea is that if a is grater than 0,
	for(int i = 0; i<n/2; i++){//then n+2 can be avg of both n/2 even and odd nos, and if avg is same then sum is also equal,
		cout<<two<<" ";       //and we can produce n/2 even and n/2 odd nos with same avg easily
		two+=2;
		if(avg == two) two+=2;
	}
	int three = 3;
	for(int i = 0; i<n/2; i++){
		cout<<three<<" ";
		three+=2;
	}
}
// editorial i think it's better
while (t--) {
	int n;
	cin >> n;
	n /= 2;
	if (n & 1) {
		cout << "NO" << endl;
		continue;
	}
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << i * 2 << " ";
	}
	for (int i = 1; i < n; ++i) {
		cout << i * 2 - 1 << " ";
	}
	cout << 3 * n - 1 << endl;
}

// 15. *****CF 732A - Buy a Shovel*****
  // brute force 
void soln(){
	int k,r; cin>>k>>r;
	if(k%10 == 0 || k==r || (k-r)%10==0) cout<<1;
	else {
		for (int i = 2; i<=10; ++i)
		{
			int mod = k*i;
			if(mod%10==0 || ((mod)-r)%10==0) {
				cout<<i;
				break;
			}
		}
	}	
}

// 16. *****CF 1154A - Restoring Three Numbers*****
void soln(){
	int n = 4;
	long long a[4]; fn{cin>>a[i];}
	sort(a, a+4);
	a[3]-=a[2];
	a[1]-=a[3];
	a[0]-=a[3];
	cout<<a[3]<<" "<<a[0]<<" "<<a[1];
}

// 17. *****CF 1409A - Yet Another Two Integers Problem*****
void soln(){
	long long a,b; cin>>a>>b;
	long long absd = abs(a-b);
	int ct = 0;
	for(int i = 10; i>0 && absd>0; i--){
		ct += absd/i;
		absd%=i;
	}
	cout<<ct;
}

// 18. *****CF 1335A - Candies and Two Sisters*****
  // one liner
void soln(){
	ll n; cin>>n;
	cout<<((ll)ceil((n/(long double)2)-1));
}

// 19. *****CF 1328A - Divisibility Problem*****
  // one liner; let c = x+y (c)%x = y, to make c%x==0 then add x-y to c.
void soln(){
	ll a,b; cin>>a>>b;
	cout<<((a%b==0)?0:(b-(a%b)));
}

// 20. *****CF 617A - Elephant*****
  // tags: intuitive, easy,s kinda greedy, similar to 17th soln but it's not required because after %5 it'll be <5 so directly increase by 1.
  // edit: missed this; It's optimal to do the biggest possible step everytime. 
  // So elephant should do several steps by distance 5 and one or zero step by smaller distance. Answer equals to ceil(x/5). 
void soln(){
	int n; cin>>n;
	int ct = 0;
	for(int i = 5; i>0; i--){
		ct += n/i;
		n%=i;
	}
	cout<<ct;
}

// 21. *****CF 50A - Domino piling*****
  // just guessed it
  // solved this type of prob. before, intuition on editorial; even*even=even, even*odd=even, odd*odd=odd;
soln(){
	int m,n; cin>>m>>n;
	cout<<m*n/2;
}

// 22. *****CF 	B - Emotes*****
  // GSAE got the approach but errors in implementation
  // greedy tricky
void soln(){
	long long n,m,k; cin>>n>>m>>k;
	long long a[n]; 
	fn{cin>>a[i];}
	sort(a, a+n);

	long long maxboth = (m/(k+1)); //3 3 3 1 3 3 3 1 3
	// how many time 3 3 3 1(later saw in edit, it is called cycle) can occur.
	long long maxk = k*maxboth + (m%(k+1)); // remaining all fill with max, because it'll be less than k.
	cout<<(a[n-1]*maxk + a[n-2]*maxboth);
}

// 23. *****CF 1195A - Drinks Choosing*****
  // took long, tricky, greedy, bad language, errors in implementation got tle but final 15ms, but finally done it by myself.
  // edit is lilbitbetter, first take 2 students fav sets then take single studs fav set i.e. just add remaining cs. what i was doing is taking 2s i was also looping and counting 1 till cs=0(ie cs times 1).
void soln(){
	int n,k; cin>>n>>k;
	int a[n]; fn{cin>>a[i];}
	int freq[1005]={}; fn{freq[a[i]]++;}
	int cs = ceil(n/(float)2);//choose sets
	sort(freq, freq+1005);
	int ans = 0;
	// for(int j = 0; j<2; j++){
		int i = 1004;
		while(i>(1004-n) && cs>0){
			// if(j==0){
				if(freq[i]<2) break;
				int tmp = freq[i]%2;
				ans += freq[i]-tmp;
				cs -= ceil((freq[i]-tmp)/(float)2);
				// freq[i] = tmp;
				i--;
			// } else {
			// 	freq[i]--; // optimised after editorial
			// 	ans++;
			// 	cs--;
			// 	i--;
			// }
		}
	// }
	cout<<ans;
}

// 24. *****CF 1181A - Chunga-Changa*****
  // tags: easy tricky greedy
  // edit: So the answer is ⟨k,min(z−(xmodz),z−(ymodz))⟩.
void soln(){
	ll x,y,z; cin>>x>>y>>z;
	ll coco = (x+y)/z;
	cout<<coco<<" ";
	ll mx = x%z;
	ll my = y%z;
	if(mx+my < z) cout<<0;
	else if((mx+my)%z != 0) cout<<(z-max(mx, my));
	else cout<<min(mx,my);
}

// 25. *****CF 1266B - Dice Tower*****
  //tags: greedy, tricky, realisation
  //edit: is lil diff.
void soln(){
	ll x; cin>>x;
	if(x<15){
		cout<<"NO";
		return;
	}	
	x%=14;
	if(x>0 && x<15) x+=14;
	if(x>=15&&x<=20 || (x+14)>=15&&(x+14)<=20) cout<<"YES";
	else cout<<"NO";
}

// 26. *****CF 1107B - Digital root*****
  // tags: number theory, was unable to get the approach, done it after getting hint from wiki(after reading about digital root).
   //edit:The key observation is that the digital root of an integer k is the single-digit number 1 ≤ d ≤ 9 such that . 
   // You can prove this by noticing that  for all p. Once we observe this, finding the k-th number is very simple
void soln(){
	ll k,x; cin>>k>>x;
	cout<<(x+9*(k-1));
}

// 27. *****CF 1260A - Heating*****
  // tags: was unable to solve this after wasting day; had to see the soln; i got the idea but was unable to distribute after getting remainder.
  // highly greedy, tricky, implemetation errors, kinda hard because yk i'vent solved this.
  //edit: it's to take (sum%c) elements with value ⌊sum/c⌋+1 and c−(sum%c) elements with ⌊sum/c⌋.
void soln(){
    ll c,sum; cin>>c>>sum;
	ll perc = sum/c; 
	ll mod = sum%c; //if c>sum then perc will automatically be zero
	
    cout<<(c-mod)*perc*perc + mod*(perc+1)*(perc+1)<<endl;
// the key idea is to distribute mod in c place.(plz don't see test cases befor solving.)    
}

// 28.


// 30. *****CF 610A - Pasha and Stick*****
  // tags: combinatorics; done by h&t, 
  // edit: If the given n is odd the answer is 0, because the perimeter of any rectangle is always even number.
  // If n is even the number of rectangles which can be construct equals to n / 4. 
  //*** If n is divisible by 4 we will count the square, which are deprecated,
  // because we need to subtract 1 from the answer.
void soln(){
	int n; cin>>n;
	if(n < 6 || n%2!=0) cout<<0;//edit is better than this
	else cout<<(ll)ceil(n/(float)4)-1;
}

// 31. *****CF 69A - Young Physicist*****
  // tags: easy, implementation
  void soln(){
	int n; cin>>n;
	int x, y, z; 
	int a[3]={};
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y>>z;
		a[0]+=x;
		a[1]+=y;
		a[2]+=z;
	}
	if(a[0]!=0 || a[1]!=0 || a[2]!=0) cout<<"NO";
	else cout<<"YES";
}