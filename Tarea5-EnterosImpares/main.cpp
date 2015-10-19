//
//  main.cpp
//  Tarea5-EnterosImpares
//
//  Created by Zareek Galvan on 8/24/15.
//  Copyright (c) 2015 Zareek Galvan. All rights reserved.
//

#include <iostream>
using namespace std;

int subSumImpairs(int arr[], int intsize)
{
    int intAcum = 0;
    for (int i = 0; i < intsize; i++)
    {
        if (arr[i]%2 != 0)
        {
            intAcum += arr[i];
        }
    }
    return intAcum;
}

int subSumImpairsRecursive(int arr[], int intsize)
{
    intsize -= 1;
    if (intsize < 0)
    {
        return 0;
    }
    return (arr[intsize]%2!=0 ? arr[intsize] : 0) + subSumImpairsRecursive(arr, intsize);
}

int main()
{
    int arrintNumbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,14};
    cout << sizeof(arrintNumbers)/sizeof(arrintNumbers[0]) << endl;
    
    cout << subSumImpairs(arrintNumbers, sizeof(arrintNumbers)/sizeof(arrintNumbers[0])) << endl;
    cout << subSumImpairsRecursive(arrintNumbers, sizeof(arrintNumbers)/sizeof(arrintNumbers[0])) << endl;
}
