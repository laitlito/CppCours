	// Fichier dans lequel vous écrirez les fonctions que l'on vous demandera de définir

#include "listesEtTableaux.cpp"
#include <iostream>
#include <cmath>
using namespace std;

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
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
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

list<int> suppRepet(list<int> li)
{
	return(estVide(queue(li))? li : tete(li)==tete(queue(li))? suppRepet(queue(li)) : cons(tete(li), suppRepet(queue(li))));
}

list<int> suppPrefEg(list<int> li)
{
	return(estVide(queue(li))? liVide<int>() : tete(li)==tete(queue(li))? suppPrefEg(queue(li)) : queue(li));
}

list<int> codeLi(list<int> li)
{
	return(estVide(li)? li : cons(lgPrefEg(li), cons(tete(li), codeLi(suppPrefEg(li)))));
}

list<int> decodeLi(list<int> li)
{
	return(estVide(li)? li : tete(li)==1 ? cons(tete(queue(li)), decodeLi(queue(queue(li)))) : cons(tete(queue(li)), decodeLi(cons(tete(li)-1, queue(li)))));
}

//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
// Exercice 0
void sommeNpremiers()
{
	int n;
  int x=0;
	cout << "Entrez un nombre pour calculer la somme des entiers de 0 à ce nombre : " << endl;
	cin >> n;
	for (int k = 0; k <= n; k++)
  {
    x=x+k;
  }
  {
    cout <<x;
  }
}
//============================================================================================================================================================
//Exercice 2
void somme2n()
{
	int n;
	int x=0;
	cout << "Entrez un nombre: " << endl;
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		x=x+2*k;
	}
	{
		cout << x;
	}
}
//============================================================================================================================================================
//Exercice 3
/*void somfrac()
{
	int n;
	float x=0;
	cout << "Entrez un nombre: " << endl;
	cin >> n;
	for (int k = 1; k <= n/(n+1); k++)
	{
		x=x+k/k+1;
	}
	{
		cout << x;
	}
}*/
//============================================================================================================================================================
//Exercice 5
void sommeDiv()
{
	int n;
	int x=0;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	for (int k=1; k<=n ; k++)
	{
		if (n%k==0)
		{
			x=x+k;
		}
	}
	{
		cout << x;
	}
}
//============================================================================================================================================================
//Exercice 6
void factorielle()
{
	int n;
	int x=1;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	for (int k=1; k<=n; k++)
	{
		x=x*k;
	}
	{
		cout << x;
	}
}
//============================================================================================================================================================
//Exercice 7
/*void puissance ()
{
	int n;
	int x=1;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	for (int k=1; k<=n ; k++)
	{
		x=x*n;
	}
	{
		cout << x;
	}
}*/
//============================================================================================================================================================
//Exercice 9 Tant que
void tantQueSomme2 ()
{
	int n;
	int x=0;
	int k=1;
	cout << "Entre un nombre" << endl;
	cin >>n;
	while (k<=n)
	{
		x=x+2*k;
		k++;
	}
	{
		cout << x;
	}
}
//============================================================================================================================================================
//Exercice 9 Tant queu
/*void tantQueSommeFrac()
{
	int n;
	int x=0;
	int k=1;
	cout <<"Entrez un nombre" << endl;
	cin >> n;
	while (k<=n)
	{
		x=x+k/(k+1);
		k++;
	}
	{
		cout << x;
	}
}*/
//============================================================================================================================================================
//Exercice 10
void floorPositif()
{
	int x;
	float n=0;
	cout <<"Entrez un nombre" << endl;
	cin >> x;
	while (n+1<=x)
	{
		n=n+1;
	}
	{
		cout << n;
	}
}
//Exercice 11
void ceilPositif()
{
	int x;
	float n=0;
	cout <<"Entrez un nombre" << endl;
	cin >> x;
	while (n+1<=x)
	{
		n=n+1;
	}
	{
		cout << n+1;
	}
}
//============================================================================================================================================================
//Exercice 12
void estPremier()
{
	int n;
	bool trouveDiv=false;
	cout <<"Entrez un nombre" << endl;
	cin >> n;
	for (int k=2; k<=(n-1); k++)
	{
		if (n%k==0)
		{
			trouveDiv=true;
		}
	}
	{
		cout << !(trouveDiv);
	}
}
//============================================================================================================================================================
//Exercice 13
void niemeMultiple()
{
    int n;
    int x = 0;
    cout << "Entrez un nombre" << endl;
        cin >> n;
    {
        if (n%3==1)
        {
            x = 2+6*n/3;
        }
        if (n%3==2)
        {
            x = 3+6*n/3;
        }
        if (n%3==0)
        {
            x = 4+6*n/3;
        }
    }  cout<<x;
}
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//============================================================================================================================================================
//TP Numéro 2
// I.
//Exercice 1
void mystere()
{
	int n;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	int v;
	v=53+n;
	v=2*v;
	v=v-99;
	v=(v/2)-n;
	{
		cout << "Le resultat est " <<v;
	}
}
//============================================================================================================================================================
//Exercice 2&3
void nbRacinesEtSoultionsReelles()
{
	float a;
	float b;
	float c;
	int nbr;
	cout <<"Entrez un nombre a différent de 0" << endl;
	cout <<"Entrez un nombre b différent de 0" << endl;
	cout <<"Entre un nombre c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float discr=b*b-4*a*c;
	list<float> li;
	float x0;
	float x1;
	float x2;
	if (a==0)
	{
		nbr=1;
		x0= -b/2*a;
		li= cons(x0, list<float>());
	}
	else
	{
		if (discr < 0)
		{
			nbr=0;
			li=list<float>();

		}
		else
		{
			if (discr == 0)
			{
				nbr=1;
				x0= -b/2*a;
				li= cons(x0, list<float>());
			}
			else
			{
				nbr=2;
				x1= (-b+sqrt(discr))/2*a;
				x2= (-b-sqrt(discr))/2*a;
				li= cons(x2, list<float>());
				li= cons(x1, li);
			}
		}
	} cout << "Le nombre de solutions est " << nbr << " et les solutuions sont "<< li;
}
//============================================================================================================================================================
// II.
//Exercice 0
void sommeNpremiersV2()
{
	int n;
	int som=0;
	cout << "Entrez un nombre " <<endl;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		som=som+i;
	} cout << "La somme des " <<n<< " premiers entiers est " <<som;
}
//Exercice 1
void sommePair()
{
	int n;
	int som=0;
	cout << "Entrez un nombre: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		som=som+2*i;
	}
	{
		cout << "La somme des " <<n<< " premiers entiers pairs est " << som;
	}
}
//Exercice 2
void sommeImpair()
{
	int n;
	int som=0;
	cout << "Entrez un nombre: " << endl;
	cin >> n;
	for (int i = 0 ; i < n; i++)
	{
		som=som+2*i +1;
	}
	{
		cout << "La somme des " << n << " premiers entiers impairs est " << som;
	}
}
//Exercice 3
// a)
void sommeDivV2()
{
	int n;
	int som=0;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	for (int i=1; i<=n ; i++)
	{
		if (n%i==0)
		{
			som=som+i;
		}
	}
	{
		cout << "La somme des diviseurs de " << n << " est " << som;
	}
}
// b)
void sommeDivV3()
{
	int n;
	int som=0;
	bool estParf=false;
	cout << "Entrez un nombre" << endl;
	cin >> n;
	for (int i=1; i<=n ; i++)
	{
		if (n%i==0)
		{
			som=som+i;
		}
	}
	if (som==2*n)
	{
		estParf=true;
	}
	{
		cout << n << " est-il un nombre parfait ? " << estParf;
	}
}
// c)
/*void existeParfait()
{
	int a;
	int b;
	int som=0;
	bool estParf=false;
	bool existeParfait=false;
	cout << "Entrez un nombre a" << endl;
	cout << "Entrez un nombre b" << endl;
	cin >> a;
	cin >> b;
	if (b<a)
	{
		existeParfait=false;
	}
	else
	{
		for (int i=a; a<=b ; i++)
		{
			if (b%i==0)
			{
				som=som+i;
			}
		}
		if (som==2*b)
		{
			estParf=true;
			existeParfait=true;
		}
		{
			cout << estParf;
			cout << existeParfait;
		}
	}
}*/



/*void existeParfait()
{
	int a;
	int b;
	int som=0;
	bool estParf=false;
	bool existeParfait=false;
	cout << "Entrez un nombre a " << endl;
	cout << "Entrez un nombre b " << endl;
	cin >> a;
	cin >> b;
	for (int i=a; i<=b; i++)
	{
		if (b%i==0)
		{
			som=som+i;
		}
	}
	if (som==2*b)
	{
		estParf=true;
		existeParfait=true;
	}
	{
		cout << estParf;
		cout << existeParfait;
	}
}*/
