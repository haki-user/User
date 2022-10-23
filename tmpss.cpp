#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = {"Aditya Pratap Singh Lorem, ipsum dolor sit amet consectetur adipisicing elit. Ratione beatae natus dolorem"};
	// s.push_back();
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]!=' ') cout<<"<span id = 'a"<<i<<"'>"<<s[i]<<"</span>";
		else cout<<"<span id = 'a"<<i<<"'>"<<"&nbsp"<<"</span>";
	}
	return 0;
}

The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog
The quick brown fox jumps over the lazy dog