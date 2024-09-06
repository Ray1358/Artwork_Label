//
// CopyRight 2024
//


#ifndef ARTWORK_H
#define ARTWORK_H

#include "Artist.h"
#include <string>

class Artwork {
public:
    // Default constructor
    Artwork();

    // Second constructor to initialize private fields
    Artwork(string title, int yearCreated, Artist artist);

    string GetTitle() const;

    int GetYearCreated() const;

    void PrintInfo() const;

private:
    string title;
    int yearCreated;
    Artist artist;
};


#endif //ARTWORK_H
