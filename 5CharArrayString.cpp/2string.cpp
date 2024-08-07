// // LEETCODE - 1047 Removal ALL ADJACENT DUPLICATES IN STRING
#include <iostream>
// #include <string>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    int index = 0;
    while (index < s.length())
    {
        // same
        // ans ka rightmost character and string s ka current character same
        if (ans.length() > 0 && ans[ans.length() - 1] == s[index]) //*imp condition - ans.length()>0
        {
            // pop
            ans.pop_back();
        }
        else
        {
            // push
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main()
{
    string s = "abbaca";
    cout << removeDuplicates(s) << endl;
    return 0;
}

// leetcode -1209. Remove All Adjacent Duplicates in String II

// Remove all occurence of a substring
#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
}

int main()
{
    string s = "abbaca";
    cout << removeOccurrences(s,) << endl;
    return 0;
}