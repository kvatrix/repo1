
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
    cout<<"������� ����������� ����� N: ";
    cin>>N;
    
    cout<<"������� ����������� ����� x: ";
    cin>>x;
    
    for (int M=0; M<N; M++){
        Sum = Sum + Formula(M);
        cout<<Formula<<"����� �� "<<M<<" ���� = "<<Sum<<endl;
    }
    
    
    return 0;
}