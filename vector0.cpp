/*
 * =====================================================================================
 *
 *       Filename:  vector0.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:31:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  coneagoe coneagoe@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

class Data {
public:
    Data()
    {
        cout << "Data()" << endl;
    }

    Data(const int i): m_i(i)
    {
        cout << "Data(const int i): " << m_i << endl;
    }

    ~Data()
    {
        cout << "~Data(): " << m_i << endl;
    }

    Data(const Data & data): m_i(data.m_i)
    {
        cout << "Data(const Data & data): " << m_i << endl;
    }

private:
    int m_i;
};

int main ()
{
    {
        vector<Data> v;

        for(int i = 0; i < 3; i++) {
            v.push_back(Data(i));
        }
    }

    return 0;
}
