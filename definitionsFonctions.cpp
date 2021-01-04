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

int sommeDivV2(int n)
{
	int som=0;
	for (int i=1; i<=n ; i++)
	{
		if (n%i==0)
		{
			som=som+i;
		}
	}
	{
		return som;
	}
}

bool estParf(int n)
{
	int som=0;
	for (int i=1; i<=n ; i++)
	{
		if (n%i==0)
		{
			som=som+i;
		}
	}
	if (som==2*n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool existeParfait(int a, int b)
{
	bool existeParfait=false;
	for (int i = a; i < b; i++)
	{
		if (estParf(i)==true)
		{
			existeParfait=true;
			return existeParfait;
		}
	}return 0;
}

bool existeParfait2(int a, int b)
{
	int i=a;
	while (i<=b)
	{
		estParf(i);
		if (estParf(i)==true)
		 {
			return true;
		 }
		i++;
	}return 0;
}


int parfaitSuiv(int a)
{
	int i=a;
	while (estParf(i)==false)
	{
		i++;
		cout << i;
	} return i;
}

int nemeParfait(int n)
{
	int i=0;
	int nbr=0;
	while(nbr<n)
	{
		if (estParf(i))
		{
			nbr=nbr+1;
		}
		i=i+1;
	}
	return(i-1);
}

bool sontAmis(int a, int b)
{
	bool sontAmis=false;
	if (sommeDivV2(a)==sommeDivV2(b))
	{
		sontAmis = true;
	}
	return sontAmis;
}

bool aUnAmi(int n)
{
	int k=sommeDivV2(n)-n;
	return(sommeDivV2(k)==n+k);
}

void dansCercle()
{
	float x;
	float y;
	bool dansCercle = false;
	cout << "Entrez un nombre x compris entre 0 et 1 : " << endl;
	cout << "Entrez un nombre y compris entre 0 et 1 : " << endl;
	cin >> x;
	cin >> y;
	if (pow(x, 2)+pow(y, 2)<=1)
	{
		dansCercle=true;
	} cout << "Le point de coordonnées x=" << x << " ; y=" << y <<" est-il dans le cercle ? " << dansCercle;
}

void monteCarlo()
{
	int nTir;
	int nInt=0;
	float pi;
	cout <<"Entrez le nombre de tir" << endl;
	cin >>nTir;
	for (int i = 0; i < nTir; i++)
	{
		float x=(float) rand()/ RAND_MAX;
		float y=(float) rand()/ RAND_MAX;
		if (pow(x, 2)+pow(y, 2)<=1)
		{
			nInt=nInt+1;
		}
		else
		{
			nInt=nInt;
		}
	} pi= 4 * (float) nInt / nTir;
	cout << "Pi est environ égal à " << pi;
}

int somTab(vector<int> T)
{
	int som=0;
	for (int i=0 ; i<=(taille(T)-1) ; i++)
	{
		som=som+T.at(i);
	}
	return som;
}

bool tabEgaux(vector<int> T1, vector<int> T2)
{
	bool sontEgaux=true;
	if (taille(T1)!=taille(T2))
	{
		sontEgaux=false;
	}
	else
	{
		for (int i=0 ; i<=(taille(T1)-1) ; i++)
		{
			if(T1.at(i)==T2.at(i))
			{
				sontEgaux=true;
			}
			else
			{
				sontEgaux=false;
			}
		}
	} return(sontEgaux);
}

vector<int> tabCarre(int n)
{
	vector<int> ta(n);
	for( int i=0 ; i<=n-1 ; i++)
	{
		ta.at(i)=i*i;
	}
	return(ta);
}

vector<int> tabSuite(int n)
{
	vector<int> ta(n);
	ta.at(0)=0;
	for(int i=1; i<=n-1; i++)
	{
		ta.at(i)=ta.at(i-1)+2*(i-1)+1;
	}
	return(ta);
}

int racEnt(int n)
{
	int i=0;
	vector<int> ta=tabCarre(100);
	int racEnt;
	while(i*i<=n)
	{
		i++;
	}
	racEnt=i-1;
	return(racEnt);
}

int nbMaxLoc(vector<int> ta)
{
	int nbMaxLoc=0;
	for(int i=1; i<=taille(ta)-1; i++)
	{
		if(ta.at(i-1)<ta.at(i) && ta.at(i)<ta.at(i+1))
		nbMaxLoc=nbMaxLoc+1;
	}
	return(nbMaxLoc);
}

int degree(vector<int> ta)
{
	int degree;
	for(int i=0; i<=taille(ta)-1;i++)
	{
		if(ta.at(i)!=0)
		{
			degree=i;
		}
	}
	return(degree);
}

int valPoly(vector<int> ta, int n)
{
	int v=0;
	for(int i=0; i<=taille(ta)-1;i++)
	{
		v=v+ta.at(i)*pow(n, i);
	}
	return(v);
}

int difMin(vector<int> ta)
{
	int dm;
	dm=abs(ta.at(0)-ta.at(1));
	for(int i=0; i<= taille(ta)-1; i++)
	{
		for(int j=i+1; j<taille(ta); j++)
		{
			if(abs(ta.at(i)-ta.at(j))<dm)
			{
				dm=abs(ta.at((i)-ta.at(j)));
			}
		}
	}
	return(dm);
}

bool estEquilibre(int n)
{
	bool estEquilibre=false;
	int divPair=0;
	int divImpair=0;
	for (int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				divPair=divPair+1;
			}
			if(i%2==1)
			{
				divImpair=divImpair+1;
			}
		}
	}
	if(divPair==divImpair)
	{
		estEquilibre=true;
	}
	return(estEquilibre);
}

