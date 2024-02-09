
#include <iostream>
#include <math.h>

using namespace std;
    
    int Sum;
    int M = 0;
    int x ;
    
    int factorial (int M) 
    { 
        if( M == 0 ) return 1;
        return M * factorial (M - 1);
    }
    
    double Formula (int M) {  
    return pow(-1, M) * ( (2 * pow(M, 2) + 1)/ factorial(2*M) * pow(x, 2*M) );
    }
    
    
    
int main()
{
    int N;
    cout<<"¬ведите натуральное число N: ";
    cin>>N;
    
    cout<<"¬ведите натуральное число x: ";
    cin>>x;
    
    for (int M=0; M<N; M++){
        Sum = Sum + Formula(M);
        cout<<Formula<<"—умма на "<<M<<" шаге = "<<Sum<<endl;
    }
    
    
    return 0;
}