#include<iostream>
#include<cstring>
#include <stack>
#define ll long long
#define endl '\n'
using namespace std;
bool valid(char c1,char c2)
{
     if(c1=='(' and c2==')')
     	 return true;
     if(c1=='{' and c2=='}')
     	 return true;
     if(c1=='[' and c2==']')
     	 return true;
    return false;
 

}
int matchBracket(string s)
{
	// stack(a STL in c++)
   stack<char>st;
   int i=0;
   for(i=0;s[i]!='\0';i++)
   {
     if(s[i]=='(' or s[i]=='{' or s[i]=='[')
     {
         st.push(s[i]);
     }
    if(s[i]==')' or s[i]=='}' or s[i]==']')
     	  {  
     	  	if(st.empty() or !valid(st.top(),s[i]))
     	  		 return 0;
     	    else
     	    	{
     	    		st.pop();
     	    	}
     	  }
   }
// checking for st is empty or not
return st.empty();
}
int main(int argc, char const *argv[])
{
	// Number of test cases
	int t;
	cin>>t;
	while(t--)
	{
	  // expression as a string
      string s;
      cin>>s;
      if(matchBracket(s))
      	  cout<<"YES"<<endl;
      else
      	  cout<<"NO"<<endl;
	}
	return 0;
}
