#include <cmath>
#include <iostream>
#include <iomanip>
#include <limits>


int main()
{
    
    int CollumnWidth = 20;

    double a;
    double b;
    long double Product;

    char o;
    while (true)
    {
        a, b = NAN;

        std::cout << "-- Enter 2 numbers and an operator in the form ( a [] b)" << std::endl;
        std::cin >> a >> o >> b;

        //flush input buffer in case of irroneous input
        std::cin.clear();
        std::cin.ignore(10, '\n');

        
        
        if (a == NAN || b == NAN)
        {
            std::cout << "Valid numbers not given" << std::endl;
        }
        else
        {
            switch (o)
            {
            case '+':
                std::cout << a << " " << o << " " << b << " = " << a + b << std::endl;
                break;
            case '-':
                std::cout << a << " " << o << " " << b << " = " << a - b << std::endl;
                break;
            case '*':
                std::cout << a << " " << o << " " << b << " = " << a * b << std::endl;
                break;
            case '/':
                std::cout << a << " " << o << " " << b << " = " << a / b << std::endl;
                break;
            case '^':
                std::cout << a << " " << o << " " << b << " = " << std::pow(a, b) << std::endl;
                break;
            case 'P':
                //aproximates pi based on the basel problem
                Product = 0;
                std::cout << std::setprecision(b);
                for(int i = 1; i <= a; i++)
                {
                    Product += 1 / (std::pow(i, 2));
                    std::cout << (std::pow(Product * 6, 0.5)) << std::endl;
                }


                break;
            case 'h':
                std::cout << std::setfill('.') << std::left
                    << std::setw(CollumnWidth) << "OPERATION" << std::setw(CollumnWidth) << "OPERAND" << std::endl
                    << std::setw(CollumnWidth) << "Add" << std::setw(CollumnWidth) << "+" << std::endl
                    << std::setw(CollumnWidth) << "Subtract" << std::setw(CollumnWidth) << "-" << std::endl
                    << std::setw(CollumnWidth) << "Multiply" << std::setw(CollumnWidth) << "*" << std::endl
                    << std::setw(CollumnWidth) << "Divide" << std::setw(CollumnWidth) << "/" << std::endl
                    << std::setw(CollumnWidth) << "Power" << std::setw(CollumnWidth) << "^" << std::endl
                    << std::setw(CollumnWidth) << "Pi Basel" << std::setw(CollumnWidth) << "(Precision) P (Digits)" << std::endl
                    ;
                break;
            default:
                std::cout << "operand not recognised, type '' 0 h 0 '' for a list of valid operands" << std::endl;
                break;
            }
        }
    }
}


