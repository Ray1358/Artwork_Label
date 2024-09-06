//
// CopyRight 2024
//
#include "Artist.h"
#include "Artwork.h"

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    void testAll() {
        // Artist class
        Artist artist1;
        TS_ASSERT_EQUALS(artist1.GetName(), "unknown");
        TS_ASSERT_EQUALS(artist1.GetBirthYear(), -1);
        TS_ASSERT_EQUALS(artist1.GetDeathYear(), -1);
        artist1.PrintInfo();
        Artist artist2("Vincent van Gogh", 1853, 1890);
        TS_ASSERT_EQUALS(artist2.GetName(), "Vincent van Gogh");
        TS_ASSERT_EQUALS(artist2.GetBirthYear(), 1853);
        TS_ASSERT_EQUALS(artist2.GetDeathYear(), 1890);
        artist2.PrintInfo();

        // Artwork class
        Artwork artwork1;
        TS_ASSERT_EQUALS(artwork1.GetTitle(), "unknown");
        TS_ASSERT_EQUALS(artwork1.GetYearCreated(), -1);
        artwork1.PrintInfo();
        Artwork artwork2("Starry Night", 1889, artist2);
        TS_ASSERT_EQUALS(artwork2.GetTitle(), "Starry Night");
        TS_ASSERT_EQUALS(artwork2.GetYearCreated(), 1889);
        artwork2.PrintInfo();
    }


};

#endif //NEWCXXTEST_H
