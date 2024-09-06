//
// CopyRight 2024
//


#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include <iostream>
#include <string>
using namespace std;

class Artist {
public:
    // Default constructor
    Artist();

    // Second constructor to initialize private fields
    Artist(string artistName, int birthYear, int deathYear);

    string GetName() const;

    int GetBirthYear() const;

    int GetDeathYear() const;

    void PrintInfo() const;

private:
    string artistName;
    int birthYear;
    int deathYear;
};



#endif //ARTIST_H
