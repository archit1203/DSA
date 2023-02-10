#include <iostream>

using namespace std;

int main()
{
    int n,m,o;
    cin>>n;
    cin>>m;
    cin>>o;
    int arr1[n][m][o];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            for(int k=0;k<o;k++)
                cin>>arr1[i][j][k];
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<o;k++)
                cout<<arr1[i][j][k]<<" ";
            cout<<"\n";}
        cout<<"\n";
}
    return 0;
}