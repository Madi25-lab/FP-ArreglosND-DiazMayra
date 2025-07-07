#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){	
const int n = 10;

    cout << "==========================================================" << endl;
    cout << "                 PROPAGACION DE FUEGO (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	srand(time(0));
	int bosque[10][10];
    int P_fuego[10][10]; 
    
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			bosque[i][j]=rand()%3;
		}
	}

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bosque[i][j]==0){ 
                bool C_quemado=false;
                for(int k=0; k<8; k++){
				int fila[]={-1,-1,-1,0,0,1,1,1};
				int columna[]={-1, 0, 1,-1,1,-1,0,1};
				int NF=i+fila[k];
				int NC=j+columna[k];
				    if(NF>=0 && NF<10 && NC>=0 && NC<10){
                            if (bosque[NF][NC]==1){
                                C_quemado=true;
                            }
                        }
                    }
                if(C_quemado){
				    P_fuego[i][j]=1;
				}else{
				    P_fuego[i][j]=0;
				} 
            }else if(bosque[i][j]==1){
                P_fuego[i][j]=2;
            }else{
                P_fuego[i][j]=2;
            }
        }
    }
    
    cout<<"------------------------RESULTADO-----------------------"<<endl;
    cout<<endl;

    for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<bosque[i][j]<<" ";
		}
	
	cout<<"                  ";
	     
	    for(int j=0; j<10; j++){
			cout<<P_fuego[i][j]<<" ";
		}
	     
		cout<<endl;
	}
	
	return 0;
}