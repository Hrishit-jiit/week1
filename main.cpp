/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++)
        ar[i] = i + 1;
    sort(ar, ar + 5, greater<int>());
    for (int i = 0; i < 5; i++)
        cout << ar[i] << " ";
    return 0;
}