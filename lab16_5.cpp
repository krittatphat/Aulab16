#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
	int x[4] ;
	int y[] = {*a, *b ,*c ,*d} ;
	for(int i=0 ; i < 4 ; i++){
		x[i] = rand()%4 ;
		for(int j = 0 ; j < i ; j++){
			if(x[i]== x[j]){
				i-- ;
				break ;
			}
		}
	}
	*a = y[x[0]] ; 
	*b = y[x[1]] ; 
	*c = y[x[2]] ; 
	*d = y[x[3]] ; 
}
