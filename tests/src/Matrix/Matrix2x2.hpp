#pragma once

#include <catch2/catch_test_macros.hpp>

#include "MatrixCommon.hpp"

TEST_CASE("Matrix2x2 Testing", "[Matrix2x2]"){

    REQUIRE(Sylver::Math::Matrix2x2() == mat220);
    REQUIRE(Sylver::Math::Matrix2x2(Sylver::Math::Vector2(1.0, 3.0), Sylver::Math::Vector2(2.0, 4.0)) == mat22a);
    REQUIRE(Sylver::Math::Matrix2x2(1.0, 3.0, 2.0, 4.0) == mat22a);
    REQUIRE(Sylver::Math::Matrix2x2(mat22a) == Sylver::Math::Matrix2x2({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat23a) == Sylver::Math::Matrix2x2({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat24a) == Sylver::Math::Matrix2x2({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat32a) == Sylver::Math::Matrix2x2({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat33a) == Sylver::Math::Matrix2x2({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat34a) == Sylver::Math::Matrix2x2({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat42a) == Sylver::Math::Matrix2x2({1.0, 3.0}, {2.0, 4.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat43a) == Sylver::Math::Matrix2x2({1.0, 4.0}, {2.0, 5.0}));
    REQUIRE(Sylver::Math::Matrix2x2(mat44a) == Sylver::Math::Matrix2x2({1.0, 5.0}, {2.0, 6.0}));
    REQUIRE(Sylver::Math::Matrix2x2::Identity() == Sylver::Math::Matrix2x2({1.0, 0.0}, {0.0, 1.0}));
    REQUIRE(mat22a[0] == Sylver::Math::Vector2(1.0, 3.0));
    REQUIRE(mat22a[1] == Sylver::Math::Vector2(2.0, 4.0));
    REQUIRE(mat22a * mat22a == Sylver::Math::Matrix2x2(7.0, 15.0, 10.0, 22.0));
    REQUIRE(mat22a * mat23a == Sylver::Math::Matrix2x3(9.0, 19.0, 12.0, 26.0, 15.0, 33.0));
    REQUIRE(mat22a * mat24a == Sylver::Math::Matrix2x4(11.0, 23.0, 14.0, 30.0, 17.0, 37.0, 20.0, 44.0));
    REQUIRE(mat22a * 4.0 == Sylver::Math::Matrix2x2(4.0, 12.0, 8.0, 16.0));
    REQUIRE(mat22a / 2.0 == Sylver::Math::Matrix2x2(0.5, 1.5, 1.0, 2.0));
    REQUIRE(mat22a + mat22b == Sylver::Math::Matrix2x2(8.0, 12.1, 7.4, 12.1));
    REQUIRE(mat22b - mat22a == Sylver::Math::Matrix2x2(6.0, 6.1, 3.4, 4.1));
}
