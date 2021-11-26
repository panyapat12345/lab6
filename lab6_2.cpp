#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double A){
    return (A*M_PI)/180;
}

double rad2deg(double R){
    return (R*180)/M_PI;
}

double findXComponent(double L1, double L2, double R1, double R2){
    double Lx1 = L1*cos(R1);
    double Lx2 = L2*cos(R2);
    return Lx1 + Lx2;
}

double findYComponent(double L1, double L2, double R1, double R2){
    double Ly1 = L1*sin(R1);
    double Ly2 = L2*sin(R2);
    return Ly1 + Ly2;
}

double pythagoras(double Lx, double Ly){
    return sqrt(pow(Lx, 2)+pow(Ly, 2));
}

void showResult(double L, double R){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << L << endl;
    cout << "Direction of the resultant vector (deg) = " << R << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
