// Fichier dans lequel vous écrirez les expressions à évaluer
#include "definitionsFonctions.cpp"
#define EVAL(exp) cout << "Valeur de " << (#exp) <<" : "<< (exp) << endl


int main()
{
  srand(time(NULL));
  boolalpha(cout);

  cout << "\n=================================================================\n ";

  // Expressions à évaluer
  // cout << "\n==== Prise en main =======\n";
  // commande pour évaluer l'expression 3+4
  /*EVAL( 3+4 );
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
  cout << "\n=================================================================\n ";
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
  EVAL(nbChifDec(4));
  EVAL(nbChifDec(3249));
  EVAL(chifRang(34682, 4));
  EVAL(somChif(238787284));
  EVAL(racNum(1345));
  EVAL(racNum(13714728));
  EVAL(invChif(1135784));
  //EVAL(existeRac(16, 2));
  EVAL(estCarre(64));
  EVAL(estCarre(132));
  cout << "\n=================================================================\n ";
  const list<int> exli={1,33,67,12,1,22};
  EVAL(exli);
  EVAL(tete(exli));
  EVAL(queue(exli));
  EVAL(tete(queue(exli)));
  //EVAL(tete(tete(exli));
  EVAL(queue(queue(exli)));
  EVAL(cons(11,liVide<int>()));
  EVAL(cons(11, exli));
  //EVAL(cons(1.1, exli));
  EVAL((tete(exli)+tete(queue(exli))));
  EVAL(cons(34, queue(queue(exli))));
  EVAL(cons(tete(exli), queue(queue(exli))));
  EVAL(liste({1, 2, 3}));
    cout << "\n=================================================================\n ";
  EVAL(li({2, 4, 4, 5, 9}));
  EVAL(longLi(exli));
  EVAL(longLi({3, 3, 3, 5, 1, 1, 1, 1, 1, 1, 4}));
  EVAL(minLi(exli));
  EVAL(minLi({2,1}));
  EVAL(minLi({3, 4, 5, 2, 1}));
  EVAL(minLi({3, 5, 4, 7, 94}));
  EVAL(minLi({}));
  EVAL(existeLi(exli, 4));
  EVAL(existeLi(exli, 1));
  EVAL(oterLi(exli, 1));
  EVAL(oterLi(exli, 67));
  EVAL(oterLi(exli, 9));
  EVAL(estTriee(exli));
  EVAL(estTriee({1, 2, 4}));
  EVAL(estTriee({3, 4, 6, 7, 9, 100}));
  EVAL(estTriee({3, 4, 6, 7, 9, 100, 1}));
  //EVAL(triListe(exli));
  EVAL(lgPrefEg(exli));
  EVAL(lgPrefEg({2, 2, 2, 2, 4, 5}));
  EVAL(lgPrefEg({2, 7, 7, 2}));
  EVAL(lgPrefEg({2, 2, 2, 7, 2}));
  EVAL(suppRepet({2, 7, 7, 7, 2}));
  EVAL(suppPrefEg({2, 7, 7, 2}));
  EVAL(codeLi({7, 7, 7, 7, 8, 8, 7, 7, 7}));
  EVAL(decodeLi({3, 7, 2, 1, 1, 2}));*/
  //somCarre();
  //sommeNpremiers();
  //somme2n();
  //somfrac();
  //sommeDiv();
  //factorielle();
  //puissance();
  //tantQueSomme2();
  //tantQueSommeFrac();
  //floorPositif();
  //ceilPositif();
  //estPremier();
  //niemeMultiple();
  //mystere();
  //nbRacinesEtSoultionsReelles();
  //sommeNpremiersV2();
  //sommePair();
  //sommeImpair();
  //sommeDivV2();
  //sommeDivV3();
  existeParfait();
  //EVAL((float) rand()/ RAND_MAX);
  //EVAL((float) rand()/ RAND_MAX);
  //EVAL((float) rand()/ RAND_MAX);















  cout << "\n=================================================================\n ";
  return 0;
}
