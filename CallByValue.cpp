/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on August 30, 2017, 11:40 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int add(int Number1, int Number2);

/*
 * 
 */
int main(int argc, char** argv) {

    int Number1(0), Number2(0);
    int results(0);
   
    cout << "Enter two Numbers: ";
    cin >> Number1 >> Number2;

    cout << Number1 << " " << &Number1 << " ";
    cout << Number2 << " " << &Number2;
    cout << endl;

    results = add(Number1, Number2);

    cout << Number1 << " " << &Number1 << " ";
    cout << Number2 << " " << &Number2;
    cout << endl;

    cout << Number1 << " + " << Number2 << " = " << results << endl;

    return 0;
}



int add(int Number1, int Number2) {
    int something;
    
    something = Number1 + Number2;
    cout << Number1 << " " << &Number1 << " ";
    cout << Number2 << " " << &Number2;
    cout << endl;
    Number1 = 100;

    return something;
}

