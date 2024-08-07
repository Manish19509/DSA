// string

// #include <iostream>
// using namespace std;
// int main()
// {
//     // creation
//     string name;
//     // i/p
//     cout << "Enter the string" << endl;
//     // cin >> name;//in this if we will put space then it will not print further part
//     getline(cin,name);//in this we can print string part after space also
//     // o/p
//     cout << "printing name : " << name << endl;
//     // cout << "printing first character : " << name[0] << endl;

//     int index = 0;
//     while (name[index] != '\0')
//     {
//         cout << "index " << index << "character " << name[index] << endl;
//         index++;
//     }
//     cout << "printing value of index 6 is :" << name[6] << ":u can see it is blank" << endl;
//     int value = (int)name[6];
//     cout << "Ascaii value : "
//          << value << endl;
//     return 0;
// }

//* member function for string
// https://cplusplus.com/reference/string/string/

#include <iostream>
using namespace std;
int main()
{
    // string name;
    // cout << "Enter the string : ";
    // cin >> name;
    // // empty string
    // string temp = "";
    // cout << "Length of string : " << name.length() << endl;
    // cout << "name String is empty or not(false = 0) : " << name.empty() << endl;
    // cout << "temp String is empty(true=1) or not : " << temp.empty() << endl;
    // cout<<"Zeroth position of name : "<<name.at(0)<<endl;

    // cout<<"Back character of string is:"<<name.back()<<endl;
    // cout<<"Front character of string is:"<<name.front()<<endl;

    // appending/concatination
    // string str1 = "Manish";
    // string str2 = "Keshri";

    // cout << "Before appending/concatination" << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // // apend
    // str1.append(str2);

    // cout << "After appending/contatination " << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // // erase elements of string in b/w
    // string desc = "This is a car ";
    // cout << "Before erase : " << desc << endl;
    // desc.erase(4, 3);
    // cout << "After Erase : " << desc << endl;

    // // insert string  b/w the elements of string
    // string name = "Manish Keshri";
    // string middle = " Kumar ";
    // name.insert(6, middle);
    // cout << "Printing name : " << name << endl;

    // // push_back and pop_back
    // string name = "Manish";
    // cout << name << endl;

    // name.push_back('a');
    // cout << name << endl;

    // name.pop_back();
    // cout << name << endl;

    // Find one string in another string

    // string str1 = "Yaar tera super star desi kalakar";
    // string str2 = "star";

    // if (str1.find(str2) == string::npos) // npos is member under string
    // {
    //     // not found
    //     cout << "Not Found " << str2 << " in " << str1 << endl;
    // }
    // else
    // {
    //     cout << "Found " << str2 << " in " << str1 << endl;
    // }

    // // comparison of string *imp- we cant use if(str1 == str2)
    // string str1 = "Manish";
    // string str2 = "Manish";

    // if (str1.compare(str2) == 0)
    // {
    //     cout << "String matching" << endl;
    // }
    // else
    // {
    //     cout << "String not matching" << endl;
    // }

    // imp - Sub-string
    string desc = "This is a car, big DADDY of all SUVS";
    cout << desc.substr(19, 5) << endl; //(start index,length)

    //many more member function
    return 0;
}