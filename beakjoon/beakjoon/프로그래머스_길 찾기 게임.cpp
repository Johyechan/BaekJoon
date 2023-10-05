#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스, 수업 들은 것

vector<int> pre, post;

struct node {
    int index;
    node* left;
    node* right;
};

node* makeTree(vector<vector<int>>& nodeinfo, int start, int end) {
    if (start > end) return NULL;
    // 루트노드 찾기
    int maxHeight = nodeinfo[start][1];
    int curNodeIdx = start;
    // 어떻게 루트노드의 인덱스를 curNodeIdx 에 넣을까 ?
    for (int i = start + 1; i <= end; i++)
    {
        if (maxHeight < nodeinfo[i][1])
        {
            maxHeight = nodeinfo[i][1];
            curNodeIdx = i;
        }
    }
    node * nd = new node();
    nd->index = nodeinfo[curNodeIdx][2];
    nd->left = makeTree(nodeinfo, start, curNodeIdx - 1);// 채워보자
    nd->right = makeTree(nodeinfo, curNodeIdx + 1, end);// 채워보자
    return nd;
}

void preOrder(node* nd) {
    if (nd == NULL) return;
    pre.push_back(nd->index);
    preOrder(nd->left);
    preOrder(nd->right);
}

void postOrder(node* nd) {
    if (nd == NULL) return;
    postOrder(nd->left);
    postOrder(nd->right);
    post.push_back(nd->index);
}


vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
    vector<vector<int>> answer;

    // 노드에 인덱스 붙이기
    for (int i = 0; i < nodeinfo.size(); i++)
        nodeinfo[i].push_back(i + 1);

    // x축을 기준으로 오름차순 정렬
    sort(nodeinfo.begin(), nodeinfo.end());

    // 트리 만들기
    node* tree = makeTree(nodeinfo, 0, nodeinfo.size() - 1);

    preOrder(tree);
    postOrder(tree);

    answer.push_back(pre);
    answer.push_back(post);
    return answer;
}