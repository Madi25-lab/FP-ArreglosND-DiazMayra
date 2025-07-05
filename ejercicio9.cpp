#include <iostream>

using namespace std;

int main(){
	int n;
	
	cout << "==========================================================" << endl;
    cout << "                  CUADRADO LATINO (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	cout<<"Ingrese el numero de orden: ";
    cin>>n;
    if(n>0){
    
    system("cls");
    	
    int matriz[n][n];
	
	for(int i=0; i<1; i++){
		for(int j=0; j<n; j++){
			cout<<"Ingresa valores para fila 1 [ "<<i<<"] ["<<j<<"] : ";
			cin>>matriz[i][j];
	    }
    }
	system("cls");
			
	}else{
    	cout<<endl;
    	cout<<"El numero de orden no debe ser negativo";
	}
	
    return 0;
}