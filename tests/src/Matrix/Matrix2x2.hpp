#pragma once

#include "MatrixCommon.hpp"
#include <catch2/catch_test_macros.hpp>



TEST_CASE("Matrix2x2 Testing", "[Matrix2x2]"){
    Sylver::Math::Matrix2x2f mat220 = Sylver::Math::Matrix2x2f(
        {0.0, 0.0}, 
        {0.0, 0.0}
    );

    REQUIRE(Sylver::Math::Matrix2x2f() == mat220);
    REQUIRE(Sylver::Math::Matrix2x2f(Sylver::Math::Vector2<>(1.0, 3.0), Sylver::Math::Vector2<>(2.0, 4.0)) == mat22a);
    REQUIRE(Sylver::Math::Matrix2x2f(1.0, 3.0, 2.0, 4.0) == mat22a);
    REQUIRE(Sylver::Math::Matrix2x2f(mat22a) == Sylver::Math::Matrix2x2f({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat23a) == Sylver::Math::Matrix2x2f({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat24a) == Sylver::Math::Matrix2x2f({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat32a) == Sylver::Math::Matrix2x2f({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat33a) == Sylver::Math::Matrix2x2f({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat34a) == Sylver::Math::Matrix2x2f({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat42a) == Sylver::Math::Matrix2x2f({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat43a) == Sylver::Math::Matrix2x2f({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2f(mat44a) == Sylver::Math::Matrix2x2f({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2f::Identity() == Sylver::Math::Matrix2x2f({1.0, 0.0}, {0.0, 1.0}));
    REQUIRE(mat22a[0] == Sylver::Math::Vector2<>(1.0, 3.0));
    REQUIRE(mat22a[1] == Sylver::Math::Vector2<>(2.0, 4.0));
    REQUIRE(mat22a * mat22a == Sylver::Math::Matrix2x2f(7.0, 15.0, 10.0, 22.0));
    REQUIRE(mat22a * mat23a == Sylver::Math::Matrix2x3f(9.0, 19.0, 12.0, 26.0, 15.0, 33.0));
    REQUIRE(mat22a * mat24a == Sylver::Math::Matrix2x4f(11.0, 23.0, 14.0, 30.0, 17.0, 37.0, 20.0, 44.0));
    REQUIRE(mat22a * 4.0 == Sylver::Math::Matrix2x2f(4.0, 12.0, 8.0, 16.0));
    REQUIRE(mat22a / 2.0 == Sylver::Math::Matrix2x2f(0.5, 1.5, 1.0, 2.0));
    REQUIRE(mat22a + mat22b == Sylver::Math::Matrix2x2f(8.0, 12.1, 7.4, 12.1));
    REQUIRE(mat22b - mat22a == Sylver::Math::Matrix2x2f(6.0, 6.1, 3.4, 4.1));
    
}
