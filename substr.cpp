/*求无重复字符串的最长子串
子串是连续的 pwwkew 最长子串是wke pwke是一个子序列
*/
#include<iostream>
#include<set>
#include<string>
#define Max(a,b) ((a)>(b)?(a):(b))
using namespace std;

bool AllUique(string s,int start,int end)
{
	set<char> Myset;
	
	for(int i=start;i<end;i++)
	{
		pair<set<char>::iterator,bool> Mypair = Myset.insert(s[i]);
	
		if(Mypair.second == false)
		{
			return false;
			
		}
	}
	
	return true;	
}
int lengthOfLongestSubstring(string s)
{
	int ans=0;
	for(int i=0;i<s.size()-1;i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			if(AllUique(s,i,j))
			{
				ans=Max(ans,j-i);
			}
		}
	}
	
	return ans;
			
}

int main()
{
	string s1("bbbbbb");
	int length1 = lengthOfLongestSubstring(s1);
	cout << length1 << endl;
	
	string s2("abcabcbb");
	int length2 = lengthOfLongestSubstring(s2);
	cout << length2 << endl;
	
	string s3("pwwkew");
	int length3 = lengthOfLongestSubstring(s3);
	cout << length3 << endl;
	
	return 0;

}