// uses catch2
#include <catch2/catch_all.hpp>
#include "MyLibrary.h"


TEST_CASE( "Subtraction", "[basicops]" ) {
    REQUIRE( Subtract(1,0) == 1 );
    REQUIRE( Subtract(1,1) == 0 );
    REQUIRE( Subtract(-1,1) == -2 );
    REQUIRE( Subtract(20,2) == 18 );
}