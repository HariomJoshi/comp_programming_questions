#include<bits/stdc++.h>
using namespace std;

// following is the comparator for creating the min heap on cpp, 
// the priority queue is of pairs {distance, node}
// it sorts firstly on basis of distance and if equal then smaller value of node is given priority

class Compare {
public:
	bool operator()(pair<int,int> &below, pair<int, int> &above)
	{
		if (below.first > above.first) {
			return true;
		}
		else if (below.first == above.first
				&& below.second > above.second) {
			return true;
		}

		return false;
	}
};