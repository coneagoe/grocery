/*
 * =====================================================================================
 *
 *       Filename:  vector3.cpp
 *
 *    Description:  addresses of elements
 *
 *        Version:  1.0
 *        Created:  04/ 3/2014  4:16:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  coneagoe
 *   Organization:
 *
 * =====================================================================================
 */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);

    cout << hex << &v << endl;
    cout << hex << &v[0] << endl;

    while(1) {}

    return 0;
}
