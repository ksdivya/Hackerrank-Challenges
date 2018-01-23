#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2){
    // Complete this function
    int a[26],b[26],i;
    for(i=0;i<26;i++)
    {
        a[i]=b[i]=0;
    }
    for(i=0;i<s1.length();i++)
    {
        a[(int)(s1[i]-'a')]++;
    }
    for(i=0;i<s2.length();i++)
    {
        b[(int)(s2[i]-'a')]++;
    }
    int c=0;
    for(i=0;i<26;i++)
    {
        c+=a[i]+b[i]-2*min(a[i],b[i]);
     }
    return c;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}