list<int> liEquiInfV1(int n)
{
	return(n==0 || n==1 ? liVide<int>() : estEquilibre(n)? cons(n, liEquiInfV1(n-1)) : liEquiInfV1(n-1));
}

list<int> liEquiInfV2(int n)
{
	list<int> li;
	for(int i=1; i<=n; i++)
	{
		if(estEquilibre(i))
		{
			li=cons(i, li);
		}
	}
	return(li);
}

list<int> liPremEqui(int n)
{
	list<int> li;
	int cpt=0;
	int i=1;
	while(cpt<n)
	{
		if(estEquilibre(i))
		{
			li=cons(i, li);
			cpt=cpt+1;
		}
	i++;
	}
	return(li);
}

void abs()
{
	int a;
	cout <<"Entrez un nombre" << endl;
	cin >> a;
	if(a>0)
	{
		cout << a;
	}
	else
	{
		a=a*-1;
		cout << a;
	}
}

void integrale()
{
	float a;
	float b;
	int fonction;
	float var=0;
	cout << "Entrez la borne inférieure " << endl;
	cin >> a;
	cout << "Entrez la borne inférieure " << endl;
	cin >> b;
	cout << "Entrez la fonction dont vous voulez connaitre l'intégrale, 0: f(x)=1, 1: f(x)=x " << endl;
	cin >> fonction;
	if (fonction==0)
	{
		var=b-a;
		cout << var;
	}
	if (fonction==1)
	{
		var=pow(b, 2)/2-pow(a, 2)/2;
		cout << var;
	}
	if (fonction==2)
	{
		var=pow(b, 3)/3-pow(a, 3)/3;
		cout << var;
	}
	if (fonction==3)
	{
		var=pow(b, 4)/4-pow(a, 4)/4;
		cout << var;
	}
	if (fonction==4)
	{
		var=pow(b, 5)/5-pow(a, 5)/5;
		cout << var;
	}
}

bool memeChiffre(int n)
{
	return(n<10 ? true : ((n%10) == (n/10)%10) ? memeChiffre(n/10) : false);
}

bool estEquilibre2(int n)
{
	bool estEquilibre=false;
	int divPair=0;
	int divImpair=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				divPair=divPair+1;
			}
			if(i%2==1)
			{
				divImpair=divImpair+1;
			}
		}
	}
	if(divImpair==divPair)
	{
		estEquilibre=true;
	}
	return(estEquilibre);
}

list<int> liEquiInf3(int n)
{
	list<int> li;
	for(int i=1; i<=n; i++)
	{
		if(estEquilibre2(i))
		{
			li=cons(i, li);
		}
	}
	return(li);
}

list<int> liEquiInf4(int n)
{
	return(n==0 || n==1 ? liVide<int>() : estEquilibre2(n) ? cons(n, liEquiInf4(n-1)) : liEquiInf4(n-1));
}

list<int> liPremEqui2(int n)
{
	list<int> li;
	int cpt=0;
	int i=1;
	while(cpt<n)
	{
		if(estEquilibre(i))
		{
			li=cons(i, li);
			cpt=cpt+1;
		}
	i++;
	}
	return(li);
}

bool contientEqui(vector<int> ta)
{
	bool contientEqui=false;
	for(int i=1; i<=taille(ta)-1; i++)
	{
		if(estEquilibre2(ta.at(i)))
		{
			contientEqui=true;
		}
	}
	return(contientEqui);
}

bool contientEqui2(vector<int> ta)
{
	bool contientEqui=false;
	int i=0;
	while(i<taille(ta)-1 && !contientEqui)
	{
		if(estEquilibre2(ta.at(i)))
		{
			contientEqui=true;
		}
		i++;
	}
	return(contientEqui);
}

int nbEqui(vector<int> ta)
{
	int nbEqui=0;
	for(int i=0; i<=taille(ta)-1; i++)
	{
		if(estEquilibre2(ta.at(i)))
		{
			nbEqui=nbEqui+1;
		}
	}
	return(nbEqui);
}

vector<int> sousTabEqui(vector<int> ta)
{
	vector<int> tr(nbEqui(ta));
	int n=0;
	for(int i=1; i<=taille(ta)-1; i++)
	{
		if(estEquilibre2(ta.at(i)))
		{
			tr.at(n)=ta.at(i);
			n++;
		}
	}
	return(tr);
}

int premierChiffre(int n)
{
	return(n<10? n : premierChiffre(n/10));
}

bool moyennePresente(vector<int> ta)
{
	bool moyennePresente=false;
	int somTab=0;
	int moyTab;
	for(int i=0; i<=taille(ta)-1; i++)
	{
		somTab=somTab+ta.at(i);
	}
	moyTab=somTab/taille(ta);
	for(int j=1; j<=taille(ta)-1; j++)
	{
		if(ta.at(j)==moyTab)
		{
			moyennePresente=true;
		}
	}
	return(moyennePresente);
}

int valMax (vector<int> ta)
{
	int valMax=ta.at(0);
	for(int i=1; i<=taille(ta)-1; i++)
	{
		if(ta.at(i)>valMax)
		{
			valMax=ta.at(i);
		}
	}
	return(valMax);
}

bool maxLiUnique(list<int> li)
{
	bool maxLiUnique=true;
	int max=tete(li);
	li=queue(li);
	while(!estVide(li))
	{
		if(tete(li)==max)
		{
			maxLiUnique=false;
		}
		else
		{
			if(tete(li)>max)
			{
				max=tete(li);
				maxLiUnique=true;
			}
			li=queue(li);
		}
	}
	return(maxLiUnique);
}
