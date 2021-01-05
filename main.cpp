#include <iostream>

using namespace std;

int binarySearch( int arr[],int Size,int key ){
    int Start = 0;
    int End = Size-1;
    int mid = (Start + End) / 2;

    while( Start <= End ){
        if ( key == arr[mid] ) return mid;
        else if ( key > arr[mid] ) Start = mid+1;
        else {End = mid -1;}
        mid = (Start + End) / 2;
    }
    return -1;
}


int main()
{
    int Size,d,x;
    cout << "please enter the size of the array" << endl;
    cin>>Size;
    int arr[Size];

    for (int i = 0;i < Size;i++ ){
        cout << "enter element " << i+1 <<endl;
        cin >> arr[i];
    }

    cout << "enter a number to be searched " <<endl;
    cin>>d;
    x = binarySearch(arr,Size,d);
    if ( x != -1 ){
        cout << "your number is at index " << x <<endl;
    }
    else{
        cout << "sorry your number is not in the array" << endl;
    }

    return 0;
}
