#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	cout << "==========================================================" << endl;
    cout << "                 PROPAGACION DE FUEGO (MD)" << endl;
    cout << "==========================================================" << endl;
	cout<<endl;
	
	srand(time(0));
	int matriz[10][10];
	int P_fuego[10][10];
	int S_fuego[10][10];
	
	srand(time(0));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matriz[i][j]=rand()%3;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}