#include <iostream>

using namespace std;
int main (){
	int matriz1 [3][3];
	int matriz2 [3][3];
	
	cout << "==========================================================" << endl;
    cout << "            PRODUCTO DE MATRICES DE 3X3" << endl;
    cout << "==========================================================" << endl;
	
	cout<<endl;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Ingrese el valor de la matriz 1 [ "<<i<<"]["<<j<<"]:  ";
			cin>>matriz1[i][j];
		}
	}
	system ("cls");
	
	cout<<endl;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Ingrese el valor de la matriz 2 [ "<<i<<"]["<<j<<"]:  ";
			cin>>matriz2[i][j];
		}
	}
	system ("cls");
	
	cout<<"---------------------------PRODUCTO--------------------------"<<endl;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
		
	cout<<"   ";
	
		for (int j=0; j<3; j++){
			cout<<matriz2[i][j]<<" ";
		}	
		cout<<endl;
	}
	return 0;
}