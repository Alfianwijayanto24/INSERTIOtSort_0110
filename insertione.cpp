#include <iostream>
using namespace std;

int arr[20]; /// membuta arr dg panjang data 20
int n; //membuat variabel input n

void input(){//prosedur input
    while(true){
        cout <<"Masukan jumlah Data pada Array: ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";

        }
    }

    cout<< endl;
    cout <<"=============================================================";
    cout <<"======================Masukan Element Array==================";
    cout << "============================================================"<<endl;

    for(int i = 0; i <n; i++)
    {
        cout << "Data ke-" <<(i + 1)<< ": ";
        cin >> arr[i]; 

    }
}

void insertinosort()//procedure insertion sort
{
    int temp;
    int j;

    for (int i = 0; i<n;i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j]> temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]= temp;
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k]<< " ";
        }
    }
}

void display()
{
    cout << endl;
    cout << "\n====================";
    cout << "\nElement Array" <<endl;
    cout << "\n===================="<<endl;

    for(int j = 0; j < n; j++){
        cout << arr [j] << endl;

    }
    cout << endl;


}

int main(){
    input();
    insertinosort();
    display();
    system("pause");

}