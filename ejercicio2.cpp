#include <iostream>

using namespace std;
int main (){
	int valor;
	int matriz [3][3];
	
	cout << "==========================================================" << endl;
    cout << "               BUSCA EL NUMERO (MD)" << endl;
    cout << "==========================================================" << endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese el valor de la matriz 1 [ "<<i<<"]["<<j<<"]:  ";
			cin>>matriz[i][j];
		}
	}
	system("cls");
	
	cout<<"Ingrese el valor que desea buscar: ";
	cin>>valor;
	system("cls");
	
	cout<<"El valor "<<valor<<" se encuentra en:"<<endl;
	cout<<endl;
	
	
	return 0;
}