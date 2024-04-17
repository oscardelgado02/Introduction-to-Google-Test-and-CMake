#include "../src/Example.hpp"

#include <gtest/gtest.h>

int x = 42;

//Test 1 : OK
TEST(ExampleTests, MAC){
    int y = 16;
    int value = 100;
    int* sum = &value;
    int oldSum = *sum;
    int expectedNewSum = oldSum + x * y;
    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );
    EXPECT_EQ(
        expectedNewSum,
        *sum
    );
}

//Test 2 : OK
TEST(ExampleTests2, Square){
    int expectedSquare = x*x;
    EXPECT_EQ(
        expectedSquare,
        Square(x)
    );
}

//Test 3 : FAIL
TEST(ExampleTests2, BadSquareImplementation){
    int expectedSquare = x*x;
    EXPECT_EQ(
        expectedSquare,
        BadSquareImplementation(x) //Not correct
    ) << "Square was implemented incorrectly! stderr= " << stderr;
}

//Test 4 : OK
TEST(ExampleTests3, RunCars){
    EXPECT_EQ(
        0,
        RunCars()
    );
}

/*
int sideEffect = 42;
bool f(){
    sideEffect = 16;
    return false;
}

TEST(ExampleTests, DemonstrateGTestMacros){
    //Test 1
    EXPECT_TRUE(true);

    //Test 2
    EXPECT_EQ(true, true);

    //Test 3
    EXPECT_EQ(true, f()) << "sideEffect= " << sideEffect;

    //Test 4
    for(int i=0; i<16;i++){
        EXPECT_EQ(true, f()) << "i= " << i;
    }
}
*/

/*
struct ExampleTests : public ::testing::Test{
    int* x;

    int GetX(){
        return *x;
    }

    virtual void SetUp() override{
        fprintf(stderr, "Hello, Wolrd!\n");
        x = new int(42);
    }

    virtual void TearDown() override{
        delete x;
    }
}
*/