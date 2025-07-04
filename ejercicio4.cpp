#include<iostream>

using namespace std;
int main(){
	int matriz[4][4];
	int F1=0, F2=0;
	
	cout << "==========================================================" << endl;
    cout << "             INTERCAMBIO DE FILAS (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"Ingrese los valores de la matriz ["<<i<<"] ["<<j<<"] :";
			cin>>matriz[i][j];
		}
	}
	system ("cls");
	
	cout<<"Ingrese la fila que desea cambiar: ";
	cin>>F1;
	if(F1>=0 && F1<=3){
		cout<<endl;
		cout<<"Por el numero de fila: ";
		cin>>F2;
		if (F2>=0 && F2<=3){
	
	cout<<endl;	
	cout<< "-------------------MATRIZ------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
		
	cout<< "---------------MATRIZ RESULTANTE------------"<<endl;
	cout<<endl;	
		
		for(int i=0; i<4; i++){
			int aux= matriz[F1][i];
			matriz[F1][i]=matriz[F2][i];
			matriz[F2][i]=aux;
		}
				
		for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
		
	}else{
		cout<<endl;
		cout<<"Numero de fila inexistente"<<endl;
	}
    }else{
    	cout<<endl;
		cout<<"Numero de fila inexistente"<<endl;
	}

	return 0;
}
	