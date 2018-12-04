#include <iostream>
#include <stdlib.h>

using namespace std;

void hanoi_tower(const int n,char a, char b, char c){   //qnt. de discos, torre inicial, torre interm., torre final
    if (n!=1){
    hanoi_tower(n-1,a,c,b);
    }
    cout <<"Disc"<<n<<": "<<a<<"->"<<c <<"\t";
    //cout << "\t\tMovendo disco " << n << " de " << a << " para " << c << "\n";
    if (n!=1){
        hanoi_tower(n-1,b,a,c);
    }
}

int main(){

    cout <<"\n";
    int disc;  //qnt de discos na torre 1
    cin >> disc;

    hanoi_tower(disc,'A','B','C');
    //system("cls");
    return main();
}
