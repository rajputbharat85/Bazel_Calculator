
#include "gtest/gtest.h"
 
#include "calc/calculator.h"

 
TEST(additionTest, returnAddition){
 
    float actual = addition(1,2);
    float expected = 3;
    EXPECT_EQ(expected,actual);
}


TEST(substractionTest, returnSubstraction){
    
    float actual = subraction(5,4);
    float expected = 1;
    EXPECT_EQ(expected,actual);
}
