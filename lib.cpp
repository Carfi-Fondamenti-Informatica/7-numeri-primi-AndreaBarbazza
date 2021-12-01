#include <iostream>
#include "lib.h"

bool NumeroPrimo(int a,int b){

    if (a<2){
        return false;
    }
    if (a==2){
        return true;
    }
    int risultato= a%b;
    if (risultato==0){
        return false;
    }

    if (b>2){
        bool result= NumeroPrimo(a,b-1);
        return result;
    }
    return true;
}
