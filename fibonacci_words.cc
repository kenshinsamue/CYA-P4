#include "fibonacci_words.h"

FibonacciWord::FibonacciWord(){}

FibonacciWord::FibonacciWord(string in, string out){
  Input = fstream(in,fstream::in);
  Output = fstream(out,fstream::out);
  LeerLinea();
  primer_valor=cadena;
  EscribirFichero(true,1);
  LeerLinea();
  segundo_valor=cadena;
  EscribirFichero(true,2);

  while(!Input.eof()){
    LeerLinea();
    ComprobarFibonacci();

  }

}
void FibonacciWord::ComprobarFibonacci(){
  anterior_1=primer_valor;
  anterior_2=segundo_valor;
  int posicion=3;
  string cadena_actual= anterior_1+anterior_2;
  while(cadena.size()>cadena_actual.size()){
    anterior_1=anterior_2;
    anterior_2=cadena_actual;
    cadena_actual= anterior_1+anterior_2;
    posicion++;
  }
  if(cadena!=cadena_actual){
    EscribirFichero(false,-1);
  }
  else{
    EscribirFichero(true,posicion);
  }

}
void FibonacciWord::LeerLinea(){
  Input>>cadena;
}
void FibonacciWord::EscribirFichero(bool aceptado, int index){
  if(aceptado==true){
    Output<<cadena<<" is the word number "<<index<<endl;
  }
  else{
    Output<<cadena<<" is not a Fibonacci word"<<endl;
  }
}