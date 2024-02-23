
// pattern

// square
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  for(int i=0;i<4;i++)
//  {
//      for(int j =0;j<4;j++)
//      {
//          cout<<" * ";
//      }
//      cout<<endl;
//  }
//  return 0;
//  }

// rectangle
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  for(int i=0;i<4;i++)
//  {
//      for(int j =0;j<6;j++)
//      {
//          cout<<" * ";
//      }
//      cout<<endl;
//  }
//  return 0;
//  }

// hollow rectangle
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  for(int row=0;row<5;row++)
//  {
//  if(row==0 || row==4)
//  {
//      for(int col=0;col<5;col++)
//      {
//          cout<<"* ";
//      }
//      cout<<endl;
//  }
//  else
//  {
//      cout<<"*       * "<<endl;
//  }
//  }
//  }

// another way
// #include <iostream>
// using namespace std;
// int main()
// {
//     int ROWS = 10;
//     int COLS = 7;
//     for (int row = 0; row < ROWS; row++)
//     {
//         for (int col = 0; col < COLS; col++)
//         {
//             if (row == 0 || row == ROWS - 1)
//             {
//                 cout << "* ";
//             }
//             else if (col == 0 || col == COLS - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// HALF PYRAMID
// #include <iostream>
// using namespace std;
// int main()
// {
// int n=10;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row+1 ; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// inverted half pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// numerical half pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     }
// }

// inverted numerical half pyramid
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n = 10;
//      for (int row = 0; row < n; row++)
//      {
//          for (int col = 0; col < n-row; col++)
//          {
//              cout << col + 1;
//          }
//          cout << endl;
//      }
//  }

// full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row-1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// inverted full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//  int n=5;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num,n;
//     cout<<"enter number of rows of diamond u want: ";
//     cin>>num;
//     n=num/2;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// hollow pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < row + 1; col++)
//         { // print star for first and last col
//             if (col == 0 || col == row)
//             {
//                 cout << "* ";
//             }
//             // for every col bw first and last print space
//             else
//             {
//                 cout << "  "; // here it is double space
//             }
//         }
//         cout << endl;
//     }
// }

// inverted hollow full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < row + 1; col++)
//         { // print star for first and last col
//             if (col == 0 || col == row)
//             {
//                 cout << "* ";
//             }
//             // for every col bw first and last print space
//             else
//             {
//                 cout << "  "; // here it is double space
//             }
//         }
//         cout << endl;
//     }
// }

// inverted hollow diamond
// #include <iostream>
// using namespace std;
// int main()
// {int num,n;
//     cin>>num;
//     n=num/2;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row - 1; col++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int col = 0; col < row + 1; col++)
//         { // print star for first and last col
//             if (col == 0 || col == row)
//             {
//                 cout << "* ";
//             }
//             // for every col bw first and last print space
//             else
//             {
//                 cout << "  "; // here it is double space
//             }
//         }
//         cout << endl;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             if (col == 0 || col == n - row - 1)
//             {
//                 cout << "* ";
//             }
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }

// fliped solid diamond or rectangle with diamond cutout

#include<iostream>
using namespace std;
int main()
{
    int num = 8;
    int n = num / 2;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }

        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << "  ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
  