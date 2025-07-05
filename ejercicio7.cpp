#include<iostream>

using namespace std;
int main(){
	int matriz[4][4];
	int matriz1 [4][4];
	
	cout << "==========================================================" << endl;
    cout << "              ROTACION DE UNA MATRIZ (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"Ingrese los valores de la matriz ["<<i<<"] ["<<j<<"] :";
			cin>>matriz[i][j];
		}
	}
	system ("cls");
	
	cout<<endl;	
	cout<< "-------------------------------MATRIZ ORIGINAL----------------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		matriz1[j][3-i]=matriz[i][j];
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		
		cout<<"  ";
		
		for(int j=0; j<4; j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}