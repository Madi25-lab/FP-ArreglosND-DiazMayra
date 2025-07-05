#include<iostream>

using namespace std;
int main (){
	int matriz [5][5];
	
	cout << "==========================================================" << endl;
    cout << "                ESPIRAL DE MATRIZ (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<"Ingresa el valor de la matriz [ "<<i<<"] ["<<j<<"] : ";
			cin>>matriz[i][j];
		}
	}
	
	system("cls");
	
	cout<<"---------------------------MATRIZ----------------------------"<< endl;
	cout<<endl;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"--------------------RECORRIDO EN ESPIRAL---------------------"<<endl;
	cout<<endl;
	 
	
	for(int i=0; i<3; i++){
		for(int j=i; j<5-i; j++){
		cout<<matriz[i][j]<<" ";	
		}
		for(int k=i+1; k<5-i; k++){
		cout<<matriz[k][4-i]<<" ";	
		}
	}
	
	return 0;
	
}