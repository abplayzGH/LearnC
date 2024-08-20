#include <iostream>
using namespace std;

double calcSlope(double x1, double y1, double x2, double y2);

int main(int argc, char* argv[]){

    if(argc != 5){
        cout << "Enter x1 y1 x2 y2";
        return 0;
    }
    
    double x1 = atof(argv[1]);
    double y1 = atof(argv[2]);
    double x2 = atof(argv[3]);
    double y2 = atof(argv[4]);

    cout << calcSlope(x1,y1,x2,y2);
    return 0;
}


double calcSlope(double x1, double y1, double x2, double y2){
    return (y2 - y1) / (x2 - x1);
}