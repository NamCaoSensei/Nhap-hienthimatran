// - Lập ma trận trọng số cho bài tập số 1
// - Viết hàm đọc ma trận trọng số từ file .txt
// - Viết hàm in ma trận trọng số ra màn hình

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int A[100][100];
int n;

bool nhap(const char* tenfile){
    ifstream f(tenfile);
    if(!f){
        cout<<"khong mo duoc file "<<tenfile<<endl;
        return false;
    }
    f>>n;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            f>>A[i][j];
        }
    }
    f.close();
    return true;
}

void hienthi()
{
    cout<<"so dinh: "<<n<<endl;
    cout<<"    ";
    for(int j=0;j<n;j++){
        cout<<setw(4)<<char('A'+j);
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<setw(4)<<char('A'+i);
        for(int j=0;j<n;j++){
            cout<<setw(4)<<A[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    if(!nhap("Grap.txt")) return 1;
    hienthi();
    return 0;
}