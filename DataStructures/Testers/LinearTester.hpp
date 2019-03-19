//
//  LinearTester.hpp
//  DataStructures
//
//  Created by Tolman, Caiden on 2/13/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/Tools/FileController.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Queue.hpp"
#include "../Model/Linear/Stack.hpp"
#include "..Model/Linear/Array.hpp"
#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
};
#endif /* LinearTester_hpp */
