#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol206;

/*
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
*/

tuple<Node *, string>
testFixture1()
{
  auto l = new Node(1);
  l->next = new Node(2);
  l->next->next = new Node(3);
  l->next->next->next = new Node(4);
  l->next->next->next->next = new Node(5);

  return make_tuple(l, "5->4->3->2->1");
}

void test1()
{
  auto f = testFixture1();
  Solution sol;

  cout << "Expect to see : " << get<1>(f) << endl;

  auto l = sol.reverseList(get<0>(f));
  string s;

  while (l != nullptr)
  {
    s += to_string(l->val) + "->";
    l = l->next;
  }

  if (s.back() == '>')
    s.pop_back(), s.pop_back();

  cout << s << endl;
}

main()
{
  test1();

  return 0;
}