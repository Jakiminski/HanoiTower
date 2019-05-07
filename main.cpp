#include <iostream>
#include <cstdlib>

using namespace std;

void hanoi_tower(int n,char a, char b, char c){   
    //qnt. de discos, torre inicial, torre interm., torre final
    
    //Passo Recursivo anterior
    if (n!=1){
    hanoi_tower(n-1,a,c,b);
    }
    
    //Passo Base
    cout <<"Disc"<<n<<": "<<a<<"->"<<c <<"\t";
    
    //Passo Recursivo posterior 
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
    return 0;
}
