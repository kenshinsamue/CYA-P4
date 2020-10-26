
#include <string>
#include<iostream>
#include <fstream>
using namespace std;
#ifndef FIBONACCI_H
#define FIBONACCI_H
class FibonacciWord{
  public:
    FibonacciWord();
    FibonacciWord(string, string);
    void ComprobarFibonacci();
    void LeerLinea();
    void EscribirFichero(bool,int);
  private:
    fstream Input;
    fstream Output;
    string cadena;
    string primer_valor;
    string segundo_valor;
    string anterior_1;
    string anterior_2;
};
#endif