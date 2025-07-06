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
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matriz[i][j]=rand()%2;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}