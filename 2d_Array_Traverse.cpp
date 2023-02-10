#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr1[i][j];
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<arr1[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}