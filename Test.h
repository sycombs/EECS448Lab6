/**
* @file: LinkedListOfInts.h
* @author: Sydney Combs
* @date: 10/31/2018
* @brief: Tester class for LinkedListOfInts
*/

#ifndef TEST_H
#define TEST_H

class Test
{
  public:
    /**
      Tests to write:
        1. Constructor creates an empty list
        2. Destructor deletes a list with (0), (1), and (>1) items.
        3. isEmpty returns correct value.
        4. size returns correct value for empty list.
        5. size returns correct value after addFront.
        6. size returns correct value after addBack.
        7. size returns correct value after addFront/addBack and removeBack.
        8. size returns correct value after addFront/addBack and removeFront.
        9. search returns correct value.
        10. toVector returns correct value.
    */
    /**
      Current Tests:
        1. addFront
        2. addBack
        3. removeFront
    */
    void runTests();
    bool test1(); //addFront returns correct size after multiple adds
    bool test2(); //addBack returns correct size after multiple adds
    bool test3(); //removeFront returns correct size after multiple adds and multiple removes
    bool test4(); //removeBack returns correct size after multiple adds and multiple removes
    bool test5(); //addFront returns correct size after 1 add
    bool test6(); //addBack returns correct size after 1 add
    bool test7(); //removeFront returns correct size after 1 add and 1 remove
    bool test8(); //removeBack returns correct size after 1 add and 1 remove
    bool test9(); //isEmpty returns true on a new list
    bool test10(); //isEmpty returns true after 1 add and 1 remove
    bool test11(); //isEmpty returns false for a nonempty list
    bool test12(); //isEmpty returns true for multiple equal adds and removes
    bool test13(); //isEmpty returns false after 1 add
    bool test14(); // addFronts == addBacks reversed
    bool test15(); //isVector returns correct vector
};

#endif
