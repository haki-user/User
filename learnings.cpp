/* tricks:
--> For counting character's frequency in low space:
   		string s;
   		vector<int> freq(26);
   		fn{ freq[s[i] - 'a']++}

--> We can compare two vectors directly, like pfreq = hfreq

--> wtf is this soln 2 https://codeforces.com/blog/entry/72330
 			auto chg = [&cntp, &cnt, &eq, &sum](int c, int val){
				sum -= eq[c];
				cnt[c] += val;
				eq[c] = (cntp[c] == cnt[c]);
				sum += eq[c];
			};

--> To convert char to int substract 48 ('0' = 48) from it.
--> We cannot use empty character constant ('') is c++ (like to print nothing) instead use ("")
--> We can sort array, keeping indexes same with pair:
 			pair<int,int> A[n];
			sort(A, A+n);

--> To invert boolean variable:
   		bool flag = true;
   		flag = !flag;
   		flag ^= true; //alt method

--> Extract decimal digit: 
  		floor num = 3.5;
  		int ld = (int)(num*10)%10; // ld = 5; (my way)
  		num - floor(num) // (stack overflow)

--> Can Convert string to variable name or variable type: using map or pair
  		m.insert({"string", varName});
  
--> Print symbols
 	 	\a  Bell (beep)
		\b  Backspace
		\f  Formfeed
		\n  Newline
		\r  Return
		\t  Tab
		\\  Backslash
		\'  Single quote
		\"  Double quote
		\xdd    Hexadecimal representation
		\ddd    Octal representation
		\?  Question mark ('?') 

--> Beware of precision errors when multiplying dividing with large numbers
    like 10^8 10^9 10^4*10^4 then,
    cout<<ceil(n/(float)2);		//this will give error (output in scientic form and precision erros when  dividing).
    cout<<(long long)ceil(n/(float)2);	// this will give precision error value may differ.
    cout<<(long long)ceil(n/(long double)2);	//this is correct way.

--> (n/x)*x == n-(n%x)
          
             *****Number theory*****
--> Digital sum :- value obtained by an iterative process of summing digits, 
    on each iteration using the result from the previous iteration till single digit remains.
    **this is equivalent to taking the remainder upon division by 9.
    --> problem: CF 1107B - Digital root,

/*