#include <iostream>

int pos = 0;
int sum = 0;
int Vals[2] = {};


int magnitude(int a){
    if(a<0)
        a = -a;
    return a;
}

int main()
{
    for(int i = 0; i<2; i++){
        std::cin>>Vals[i];
    }

    int A[Vals[0]] = {};
    int B[Vals[0]] = {};
    int C[Vals[0]] = {};

    for(int i=0; i<Vals[0]; i++){
        std::cin>>B[i];
    }


    for(int i=0; i<Vals[0]; i++){
        std::cin>>A[i];
    }

    double mx = A[0];
    for(int i = 0; i<Vals[0]-1; i++){
        if(magnitude(A[i+1]) > mx){
            mx = A[i+1];
            pos = i+1;
        }
    }

    if(A[pos] > 0){
        B[pos] = B[pos]-(Vals[1]*2);
    }
    else{
        B[pos] = B[pos]+(Vals[1]*2);
    }

    for(int i = 0; i<Vals[0]; i++){
        C[i] = A[i]*B[i];
        sum += C[i];
    }

    std::cout<<sum;

    return 0;
}


