#include <iostream>
using namespace std;

int main ( )
{
	const int max_funcionarios = 0;
    int matricula[100], i=0, j=0;
    float salario[100], sal=0;
    char indice[100];
    
    setlocale(LC_ALL, "portuguese");// comando para usar acentua��o nas msgs
    cout<<"Sistema de vetor login na matr�cula do funcion�rio"<<endl;
    cout<<"e contador de sal�rio dependendo do �ndice usado por funcion�rio"<<endl;
    cout<<endl;
    do {
 	
     cout <<"Matricula: ";
     cin >> matricula[i];
     if (matricula[i] > 0){
       cout << "Salario: R$ ";
       cin >> salario[i];
       cout <<"Indice : ";
       cin >> indice[i];
       i++;
       cout<<endl;
      }
 } while (matricula[i-1]> 0 && i<5);
 
 
 for (j=0; j <(i-1); j++) {
 	cout << "Matricula: "<< matricula[j] << endl ;
            switch (indice[j]){
            case 'e': sal = salario[j] * 1.4;
                      break; 
             case 'b': sal = salario[j] * 1.2;
		              break;
             case 'r': sal = salario[j] *1.05;
	                	break;
             default: cout << "Indice Invalido\n";
         }
         cout  <<" Salario: R$ " << sal << "\n"; 
    }
return 0;
}
 
