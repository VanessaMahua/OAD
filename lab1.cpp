//cantidad de lineas palabras y caracteres
#include<iostream>
#include<fstream>
#include<string>

#define ext ".txt"
#define pb "push_back"

using namespace std;

void info_texto(fstream &,int&,int&,int&); // ifstream/palabras/caracteres
void add4(int n){
	cout << n + "11" << endl;
}


int main(){
	
	int lineas = 0;
	int palabras = 0;
	int caracteres = 0;
	fstream salida;

	//info_texto(salida,lineas,palabras,caracteres);
	//cout << caracteres << "caracteres" << endl;
	//cout << lineas << "lineas." << endl;
	//cout << palabras << "Palabras." << endl << endl;

	add4(6);
	cout << "los monos de africa" << endl;
	
   
    return 0;
}


void info_texto(fstream & salida,int &lineas,int &palabras,int &caracteres){
	string FileName;
	cout << "Nombre del File a leer: "; cin >> FileName;

	salida.open(FileName+ext,ios::in);
	
	int cont = 0;
	char c;
	while(!salida.eof()){
		c = salida.get();
		caracteres++;
	}
	salida.close();// caracteres


	salida.open(FileName+ext,ios::in);
	string lline;
	while( getline(salida,lline) ){
		lineas++;
	}		
	salida.close();// lineas




	salida.open(FileName+ext,ios::in);
	char ch;
	while( !salida.eof() ){
		ch = salida.get();

		if ( ch == ' ' || ch == '\n')
			palabras++;
	}
	salida.close(); // palabras


	//salida.open(FileName+ext,ios::in);

}
