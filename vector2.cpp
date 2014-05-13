/*
 * =====================================================================================
 *
 *       Filename:  vector2.cpp
 *
 *    Description:  validity of pointer after reallocation 
 *
 *        Version:  1.0
 *        Created:  03/28/2014  5:24:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  coneagoe
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    int * p = &v[0];

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    * p = 10;
    cout << v[0] << endl;

    return 0;
}
