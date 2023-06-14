//
//  mathematics.h
//  tea4er
//
//  Created by Mike An on 14.06.2023.
//

#ifndef mathematics_h
#define mathematics_h

int mathRound(double d);                     //математическое округление до целого
double mathPower(double d, int upper);       //возведение в степень

int mathRound(double d){
    int intd = (int)d;
    d -= intd;
    return d < 0.5 ? intd : ++intd ;
}

double mathPower(double d, int upper){
    double base = d;
    for(; upper > 1; upper--) base *= d;
    return base;
}

#endif /* mathematics_h */
