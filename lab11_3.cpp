#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count=0;
    float sum=0,_sqrt;
    string textline;
    ifstream score("score.txt");
    while (getline(score,textline))
    {
        sum+=atof(textline.c_str());
        _sqrt+=atof(textline.c_str())*atof(textline.c_str());
        count++;
    }
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<"\n";
    cout << "Standard deviation = "<<sqrt(_sqrt/count-pow(sum/count,2));
    score.close();
}