#include "bspline.h"

#include <math.h>

BSpline::BSpline()
{


}

double BSpline::C_1(double u, double dots[], int isY){ // C(u) for (0 <= u < 2)
    double answer = 0.0;

    answer += (pow((2-u), 3)/8)*dots[0+isY];
    answer += ((19*pow(u, 3) - 90*pow(u, 2) + 108*u)/72)*dots[2+isY];
    answer += ((12*pow(u, 2) - 5*pow(u, 3) + 6*pow(u, 2) - 2*pow(u, 3))/36)*dots[4+isY];
    answer += (pow(u, 3)/18)*dots[6+isY];

    return answer;
}

double BSpline::C_2(double u, double dots[], int isY){ // C(u) for (2 <= u < 3)
    double answer = 0.0;

    answer += (pow((3-u), 3)/9)*dots[2+isY];
    answer += ((5*pow(u, 3) - 36*pow(u, 2) + 81*u - 54)/9)*dots[4+isY];
    answer += ((-13*pow(u, 3) + 81*pow(u, 2) - 162*u + 108)/9)*dots[6+isY];
    answer += pow((u - 2), 3)*dots[8+isY];

    return answer;
}
