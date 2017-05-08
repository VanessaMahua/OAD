#include<iostream>
#include<fstream>
#include <string>
#define SENTINEL ""
using namespace std;
void readFile();
int decimalPlaces(int);

int main()
{
    string filename;
/*
    while ( true ) {
        cout<< "Enter a filename: " ;
        cin>>filename;
        //filename = getLine("Enter a filename: ");
        if ( filename == SENTINEL ) break;
        readFile(filename);
        cout << endl;
    }
*/
    readFile();

    return 0;
}
void readFile()
{
    string word, line;
    int c_word=0, c_line=0, c_char=0, c_char2=0;
    ifstream archivo("Lear.txt" );
    while(true)

    {
        archivo>>word;
        if(archivo.fail())
        {
            break;
        }
        //cout<<word;
        c_char+=word.length();
        c_word++;
    }
    cout<<"\n N words: "<<c_word;
    cout<<"\n N char sin espacios: "<<c_char;

    archivo.close();
    archivo.clear();
    archivo.open("Lear.txt");
    while(true) {
        getline(archivo, line);

        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.
        if(archivo.fail())
            break;
        //cout << line << endl;

        c_char2+=line.length();
        c_line++;

    }
    cout<<"\n N line: "<<c_line;
    cout<<"\n N char sin espacios: "<<c_char2;

}
