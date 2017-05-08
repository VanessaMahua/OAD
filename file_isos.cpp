#include<iostream>
#include<fstream>

using namespace std;
void removeComments(istream & is, ostream & os);// istream envia archivos de lectura y el ofstream to write
int main(){

    ifstream entrada;// lectura  Para abrir y leer desde un archivo en C ++
    ofstream salida;// escribir  Para escribir un archivo de salida en C ++
    entrada.open("text_in.txt");
    salida.open("text_out.txt");
    removeComments(entrada,salida);
    entrada.close();// cerrrarlo
    salida.close();
    return 0;
}
void removeComments(istream & is, ostream & os)
{
    string line;
    bool valor=true;
    while(getline(is,line))
    {
        int c=0;
        for(;c<line.length();c++)
        {
            if( line[c]== '/'&& line[c+1]== '/'){
                break;}
            if(valor== true)
            {
                os<<line[c];
            }

        }
        os<<endl;
    }
}
