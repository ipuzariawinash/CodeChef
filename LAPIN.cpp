#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
                        //frequency array concept
int t;
cin >> t;
while (t--)
{
    string s;
    cin >> s;

    int left[26] = {0};
    int right[26] = {0};

    int len = s.size();

    for (int i = 0; i < len/2; i++)
    {
        int index = s[i] - 'a';
        left[index]++;
    }

    for (int i = (len+1)/2; i < len; i++)
    {
        int index = s[i] - 'a';
        right[index]++;
    }

    int flag = 0;
    
    for (int i = 0; i <26; i++)
    {
        if(left[i]!=right[i]){
            flag = 1;
        }

    }
    if(flag==0){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
    }
}

return 0;
}