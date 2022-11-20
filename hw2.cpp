#include <iostream>

void spiral(int n){
    int A[n][n] = {};
    int counter = 1;
    for (int c=0; c<=n/2; c++){
        for (int i=c; i<n-c; i++) A[i][c]=counter++; //заполнение левой границы вниз
        for (int i=c+1; i<n-c; i++) A[n-1-c][i]=counter++; //заполнение нижней границы вправо
        for (int i=n-2-c; i>=c;i--) A[i][n-1-c]=counter++; //заполнение левой границы вверх
        for (int i=n-2-c; i>=c+1; i--) A[c][i]=counter++; //заполнение верхней границы влево
    }

    //вывод массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << A[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
int main() {
    std::cout <<"Enter spiral size:"<<std::endl;
    int n;
    std::cin >> n;
    spiral(n);
}