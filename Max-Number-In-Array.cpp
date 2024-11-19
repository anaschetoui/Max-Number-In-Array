#include <iostream>
using namespace std;

int RandomNumbers(int from,int to)
{
    return rand()%(to-from+1)+from;
}

void FillArrays(int arr[100],int &arrLength)
{
    cout<<"Enter How many Element: ";
    cin>>arrLength;

    for(int i=0; i<arrLength; i++)
    {

        arr[i]=RandomNumbers(1,100);

    }

}

void MaxNumberInArray(int arr[100],int arrLength)
{
    int MaxNumber=arr[0];
    for(int i=0; i<arrLength; i++)
    {
        if (arr[i]>MaxNumber)
        {
            MaxNumber=arr[i];

        }

    }
    cout<<"Max Number is: "<<MaxNumber;

}

void PrintArray(int arr[100],int arrLength)
{
    for(int i=0; i<arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main ()
{
    srand ((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrays(arr,arrLength);

    cout<<"Array Elements : \n";
    PrintArray(arr,arrLength);

    cout<<"\n";
    MaxNumberInArray(arr,arrLength);

    return 0;

}


