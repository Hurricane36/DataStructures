//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Tolman, Caiden on 2/13/19.
//  Copyright © 2019 Caiden.Tolman. All rights reserved.
//

#include "LinearTester.hpp"
void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/ctol0033/Downloads/Resources/crime.csv");
    
    crimeTimerSTL.stopTimer();
    createTimeroOOP.stopTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/ctol0033/Downloads/Resources/crime.csv");
    createTimerOOP.stopTimer();
    
    createTimerSTL.displayInformation():
    crimeTimerOOP.displayInformation();
    cout<< "A difference of " << crimeTimerOOP.getTimeinMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/ctol0033/Downloads/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/ctol0033/Downloads/Resources/music.csv")
    musicOPP.stopTimer();
    
    muiscSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOPP.getTimeinMIcroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    cout << "This is the Stl Read time: " << endl;
    musicStl.displayInformatiom();
    cout << "This is the OOP Node Read Time: " << endl;
   
    
    crimeTimperOOP.reesetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer()
    
}
