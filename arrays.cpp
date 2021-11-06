#include <iostream>
#include "arrays.h"

using namespace std ;

void arrays::inputIntArray(int arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << "["<< i << "] = ";
        cin >> arr[i];
    }
}

void arrays::printIntArray(int arr[], int len)
{
    cout << "[";
    for (int i=0; i<len; i++)
        cout << (i == 0 ? "" : ", ") << arr[i];
    cout << "]";
    // unary: x++;
    // binary: x + y
    // tenary: condition ? passed : otherwise;
    // nary: toán tử n ngôi
}

int arrays::sumIntArray(int arr[], int len)
{
    int sum = 0;
    for (int i=0; i<len; i++)
        sum += arr[i];
    return sum;
}

void arrays::inputLongLongArray(long long arr[], int len)
{
    for( int i=0; i<len; i++)
    {
        cout << "["<< i<< "]=";
        cin >> arr[i];
    }
}

void arrays::printLongLongArray(long long arr[], int len)
{
    cout<<"[";
    for(int i=0 ; i<len ; i++)
        cout <<(i==0?"":", ") <<arr[i];
    cout << "]";
}

long long arrays::sumLongLongArray(long long arr[], int len)
{
    long long sum=0;
    for(int i=0; i<len; i++)
        sum += arr[i];
    return sum;
}


