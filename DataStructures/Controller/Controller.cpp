//
//  Controller.cpp
//  DataStructures
//
//  Created by Tolman, Caiden on 1/30/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App."<< endl;
    testLinear();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}
void Contoller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
