/*

https://leetcode.com/problems/clone-graph/

// Definition for a Node.

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

*/

class Solution {
public:
    Node* cloneGraph(Node* srcNode) {

        if (srcNode == NULL) { // graph is empty
            return NULL;
        }

        unordered_map<Node*, Node*> cloneMap; // to store a mapping b/w nodes in the graph and their clones.
        queue<Node*> q; // to track vertices which have been cloned but the neighborList of the clone isn't populated.

        // create a clone of 'srcNode'

        Node* srcClone = new Node(srcNode->val);
        cloneMap[srcNode] = srcClone;
        q.push(srcNode);

        while (!q.empty()) {

            Node* front = q.front();
            q.pop();

            Node* frontClone = cloneMap[front];

            vector<Node*> neighborsList = front->neighbors;
            for (Node* neighbor : neighbourList) {
                if (cloneMap.find(neighbor) == cloneMap.end()) {
                    // neighbor is not yet cloned / visited
                    Node* neighborClone = new Node(neighbor->val);
                    cloneMap[neighbor] = neighborClone;
                    q.push(neighbor);
                }
                frontClone->neighbors.push_back(cloneMap[neighbor]);
            }

        }

        // return the clone of 'node'

        return srcClone; // return cloneMap[srcNode];

    }
};