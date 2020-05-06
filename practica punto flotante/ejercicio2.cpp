#include <iostream>
#include <iomanip>
#include <cmath>
#include<string>
#include <sstream>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;
using std::string;
using std::setw;
string bits;
void flott(float &c)
{
  if(c<1.0)
  {
    bits=bits+"0";
    cout<<0;
  }
  else if(c>1.0)
  {
    c=c-1.0;
    bits=bits+"1";
    cout<<1;
  }
}
int convertirBinario(int numero)
{
  //poner 1 u 0 si el valor es positivo o negativo
  if(numero>0)
  {
    cout<<0<<" ";
    bits=bits+"0";
  }
  else if(numero<0)
  {
    cout<<1<<" ";
    bits=bits+"1";
  }
  int  exp, digito;
    double binario;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
    cout <<binario;
    cout <<".";
  double d = binario;
   string bits = to_string(d);
   return binario;
}
void numeroFlotante(float Nflotante)
{
  for(int i=0;i<=52;i++)
  {
    Nflotante=Nflotante*2;
    flott(Nflotante);
  }
}
float demoA(float x){
    return x*x*x-1;
    cout <<x<<endl;
}

float demoB(float x)
{
    return static_cast<double>(x)*x*x - 1;
    cout <<x<<endl;
}
int main()
{
  //separar el entero del flotante
  string numero;
  cout <<"coloque un numero"<<endl;
  getline(cin,numero);
  istringstream iss(numero);
  string token;
  string cadena;
  string flotant("0.");
  int contador=0;
  int entero;
  double Nflotante;
  while (getline(iss, token,'.'))
    {
      if (contador<1)
      {
        cadena=cadena+token;
        contador+=1;
      }
      else if(contador==1)
      {
        flotant=flotant+token;
        contador+=1;
      }
    }
  //mando el entero para que se transforme en binario
  ofstream fs("numero.txt");
  fs << "Hola, mundo" <<endl;
  entero=stoi(cadena);
  Nflotante=stof(flotant);
  cout<<entero<<" "<<Nflotante<<endl;
  convertirBinario(entero);
  numeroFlotante(Nflotante);
  cout<<endl;
  cout<<bits<<endl;
  cout<<"la cantidad de bits transformados "<<bits.length()+5<<endl;
  //transformacion de un byte a bits se ase la multiplicacion x 8
  cout<<"el numero flotante es : "<<(sizeof(Nflotante))*8<<" bits de memoria "<<endl;
  //Muestre algunos ejemplos de patrones de bits float y double que representen el mismo valor numerico (por
//ejemplo el valor 3.15)
  //halla los siguientes digitos con el flotante
}
