#include "gtest/gtest.h"
 
#include "calc/add.h"
#include "calc/sub.h"
#include "calc/mul.h"
#include "calc/div.h"
 
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

