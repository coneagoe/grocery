/*
 * =====================================================================================
 *
 *       Filename:  list0.cpp
 *
 *    Description:  cost time of empty() and size()
 *
 *        Version:  1.0
 *        Created:  04/11/2014  5:35:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  coneagoe
 *   Organization:  
 *
 * =====================================================================================
 */

#include <time.h>
#include <list>
#include <iostream>

using namespace std;

int main() {
    list<int> l;

    for(int i; i < 100000; i++)
        l.push_back(1);

    clock_t start = clock();
    l.size();
    clock_t end = clock();
    cout << end - start << endl;

    start = clock();
    l.empty();
    end = clock();
    cout << end - start << endl;

    return 0;
}
