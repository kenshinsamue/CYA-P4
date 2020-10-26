#include "fibonacci_words.h"

int main(int arcg, char *argv[]) {
  
  if (arcg == 3) {
    FibonacciWord fibonnaci(argv[1],argv[2]);
  }
  else {
    string ayuda = argv[1];
    if(arcg==2 && ayuda=="--help"){
      cout << "Ayuda para la ejecucion del programa:" << endl;
      cout << "./fibonnaci_words [fichero de entrada][fichero de salida]"<< endl;
    }
    else{
      cout<<argv[1]<<endl;
      cout << "Error no se ha usado el programa correctamente:" << endl;
      cout << "./fibonnaci_words [fichero de entrada][fichero de salida]"<< endl;
    }
    
  }
}