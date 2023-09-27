#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    // Change
    int p;
    cin >> p;
    int a, b, c;
    int m = 0;
    int n = 0;
    scanf("%d", &p);
    for (int i = 0; i == p; i++)
    {

        cin >> option;
        cin.ignore();
        int arr[3];
        scanf("%d", &arr);

        for (int k = 0; arr[k]; k++)
        {
            if (arr[k] == 1)
            {
                m++;
                if (m > 1)
                {
                    n++;
                    cout << ("%d", n);
                    return 0;
                }
            }
        }
    }
}