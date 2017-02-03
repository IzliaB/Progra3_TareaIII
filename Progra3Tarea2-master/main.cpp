#include "Evaluador.h"
#include <iostream>
using namespace std;

//Realizado Por Izlia Florentino

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{

    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
     *a += *b;

    return *a;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{


  if ((bool) a == true);
  if ((bool) b == true);


}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a == *b);
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{

    string letra =*a;//utilizamos la funcion get para obtener la primera letra de la variable
    return letra[0];
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string palabra=*a ;
    if(palabra==string(palabra.rbegin(),palabra.rend())){ //Declaro un iterador reverso para poder acceder a mi puntero especifico con rbegin y rend
    return true;
    }
    else{
            return false;
        }

}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{

    //defini 2 variables
    //numero igual a la base hacemos un ciclo for para que recorra y obtengo lo del exponente
    //y al final devolvi lo almacenado en la respuesta de la base con el exponente
      int res = 0;
      int num;
      num = *base;
      for (int i =1; i<(*exponente); i++)
      {
          res = (num)*= (*base);
      }

    return res;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
