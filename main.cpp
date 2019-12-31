#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  vector<int> replaceElements(vector<int> &arr) {
    if (arr.size() == 1) {
      arr[0] = -1;
      return arr;
    }
    int mx = arr[arr.size() - 1];
    arr[arr.size() - 1] = -1;
    for (int i = arr.size() - 2; i >= 0; --i) {
      int tmp = arr[i];
      arr[i] = mx;
      mx = max(mx, tmp);
    }
    return arr;
  }
};

void test1() {
  vector<int> v1{17, 18, 5, 4, 6, 1};

  cout << "18,6,6,6,1,-1 ? " << Solution().replaceElements(v1) << endl;
}

void test2() {

}

void test3() {

}