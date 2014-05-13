/*
 * =====================================================================================
 *
 *       Filename:  vector1.cpp
 *
 *    Description:  validity of iterator after reallocation 
 *
 *        Version:  1.0
 *        Created:  03/28/2014  5:08:45 PM
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
    vector<int>::iterator it = v.begin();

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    * it = 10;
    cout << * (v.begin()) << endl;

    return 0;
}
