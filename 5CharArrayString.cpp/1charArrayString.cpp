#include <iostream>
using namespace std;
int main()
{
    // // array
    // // creation
    // int a[5];
    // // insertion
    // cout<<"enter the array elements";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }
    // // print
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << a[i]<<" ";
    // }

    // In character
    // //  creation
    // char ch[10];

    // // i/p insertion
    // cin >> ch;

    // // print
    // cout << "Printing the value of ch : " << ch;

    // // null character
    // //   creation
    // char ch[100];

    // // i/p insertion
    // cout << "Enter your character : " << endl;
    // cin >> ch;

    // // print
    // cout << "Printing the value of ch : " << ch << endl;
    // ;
    // // printing using loop
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "At Index : " << i << " " << ch[i] << endl;
    // }

    // // typecasting to know about null character ascii value
    // // ascii value of null chacter('\o') is zero(0)
    // char temp = ch[6];
    // int value = (int)temp; // typecasting numm character
    // cout << "Printing integer value : " << value << endl;

    //  creation
    char ch[100];

    // i/p insertion
    // cin >> ch;
    cout<<"Enter your character : ";
    cin.getline(ch ,100); //(character array,maximum size of input )

    // print
    cout << "Printing the value of ch : " << ch;

    return 0;
}

// length of string
#include <iostream>
#include <string.h>
using namespace std;
int findLength(char ch[], int size)
{
    // int length = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         // ruk jao
    //         break;
    //     }
    //     else
    //     {
    //         length++;
    //     }
    // }

    //using while loop
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    cout << "Length of string is via my function: " << len << endl;

    // Inbuild function to find the length of char array/ string length
    cout << "Printing length via inbulid fun : " << strlen(ch) << endl;
    return 0;
}

// check palindrome,REPLACE Character,reverse a string, CAPITAL the string
#include <iostream>
using namespace std;

// FIND LENGHT of string
int findLength(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}
// reverse a string
void reverseString(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

// CAPITAL THE STRING
void convertToUpperCase(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currChacter = ch[index]; // current character

        // check if lowercase then change
        if (currChacter >= 'a' && currChacter <= 'z')
        {
            ch[index] = currChacter - 'a' + 'A';
        }
        index++;
    }
}

// REPLACEMENT @ WITH " ".
void replaceCharacter(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char curr = ch[index];

        if (curr == '@')
        {
            // insert space
            ch[index] = ' ';
        }
        index++;
    }
}

// check palindrome
bool checkPalindrome(char ch[], int n)
{
    // n->length of sttring
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            j--;
            i++;
        }
        else
        {
            // character not matching
            return false;
        }
    }
    // agar yahan pohcha mtlb sare character match kr gaye hai
    // means it is palindrome
    return true;
}

int main()
{
    char ch[100];
    cout << "Enter chacters or say String " << endl;
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    int s;
    cout << "1.Replce @ to space" << endl
         << "2.Capitalise" << endl
         << "3.Reverse" << endl
         << "4.Check Palindrime" << endl;
    cin >> s;

    switch (s)
    {
    case 1:
        // replace @ to space

        cout << "Before : " << ch << endl;
        replaceCharacter(ch, 100);
        cout << endl
             << "After : " << ch << endl;
        break;
    case 2:
        // capital
        cout << "Before : " << ch << endl;
        convertToUpperCase(ch, 100);
        cout << endl
             << "After : " << ch << endl;
        break;
    case 3:
        // reverse
        cout << "Before " << ch << endl;
        // int len = findLength(ch, 100);
        reverseString(ch, len);
        cout << endl
             << "After " << ch << endl;
        break;
    case 4:
        bool isPalindrome = checkPalindrome(ch, len);
        if (isPalindrome)
        {
            cout << "Valid palidrome" << endl;
        }
        else
        {
            cout << "Invalid Palindrome" << endl;
        }
        break;
    }
    return 0;
}
