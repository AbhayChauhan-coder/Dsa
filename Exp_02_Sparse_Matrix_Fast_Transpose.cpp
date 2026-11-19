#include <iostream>
using namespace std;
const int MAX = 100;
int main() {
    int a[10][10], sparse[MAX][3], trans[MAX][3];
    int rows, cols, terms=0;
    cout << "Enter rows and columns: "; cin >> rows >> cols;
    cout << "Enter matrix elements:\n";
    for(int i=0;i<rows;i++) for(int j=0;j<cols;j++) cin >> a[i][j];
    sparse[0][0]=rows; sparse[0][1]=cols;
    for(int i=0;i<rows;i++) for(int j=0;j<cols;j++) if(a[i][j]!=0) {
        ++terms; sparse[terms][0]=i; sparse[terms][1]=j; sparse[terms][2]=a[i][j];
    }
    sparse[0][2]=terms;
    cout << "Triplet representation (row col value):\n";
    for(int i=0;i<=terms;i++) cout<<sparse[i][0]<<" "<<sparse[i][1]<<" "<<sparse[i][2]<<endl;
    trans[0][0]=cols; trans[0][1]=rows; trans[0][2]=terms;
    int count[10]={0}, position[10]={0};
    for(int i=1;i<=terms;i++) count[sparse[i][1]]++;
    position[0]=1;
    for(int i=1;i<cols;i++) position[i]=position[i-1]+count[i-1];
    for(int i=1;i<=terms;i++) {
        int col=sparse[i][1], p=position[col]++;
        trans[p][0]=sparse[i][1]; trans[p][1]=sparse[i][0]; trans[p][2]=sparse[i][2];
    }
    cout << "Fast transpose (row col value):\n";
    for(int i=0;i<=terms;i++) cout<<trans[i][0]<<" "<<trans[i][1]<<" "<<trans[i][2]<<endl;
    return 0;
}
