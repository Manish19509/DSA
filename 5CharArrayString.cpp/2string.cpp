// // LEETCODE - 1047 Removal ALL ADJACENT DUPLICATES IN STRING
// #include <iostream>
// // #include <string>
// using namespace std;

// string removeDuplicates(string s)
// {
//     string ans = "";
//     int index = 0;
//     while (index < s.length())
//     {
//         // same
//         // ans ka rightmost character and string s ka current character same
//         if (ans.length() > 0 && ans[ans.length() - 1] == s[index]) //*imp condition - ans.length()>0
//         {
//             // pop
//             ans.pop_back();
//         }
//         else
//         {
//             // push
//             ans.push_back(s[index]);
//         }
//         index++;
//     }
//     return ans;
// }
// int main()
// {
//     string s = "abbaca";
//     cout << removeDuplicates(s) << endl;
//     return 0;
// }

// leetcode -1209. Remove All Adjacent Duplicates in String II

// Remove all occurence of a substring
// #include <iostream>
// using namespace std;

// string removeOccurrences(string s, string part)
// {
//     while (s.find(part) != string::npos)
//     //     s.find(part) searches for the first occurrence of the substring part in the string s and returns the starting position index of the first match. If the substring is not found, it returns std::string::npos.
//     // std::string::npos is a constant representing a non-existent position (usually the maximum value for size_t, indicating that the substring was not found).
//     {
//         // if inside loop, it means that part is in s string
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// int main()
// {
//     string s = "ababccd";
//     string part = "abc";
//     cout << removeOccurrences(s, part) << endl;
//     return 0;
// }

// Leet code -680. Valid Palindrome II
#include <iostream>
using namespace std;
bool validPalindrome(string s)
{
}
int main()
{
    string s = "MADM";
    return 0;
}