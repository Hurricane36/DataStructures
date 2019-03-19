//
//  Timer.hpp
//  DataStructures
//
//  Created by Tolman, Caiden on 2/5/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <time.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>

class Timer
{
private:
    clock_t executionTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
    
};
#endif /* Timer_hpp */
