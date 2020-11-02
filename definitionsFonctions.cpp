	// Fichier dans lequel vous écrirez les fonctions que l'on vous demandera de définir

#include "listesEtTableaux.cpp"

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

bool existeRac(int n, int k)
{
	return(sqrt(n)>=k ? true : false);
}


bool estCarre(int n)
{
	return(floor(sqrt(n))==sqrt(n) ? true : false);
}
