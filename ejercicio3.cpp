#include<iostream>

using namespace std;
int main(){
	int matriz[4][4];
	int D1, D2;
	
	cout << "==========================================================" << endl;
    cout << "            SUMA DE DIAGONALES DE UNA MATRIZ (MD)" << endl;
    cout << "==========================================================" << endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"Ingrese los valores de la matriz ["<<i<<"] ["<<j<<"] :";
			cin>>matriz[i][j];
		}
	}
	system ("cls");
	
	cout<< "-------------------MATRIZ------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;	
}