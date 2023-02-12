#include <bits/stdc++.h>
using namespace std;
string add(string s1, string s2)
{
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    string sum = "";
    int n = s1.length(), m = s2.length();
    if (n < m)
    {
        for (int i = n; i < m; i++)
        {
            s1 = "0" + s1;
        }
    }
    else
    {
        for (int i = m; i < n; i++)
        {
            s2 = "0" + s2;
        }
    }
    int tmp = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int s = (s1[i] - '0') + (s2[i] - '0') + tmp;
        sum += to_string(s % 10);
        tmp = s / 10;
    }
    if(tmp) sum += to_string(tmp);
    reverse(sum.begin(), sum.end());
    return sum;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == '6') s1[i] = '5';
    }
     for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == '6') s2[i] = '5';
    }
    cout << add(s1, s2) << " ";
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == '5') s1[i] = '6';
    }
     for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == '5') s2[i] = '6';
    }
    cout << add(s1, s2);
    return 0;
}
