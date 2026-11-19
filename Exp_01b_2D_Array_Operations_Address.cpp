#include <iostream>
using namespace std;
const int M = 3, N = 3;
void createArray(int A[M][N]) {
    cout << "Enter " << M*N << " elements (row-wise):\n";
    for (int i=0;i<M;i++) for (int j=0;j<N;j++) cin >> A[i][j];
}
void displayArray(int A[M][N]) {
    for (int i=0;i<M;i++) { for (int j=0;j<N;j++) cout << A[i][j] << "\t"; cout << endl; }
}
void updateElement(int A[M][N], int i, int j, int value) {
    if (i>=0 && i<M && j>=0 && j<N) A[i][j]=value;
    else cout << "Invalid index!\n";
}
void transposeArray(int A[M][N], int T[N][M]) {
    for (int i=0;i<M;i++) for (int j=0;j<N;j++) T[j][i]=A[i][j];
}
int calculateAddress(int base,int W,int i,int j,int columns) {
    return base + W*(i*columns+j); // Row-major, zero-based indexing
}
int main() {
    int A[M][N], T[N][M], base, W, row, col;
    createArray(A);
    cout << "Original matrix:\n"; displayArray(A);
    int ur,uc,uv;
    cout << "Enter row, column and new value to update: "; cin >> ur >> uc >> uv;
    updateElement(A,ur,uc,uv);
    cout << "Matrix after updation:\n"; displayArray(A);
    transposeArray(A,T);
    cout << "Transpose:\n";
    for(int i=0;i<N;i++){ for(int j=0;j<M;j++) cout<<T[i][j]<<"\t"; cout<<endl; }
    cout << "Enter Base Address, Element Size (W), row (i), column (j): ";
    cin >> base >> W >> row >> col;
    if(row>=0 && row<M && col>=0 && col<N)
        cout << "Address of A["<<row<<"]["<<col<<"] = " << calculateAddress(base,W,row,col,N) << endl;
    else cout << "Invalid index!\n";
    return 0;
}
