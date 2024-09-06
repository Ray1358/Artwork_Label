//
// CopyRight 2024
//

#include "Artwork.h"
#include <iostream>

// Default constructor
Artwork::Artwork() {
    title = "unknown";
    yearCreated = -1;
}

// Second constructor to initialize private fields
Artwork::Artwork(string title, int yearCreated, Artist artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

string Artwork::GetTitle() const {
    return title;
}

int Artwork::GetYearCreated() const {
    return yearCreated;
}

void Artwork::PrintInfo() const {
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated << endl;
}
