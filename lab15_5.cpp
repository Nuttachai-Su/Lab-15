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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a,int *b,int *c,int *d){
	int Arr[4] = {*a, *b, *c, *d};

	for(int i = 0; i < 4; i++){
        int j = rand() % 4;
        int temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;
    }
	*a = Arr[0];
    *b = Arr[1];
    *c = Arr[2];
    *d = Arr[3];
}