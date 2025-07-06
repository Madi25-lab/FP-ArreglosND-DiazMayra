#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	cout << "==========================================================" << endl;
    cout << "                   BUSCAMINAS (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	srand(time(0));
	int matriz[10][10];
	int matriz_final[10][10];
	int NF=0, NC=0;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matriz[i][j]=rand()%2;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			int cont=0;
			for(int k=0; k<8; k++){
				int fila[]={-1,-1,-1,0,0,1,1,1};
				int columna[]={-1, 0, 1,-1,1,-1,0,1};
				NF=i+fila[k];
				NC=j+columna[k];
				
				if(NF>=0 && NF<10 && NC>=0 && NC<10){
                    if(matriz[NF][NC]==1){
                    cont++;
					}
				}
				
			}
			matriz_final[i][j]=cont;
		}
	}
	
	cout<<"--------TABLERO B.INICIAL --------TABLERO B.FINAL--------"<<endl;;
	cout<<endl;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<matriz[i][j]<<" ";
		}
		
		cout<<"                 ";
		
		for(int j=0; j<10; j++){
			cout<<matriz_final[i][j]<<" ";
		}
		cout<<endl;
	}
}