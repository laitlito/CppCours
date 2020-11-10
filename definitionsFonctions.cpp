	// Fichier dans lequel vous écrirez les fonctions que l'on vous demandera de définir

#include "listesEtTableaux.cpp"
#include <iostream>
#include <cmath>
using namespace std;
// Fonction moyenne
// Données: a : nombre, b : nombre
// Résultat: Nombre, la moyenne de a et b
// à vous de compléter
float moyenne(float a, float b)
{
	return (a+b)/2 ;
}


float max3(float a, float b, float c)
{
	return (a>b && b>c ? a : (b>a && a>c ? b : c)) ;
}



bool multiple(int a, int b)
{
	return ((b == 0) ? false : (a%b == 0 ? true : false));
}



bool triangleEqui(float a, float b, float c)
{
	return ((a == b)&&(b == c) ? true : false);
}


bool triangleIso(float a, float b, float c)
{
	return ((a == b)||(b == c) ? true : false);
}


bool triangle(float a, float b, float c)
{
	return((a > b+c) ? false : true);
}


bool memeParite(int a, int b)
{
	return(a%2==0 && b%2==0 ? true : false);
}

bool memeDizaine(int a,int b)
{
	return(a/10==b/10 ? true : false);
}

/*
int gainRoulette(int mise, int numJoue, int numSorti)
{
	return(numJoue == numSorti ? 20 * mise : 0 * mise);
	return(memeDizaine(numJoue, numSorti) ? 5 * mise : 0 * mise);
	return(memeParite(numJoue, numSorti) ? 2 * mise : 0 * mise);
}
*/

int gainRoulette(int mise, int numJoue, int numSorti)
{
	return(numJoue == numSorti ? 20 * mise : (memeDizaine(numJoue, numSorti) ? 5* mise : memeParite(numJoue, numSorti) ? 2 * mise : 0));
}

bool estPair(int n)
{
	return(n==0 ? true : !estPair(abs(n-1)));
}

bool existeMul11( int a, int b)
{
	return(a > b ? false : (((a%11==0))||((b%11==0)))? true : existeMul11(a, (b-1)));
}

int maxMul11(int a, int b)
{
	return(!(existeMul11(a, b))? -1 : ((b%11==0)? b : maxMul11(a, (b-1))));
}

int nbMul11(int a, int b)
{
	return(!(existeMul11(a, b))? 0 : ((b%11==0))? b%10 : nbMul11(a, (b-1)));
}

int somMul11(int a, int b)
{
	return(!(existeMul11(a, b))? 0 : ((b%11==0))? (b + somMul11(a, (b-1))) : somMul11(a, (b-1)));
}

// Il manque les exercices 3. a) b) c) d) e)

/*bool existeRac(int n, int k)
{
	return(sqrt(n)>=k ? true : false);
}
*/

int nbChifDec(int n)
{
	return(n<10? 1 : 1+nbChifDec(n/10));
}

int chifRang(int n, int k)
{
	return(k==1 ? n%10 : n<10 ? 0 : chifRang(n/10, k-1));
}


int somChif(int n)
{
	return(n<10? n : n%10+somChif(n/10));
}

int racNum(int n)
{
	return(n<10? n : racNum(somChif(n)));
}

int invChif(int n)
{
	return(n< 10? n : invChif(n/10)+(n%10) * pow(10, nbChifDec(n/10)));
}

bool estCarre(int n)
{
	return(floor(sqrt(n))==sqrt(n) ? true : false);
}

//============================================================================================================================================================

list<int> li(list<int> li)
{
	return((li));
}

int longLi(list<int> li)
{
	return(estVide(li)? 0 : !estVide(queue(li))? 1+longLi(queue(li)) : 1);
}

int minLi(list<int> li)
{
	return(estVide(li)? 0 : estVide(queue(li))? tete(li) : tete(li)<=tete(queue(li))? minLi(cons(tete(li), queue(queue(li)))) : minLi(cons(tete(queue(li)), queue(queue(li)))));
}

bool existeLi(list<int> li, int n)
{
	return(estVide(li)? 0 : n==tete(li)? true : existeLi(queue(li), n));
}

list<int> oterLi(list<int> Li, int n)
{
  return((!(existeLi(Li,n))) ? Li : (tete(Li)==n ? queue(Li) : cons(tete(Li),oterLi(queue(Li),n))));
}

bool estTriee(list<int> li)
{
	return(estVide(queue(li))? true : tete(li)<= tete(queue(li))? estTriee(queue(li)) : false);
}

list<int> triListe(list<int> Li)
{
  return(estVide(queue(Li))? Li : (estTriee(Li) ? Li : cons((minLi(Li)),triListe(oterLi(Li,minLi(Li))))));
}

int lgPrefEg (list<int> li)
{
	return(estVide(queue(li))? 1 : (tete(li)==tete(queue(li)))? 1+lgPrefEg(queue(li)) : 1);
}


//traite que 2 par 2
bool existeRepet(list<int> li)
{
	return(estVide(queue(li))? false : tete(li)==tete(queue(li))? true : existeRepet(queue(li)));
}
