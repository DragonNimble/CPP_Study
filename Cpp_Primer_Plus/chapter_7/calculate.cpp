#include <iostream>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);

double calculate(double n1, double n2, double (*pf)(double, double));

int main()
{
    using namespace std;
    double (*pf[3])(double, double) = {add, sub, mul};
    
    double x, y;
    while (cin >> x >> y)
    {
        for (int i = 0; i < 3; i++)
            cout << calculate(x, y, pf[i]) << endl;
    }
    return 0;
}

double add(double x, double y)
{
    std::cout << "add: ";
    return x + y;
}
double sub(double x, double y)
{
    std::cout << "sub: ";
    return x - y;
}
double mul(double x, double y)
{
    std::cout << "mul: ";
    return x * y;
}
double calculate(double n1, double n2, double (*pf)(double, double))
{
    return pf(n1, n2);
}