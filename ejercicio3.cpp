#include<iostream>

using namespace std;
int main(){
	int matriz[4][4];
	int D1=0, D2=0;
	
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
	
	cout<<endl;
	
	for(int i=0; i<4; i++){
			D1=D1+matriz[i][3-i];
			D2=D2+matriz[i][i];
		}	
	
	cout<<"Suma Diagonal principal: "<<D1<<endl;
	cout<<"Suma Diagonal secundaria: "<<D2<<endl;
	cout<<endl;
	
	int T=0;
	T=D1+D2;cout<<"Suma de diagonales: "<<T;

    return 0;	
		
	}
	