#ifndef BSPLINE_H
#define BSPLINE_H


class BSpline
{
public:
    BSpline();

    static double C_1(double, double[], int);
    static double C_2(double, double[], int);
};

#endif // BSPLINE_H
