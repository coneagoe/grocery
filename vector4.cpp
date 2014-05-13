/*
 * =====================================================================================
 *
 *       Filename:  vector4.cpp
 *
 *    Description:  test vector element type
 *
 *        Version:  1.0
 *        Created:  04/10/2014  1:39:31 PM
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

class Base {
    public:
        Base():m_a(0) { cout << "Base()" << endl; }

        Base(const Base & data):m_a(data.m_a) { cout << "Base(const Base & data)" << endl; }
    private:
        int m_a;
};

class Inherit : public Base {
    public:
        Inherit():m_b(0) { cout << "Inherit()" << endl; }

        Inherit(const Inherit & data): Base(data), m_b(data.m_b) {
            cout << "Inherit(const Inherit & data)" << endl;
        }
    private:
        int m_b;
};

int main()
{
    vector<Base> v;

    Inherit a;
    cout << "----------------------" << endl;

    v.push_back(a);

    return 0;
}
