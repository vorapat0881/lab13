#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
    double AM, SD, GM, HM = 0, Max = A[0], Min = A[0];
    for (int i=0; i < N; i++){
    AM += A[i]/N;
    B[0] = AM;
    }
    double S = 0;
    for (int i=0; i < N; i++){
    S += pow(A[i]-B[0],2.0);
    SD = sqrt((S/N));
    B[1] = SD;
    }
    double GG = 1;
    for (int i=0; i < N; i++){
    GG *= A[i];
    GM = pow(GG,1.0/N);
    B[2] = GM;
    }
    for (int i=0; i < N; i++){
    HM += 1.0/A[i];
    B[3] = N/HM;
    }
    for (int i=0; i < N; i++){
    if (A[i] > Max){
        Max = A[i];
    }
    }B [4] = Max;
    for (int i=0; i < N; i++){
    if (A[i] < Min){
        Min = A[i];
    }
    }B [5] = Min;

}