#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    };
    return count;
};

// void same_or_not(Node *head, Node *head2)
// {
//     Node *tmp = head;
//     Node *tmp2 = head2;
//     bool flag = true;
//     if (size(tmp) != size(tmp2))
//     {
//         flag = false;
//     }
//     else
//     {
//         while (tmp != NULL && tmp2 != NULL)
//         {
//             if (tmp->val != tmp2->val)
//             {
//                 flag = false;
//                 break;
//             };
//             tmp = tmp->next;
//             tmp2 = tmp2->next;
//         }
//     };
//     if (flag == true)
//     {
//         cout << "Same" << endl;
//     }
//     else
//     {
//         cout << "Not same" << endl;
//     }
// };

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    };
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    };
    tmp->next = newNode;
    newNode->prev = tmp;
    tail = newNode;
};

void revers_print(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    };
};

void palindrom(Node *head, Node *tail)
{
    bool flag = true;
    while (head != NULL && tail != NULL)
    {
        if (head->val != tail->val)
        {
            flag = false;
            break;
        };
        head = head->next;
        tail = tail->prev;
    };
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    };

    palindrom(head, tail);

    return 0;
}