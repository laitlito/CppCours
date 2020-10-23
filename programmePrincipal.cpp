// Fichier dans lequel vous écrirez les expressions à évaluer
#include "definitionsFonctions.cpp"
#define EVAL(exp) cout << "Valeur de " << (#exp) <<" : "<< (exp) << endl


int main()
{
  srand(time(NULL));
  boolalpha(cout);

  cout << "\n=================================================================\n ";

  // Expressions à évaluer
  cout << "\n==== Prise en main =======\n";
  // commande pour évaluer l'expression 3+4
  EVAL( 3+4 );
  EVAL( true || false );
  EVAL( abs(2) );
  //EVAL (2/(1-1));
  EVAL( 8/2 );
  EVAL( 9/2 );
  EVAL( 8%4 );
  EVAL( 9%4 );
  EVAL( 8.5+1 );
  EVAL( 8.2/4.1 );
  EVAL( 8.2/2 );
  EVAL(pow( 3,2 ));
  EVAL(sqrt( 25 ));
  EVAL(sqrt( pow( 12.3,2 )));
  EVAL( true );
  EVAL( 2 > 3);
  EVAL( !( 2 > 3) );
  EVAL(( 2 > 3 ) && true);
  EVAL(( 2 > 3 ) || true);
  //EVAL( ((2/0)>1) || true);
  EVAL(true || ((2/0)>1));
  EVAL(2>3 ? 5 : 7);
  EVAL(sqrt(2)>1.4 ? 5 : 7);
  EVAL(moyenne(2.3 , 8));
  EVAL(max3(19 , 2 , 100000000000000));
  EVAL(multiple(2, 0));
  EVAL(triangleEqui(3, 3, 3));
  EVAL(triangleIso(3, 3, 2));
  EVAL(triangle(1000, 3, 13));
  EVAL(memeParite(2, 8));
  EVAL(memeDizaine(303, 399));
  EVAL(memeDizaine(30, 39));
  EVAL(gainRoulette(100, 675, 500));
  EVAL(gainRoulette(10, 12, 18));
  EVAL(gainRoulette(100, 675, 672));
  EVAL(gainRoulette(100,675,675));
  EVAL(estPair(9));
  EVAL(estPair(56));
  EVAL(estPair(-2));
  EVAL(existeMul11(2, 10));
  EVAL(existeMul11(22, 22));
  EVAL(existeMul11(22, 2));
  EVAL(maxMul11(3, 43));
  EVAL(maxMul11(3, 4));
  EVAL(nbMul11(3, 43));
  EVAL(nbMul11(3, 4));
  EVAL(somMul11(3, 54));
  EVAL(somMul11(3, 4));




  cout << "\n=================================================================\n ";
  return 0;
}
