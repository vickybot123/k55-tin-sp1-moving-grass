#include <iostream>
#include "arrays.h"

using namespace std;

int main()
{
    int len;
    cout << "input len: ";
    cin >> len;

    int arr[len];
    arrays::inputIntArray(arr, len);

    cout << "array: " ;
    arrays::printIntArray(arr, len);
    cout << endl;

    int sum= arrays::sumIntArray(arr,len);

    if(sum % len != 0)
    {
        cout<< "wrong input"<< endl;
        return false;
    }

    int avg=sum/len;
    int grassCount = 0;
    for(int i=0; i<len; i++)
    {
        arr[i];
        if(arr[i]>avg)
            grassCount +=  arr[i]-avg;
    }

    cout << "num moved: " << grassCount << endl;
}
