#include<iostream>
#include<TRandom3.h>

using namespace std;

int bernoulli(double p, int N){
    TRandom3 rand;
    rand.SetSeed(0);
    int caras = 0;
    for(int i = 0; i<N; i++)
        if(rand.Rndm()<p)
            caras++;
    return caras;
}

int main(){

    int N = 100;
    double p = 0.8;
    const int reps = 1000000;
    int res[reps];
    
    for(int i=0; i<reps; i++){
        res[i] = bernoulli(p,N);
    }
    
    double sum = 0.;
    double sum2 = 0.;
    
    for(int i=0; i<reps; i++){
        sum += res[i];
        sum2 += res[i]*res[i];
    }
    double av = sum/reps;
    double sd = sum2/reps-av*av;
    
    cout << "Mean: " << av << endl;
    cout << "Sdev: " << sd << endl;
    
    return 0;
}
