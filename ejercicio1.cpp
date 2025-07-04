#include <iostream>

using namespace std;
int main (){
	int matriz1 [3][3];
	int matriz2 [3][3];
	int producto [3][3];
	
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
	
	for (int i=0; i<3; i++){   // Inicializar la matriz producto con ceros
		for (int j=0; j<3; j++){
			cout<<"Ingrese el valor de la matriz 2 [ "<<i<<"]["<<j<<"]:  ";
			cin>>matriz2[i][j];
		}
	}
	system ("cls");
	
	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            producto[i][j] = 0;
        }
    }
	
	cout<<"---------------------------PRODUCTO--------------------------"<<endl;
	cout<<endl;
	
	for (int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				producto[i][j]+=matriz1[i][k]*matriz2[k][j];
			}
		}
	}
			
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
	if (i==1) cout<<"+ ";
	else cout<<"\t";
	for (int j=0; j<3; j++){
		cout<<matriz2[i][j]<<" ";
	    }	
	if (i==1) cout<<"= ";
	else cout<<"\t";	
	for (int j=0; j<3; j++){
		cout<<producto[i][j]<<" ";
		}
		
	cout<<endl;	
	}	
	
	return 0;
}