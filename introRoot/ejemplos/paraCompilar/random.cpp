#include<iostream>
#include<TRandom3.h>

using namespace std;

int main(){

    TRandom3* rand = new TRandom3();
    rand->SetSeed(0);
    
    for(int i=0; i<10; i++)
        cout << rand->Rndm() << endl;
        
    return 0;
}
