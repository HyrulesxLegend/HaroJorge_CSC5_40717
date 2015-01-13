/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 13, 2015, 7:46 AM
 * Purpose: to convert ounces to metric tons. Hmwk.
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    float cereal_weight, cereal_ttl, ttl_boxs;
    cout <<"Hello, this program allows you to convert ounces to metric tons."<<endl;
    cout <<"Please enter the weight in ounces of the cereal box."<<endl;
    cin  >>cereal_weight;
    cereal_ttl = (cereal_ttl * 2.83495231e-5)*.0f;
    ttl_boxs = 3527392/cereal_weight;
    cout <<"your cereal weighs "<<cereal_ttl<<" metric tons"<<endl;
    cout <<"you will need " <<ttl_boxs<<" more boxes to fill a metric ton"<<endl;
    
    return 0;
}

