#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s1,s2;
  int a,b;
  cin>>s1;
  cin>>s2;
  a=s1.size();
  b=s2.size();
  cout<<a<<" "<<b<<endl;
  cout<<s1+s2<<endl;
  char ch1=s1[0];
  char ch2=s2[0];
  cout<<ch2;
  for(int i=1; i<a; i++)
  {
      cout<<s1[i];
  }
  cout<<" "<<ch1;
  for(int i=1; i<b; i++)
  {
      cout<<s2[i];
  }


    return 0;
}
