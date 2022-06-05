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