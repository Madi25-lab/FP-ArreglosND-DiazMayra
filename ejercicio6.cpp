#include<iostream>

using namespace std;
int main(){
	int matriz[6][6];
	int matriz1 [6][6];
	
	cout << "==========================================================" << endl;
    cout << "              MATRIZ REFLEJADA (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<"Ingrese los valores de la matriz ["<<i<<"] ["<<j<<"] :";
			cin>>matriz[i][j];
		}
	}
	system ("cls");
	
	cout<<endl;	
	cout<< "-----------MATRIZ REFLEJADA HORIZONTALMENTE----------"<<endl;
	cout<<endl;
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
		    matriz1[i][j]=matriz[i][5-j];
		}
	}
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<matriz[i][j]<<" ";
		}
		
		cout<<"     ";
		
		for(int j=0; j<6; j++){
		    cout<<matriz1[i][j]<<" ";
		}	
		cout<<endl;
	}

	
	return 0;
}
	