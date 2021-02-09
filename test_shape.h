#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>

namespace{
/**
 * @brief Test case for circle
 * 
 */
TEST(Circle,Area){
    Circle C_1(50);
    EXPECT_EQ(7850,C_1.area());
    EXPECT_EQ(314,C_1.circumference());}

/**
 * @brief Test case for triangle
 * 
 */
TEST(Triangle,Area){
    Triangle T_1(3,4,5);
    EXPECT_EQ(6,T_1.area());
    EXPECT_EQ(12,T_1.circumference());}

/**
 * @brief Test case for rectangle
 * 
 */
TEST(Rectangle,Area){
    Rectangle R_1(6,5);
    EXPECT_EQ(30,R_1.area());
    EXPECT_EQ(22,R_1.circumference());}
}