#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}