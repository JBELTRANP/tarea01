
#include <iostream>
#include <cmath>

int main()
{ double  a=1.0, b=1.0, c, x1, x2, x1p,x2p;

    for(int n=0;n<=10; n++){
        c=std::pow(10,-n);
        x1=(-b+std::sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-std::sqrt(b*b-4*a*c))/(2*a);
        x1p=(-2*c)/(b+std::sqrt(b*b-4*a*c));
        x2p=(-2*c)/(b-std::sqrt(b*b-4*a*c));
        std::cout.precision(5);

        std::cout << c << "\t" << x1 << "\t" << x2 << "\t" << x1<< "\t"<< x2p << "\n"  <<std::scientific;
        //std::cout << x1*x1+x1+c << "\t" <<x2*x2+x2+c << "\n";
        //std::cout << x1p*x1p+x1p+c << "\t" <<x2p*x2p+x2p+c << "\n \n \n";

    }
  return 0;

}
