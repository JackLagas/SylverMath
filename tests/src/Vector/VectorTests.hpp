#pragma once

#include <Vector.hpp>

#include <catch2/catch_test_macros.hpp>

#include <algorithm>


static Sylver::Math::Vector2<> vec20 = {0.0, 0.0};
static Sylver::Math::Vector2<> vec2a = {1.0, 2.0};
static Sylver::Math::Vector2<> vec2b = {7.0, 9.0};

static Sylver::Math::Vector3<> vec30 = {0.0, 0.0, 0.0};
static Sylver::Math::Vector3<> vec3a = {1.0, 2.0, 3.0};
static Sylver::Math::Vector3<> vec3b = {7.0, 9.0, 11.3};

static Sylver::Math::Vector4<> vec40 = {0.0, 0.0, 0.0, 0.0};
static Sylver::Math::Vector4<> vec4a = {1.0, 2.0, 3.0, 4.0};
static Sylver::Math::Vector4<> vec4b = {7.0, 9.0, 11.3, 3.4};

TEST_CASE("Vector test", "[Vector]"){
    REQUIRE(sizeof(Sylver::Math::Vector2f) == 2 * sizeof(Sylver::F32));
    REQUIRE(sizeof(Sylver::Math::Vector3f) == 3 * sizeof(Sylver::F32));
    REQUIRE(sizeof(Sylver::Math::Vector4f) == 4 * sizeof(Sylver::F32));
    REQUIRE(sizeof(Sylver::Math::Vector2d) == 2 * sizeof(Sylver::F64));
    REQUIRE(sizeof(Sylver::Math::Vector3d) == 3 * sizeof(Sylver::F64));
    REQUIRE(sizeof(Sylver::Math::Vector4d) == 4 * sizeof(Sylver::F64));
}
TEST_CASE("Vector2<> tests", "[Vector2<>]"){
    REQUIRE(Sylver::Math::Vector2<>() == vec20);
    REQUIRE(Sylver::Math::Vector2<>(0.0, 0.0) == vec20);
    REQUIRE(Sylver::Math::Vector2<>(vec20) == vec20);
    REQUIRE(Sylver::Math::Vector2<>(vec3a) == vec2a);
    REQUIRE(Sylver::Math::Vector2<>(vec4a) == vec2a);
    REQUIRE(vec2a[0] == 1.0);
    REQUIRE(vec2a[1] == 2.0);
    REQUIRE(vec2a + vec2b == Sylver::Math::Vector2<>(8.0, 11.0));
    REQUIRE(vec2b - vec2a == Sylver::Math::Vector2<>(6.0, 7.0));
    REQUIRE(vec2b * 2.0 == Sylver::Math::Vector2<>(14.0, 18.0));
    REQUIRE(vec2b / 2.0 == Sylver::Math::Vector2<>(3.5, 4.5));
    REQUIRE(2.0 * vec2b == Sylver::Math::Vector2<>(14.0, 18.0));
    REQUIRE(std::abs(vec2a * vec2b - 25.0) < 0.001);
}
TEST_CASE("Vector3<> tests", "[Vector3<>]"){
    REQUIRE(Sylver::Math::Vector3<>() == vec30);
    REQUIRE(Sylver::Math::Vector3<>(0.0, 0.0, 0.0) == vec30);
    REQUIRE(Sylver::Math::Vector3<>(vec20) == vec30);
    REQUIRE(Sylver::Math::Vector3<>(vec3a) == vec3a);
    REQUIRE(Sylver::Math::Vector3<>(vec4a) == vec3a);
    REQUIRE(vec3a[0] == 1.0);
    REQUIRE(vec3a[1] == 2.0);
    REQUIRE(vec3a[2] == 3.0);
    REQUIRE(vec3a + vec3b == Sylver::Math::Vector3<>(8.0, 11.0, 14.3));
    REQUIRE(vec3b - vec3a == Sylver::Math::Vector3<>(6.0, 7.0, 8.3));
    REQUIRE(vec3b * 2.0 == Sylver::Math::Vector3<>(14.0, 18.0, 22.6));
    REQUIRE(vec3b / 2.0 == Sylver::Math::Vector3<>(3.5, 4.5, 5.65));
    REQUIRE(2.0 * vec3b == Sylver::Math::Vector3<>(14.0, 18.0, 22.6));
    REQUIRE(std::abs(vec3a * vec3b - 58.9) < 0.001);
}
TEST_CASE("Vector4<> tests", "[Vector4<>]"){
    REQUIRE(Sylver::Math::Vector4<>() == vec40);
    REQUIRE(Sylver::Math::Vector4<>(0.0, 0.0, 0.0, 0.0) == vec40);
    REQUIRE(Sylver::Math::Vector4<>(vec20) == vec40);
    REQUIRE(Sylver::Math::Vector4<>(vec3a) == Sylver::Math::Vector4<>(1.0, 2.0, 3.0, 0.0));
    REQUIRE(Sylver::Math::Vector4<>(vec4a) == vec4a);
    REQUIRE(vec4a[0] == 1.0);
    REQUIRE(vec4a[1] == 2.0);
    REQUIRE(vec4a[2] == 3.0);
    REQUIRE(vec4a[3] == 4.0);
    REQUIRE(vec4a + vec4b == Sylver::Math::Vector4<>(8.0, 11.0, 14.3, 7.4));
    REQUIRE(vec4b - vec4a == Sylver::Math::Vector4<>(6.0, 7.0, 8.3, -0.6));
    REQUIRE(vec4b * 2.0 == Sylver::Math::Vector4<>(14.0, 18.0, 22.6, 6.8));
    REQUIRE(vec4b / 2.0 == Sylver::Math::Vector4<>(3.5, 4.5, 5.65, 1.7));
    REQUIRE(2.0 * vec4b == Sylver::Math::Vector4<>(14.0, 18.0, 22.6, 6.8));
    REQUIRE(std::abs(vec4a * vec4b - 72.5) < 0.001);
}
