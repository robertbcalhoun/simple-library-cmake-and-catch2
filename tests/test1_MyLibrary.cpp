// uses catch2
#include <catch2/catch_all.hpp>
#include "MyLibrary.h"


TEST_CASE( "Addition", "[basicops]" ) {
    REQUIRE( Add(1,0) == 1 );
    REQUIRE( Add(1,1) == 2 );
    REQUIRE( Add(-1,1) == 0 );
    REQUIRE( Add(20,2) == 22 );
}
