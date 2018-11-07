#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"
#include <string>
#include <vector>

void Test::runTests()
{
  std::string p = "PASSED!\n";
  std::string f = "FAILED!\n";
  std::cout << "Test 1: addFront returns correct size after multiple adds: " << ((test1()) ? p : f);
  std::cout << "Test 2: addBack returns correct size after multiple adds: " << ((test2()) ? p : f);
  std::cout << "Test 3: removeFront returns correct size after multiple adds and multiple removes: " << ((test3()) ? p : f);
  std::cout << "Test 4: removeBack Returns correct size after multiple adds and multiple removes: " << ((test4()) ? p : f);
  std::cout << "Test 5: addFront returns correct size after one add: " << ((test5()) ? p : f);
  std::cout << "Test 6: addBack returns correct size after one add: " << ((test6()) ? p : f);
  std::cout << "Test 7: removeFront returns correct size after one add and one remove: " << ((test7()) ? p : f);
  std::cout << "Test 8: removeBack returns correct size after one add and one remove: " << ((test8()) ? p : f);
  std::cout << "Test 9: isEmpty returns true for an empty list: " << ((test9()) ? p : f);
  std::cout << "Test 10: isEmpty returns true after 1 add and 1 remove: " << ((test10()) ? p : f);
  std::cout << "Test 11: isEmpty returns false for a nonempty list: " << ((test11()) ? p : f);
  std::cout << "Test 12: isEmpty returns true for an equal amount of adds and removes: " << ((test12()) ? p : f);
  std::cout << "Test 13: isEmpty returns false after one add: " << ((test13()) ? p : f);
  std::cout << "Test 14: a list created from multiple addFront is equal to a list with multiple addBack in reverse: " << ((test14()) ? p : f);
  std::cout << "Test 15: toVector creates correct vector: " << ((test15()) ? p : f);
}

bool Test::test1()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  return (l.size() == 8);
}

bool Test::test2()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  return (l.size() == 8);
}

bool Test::test3()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  for (int i = 0; i < 3; i++)
  {
    l. removeFront();
  }
  return (l.size() == (5));
}

bool Test::test4()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  for (int i = 0; i < 3; i++)
  {
    l. removeBack();
  }
  return (l.size() == (5));
}

bool Test::test5()
{
  LinkedListOfInts l;
  l.addFront(1);
  return(l.size() == 1);
}

bool Test::test6()
{
  LinkedListOfInts l;
  l.addBack(1);
  return(l.size() == 1);
}

bool Test::test7()
{
  LinkedListOfInts l;
  l.addFront(1);
  l.removeFront();
  return(l.size() == 0);
}

bool Test::test8()
{
  LinkedListOfInts l;
  l.addBack(1);
  l.removeBack();
  return(l.size() == 0);
}

bool Test::test9()
{
  LinkedListOfInts l;
  return(l.isEmpty());
}

bool Test::test10()
{
  LinkedListOfInts l;
  l.addFront(1);
  l.removeFront();
  return(l.isEmpty());
}

bool Test::test11()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  return(!l.isEmpty());
}

bool Test::test12()
{
  LinkedListOfInts l;
  for (int i = 0; i < 8; i++)
  {
    l.addFront(1);
  }
  for (int i = 0; i < 8; i++)
  {
    l.removeBack();
  }
  return(l.isEmpty());
}

bool Test::test13()
{
  LinkedListOfInts l;
  l.addFront(1);
  return(!l.isEmpty());
}

bool Test::test14()
{
  LinkedListOfInts l1;
  LinkedListOfInts l2;
  l1.addFront(1);
  l1.addFront(2);
  l2.addBack(2);
  l2.addBack(1);
  return(l1.toVector() == l2.toVector());
}

bool Test::test15()
{
  LinkedListOfInts l;
  l.addFront(1);
  l.addFront(2);
  std::vector<int> v{2, 1};
  return (l.toVector() == v);
}
