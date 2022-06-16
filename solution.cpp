#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol206;
using namespace std;

/*takeaways
  - modify a node's next to point to the previous node
  - when the cur will eventually become
    a nullptr. This is why we need a
    "prev" pointer to remember the very
    last node on the original list,
    which is the head of the reversed
    list.

*/

Node *Solution::reverseList(Node *head)
{
  Node *prev = nullptr, *cur = head, *next;

  while (cur != nullptr)
  {
    /* remember it as we will
       change cur->next to point
       to prev
    */
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  }

  return prev;
}