#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    system("cls");
    string name;
    cout << "Enter the name of Birthday Boy/Girl : " << endl;
    getline(cin, name);
    cout << "How many person are wishing? " << endl;
    int n;
    cin >> n;
    string from[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of " << i << "st person wising :" << endl;
        getline(cin, from[i]);
    }
    cout << "HAPPY BIRTHDAY " << name << " !!!!!!!!!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "                                           i i i i i i                                                " << endl;
    cout << "                                           i i i i i i                                                " << endl;
    cout << "                                           i i i i i i                                                " << endl;
    cout << "                                              ______                                             " << endl;
    cout << "                                         |              |                                             " << endl;
    cout << "                                         |              |                                             " << endl;
    cout << "                                      ----              ----                                          " << endl;
    cout << "                                     |                      |                                         " << endl;
    cout << "                                 ----                        ----                                     " << endl;
    cout << "                                |         HAPPY BIRTHDAY         |                                    " << endl;
    cout << "                                |                                |                                    " << endl;
    cout << "                                |                                |                                    " << endl;
    cout << "                                |                                |                                    " << endl;
    cout << "                                |                                |                                    " << endl;
    cout << "                                ----------------------------------                                    " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "   HAVE A GREAT DAY " << name << " !!!!!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "   FROM : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "         " << from[i] << endl;
        cout << endl;
    }
    return 0;
}