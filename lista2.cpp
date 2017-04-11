
#include <iostream>
#include<string>
using namespace std;
string reverses(string str)
{
   string reversed = string(str.rbegin(), str.rend());
   return reversed;
}
string addCommas(string str)
{
    string cad,d="";
    int tam;
    cad=reverses(str);
    tam= cad.length();
    if (tam > 3){
        for(int i=0; i<tam; i++)
        {
                d +=cad[i];
                if ((i+1)%3==0){
                    d+=",";

                }
        }
        return reverses(d);
    }
    else
        return str;


}

void codifica(int n, string  cadena)

{
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            if (cadena[i] + n > 'z') {
                cadena[i] = 'a' - 'z' + cadena[i] + n - 1;
            } else if (cadena[i] + n < 'a') {
                cadena[i] = 'z' - 'a' + cadena[i] + n + 1;
            } else {
                cadena[i] += n;
            }
        } else if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            if (cadena[i] + n > 'Z') {
                cadena[i] = 'A' - 'Z' + cadena[i] + n - 1;
            } else if (cadena[i] + n < 'A') {
                cadena[i] = 'Z' - 'A' + cadena[i] + n + 1;
            } else {
                cadena[i] += n;
            }
        }
    }
    cout<< cadena;}

int main() {
    codifica(1, "hola 1A");
    cout<<"\nEjercicio 2"<<endl;
       while (true) {

        string digits;
        cout << "Enter a number: ";
        getline(cin, digits);
        if (digits == "") break;
        cout << addCommas(digits) << endl;

}

return 0;

}
