#include <iostream>
using namespace std;
int linearSearch(int arr[],int size ,int target)
{
    for (int i=0;i<size;i++)
    {
    if(arr[i]==target);
    {
        return i ;
    }
}
}

int main() {
int arr[]= {1,2,3,4,5,66};
int size = 6;
int target = 66;
cout<<int linearSearch(int *arr, int size, int target)<<endl;
return 0;
}