#include <bits/stdc++.h>
using namespace std;
class PriorityQueue{
private:
    vector<int>elements;
    vector<int>priorities;
public:
    void insert(int element,int priority) {
        elements.push_back(element);
        priorities.push_back(priority);
    }
    int getHighestPriorityIndex() {
        if (elements.empty()) {
            return 0;
        }
        int maxPriority=priorities[0];
        int maxIndex=0;
        for (int i=1;i<priorities.size();i++) {
            if (priorities[i]>maxPriority) {
                maxPriority=priorities[i];
                maxIndex=i;
            }
        }
        return maxIndex;
    }
    int remove() {
        if (elements.empty()) {
            return 0;
        }
        int maxIndex=getHighestPriorityIndex();
        int highestPriorityElement=elements[maxIndex];

        elements.erase(elements.begin()+maxIndex);
        priorities.erase(priorities.begin()+maxIndex);
        return highestPriorityElement;
    }
    int peek() {
        if (elements.empty()) {
            return 0;
        }
        int maxIndex=getHighestPriorityIndex();
        return elements[maxIndex];
    }
    bool isEmpty() {
        return elements.empty();
    }
    void display() {
        if (elements.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        cout << "Priority Queue :" << endl;
        for (int i=0;i<elements.size();++i) {
            cout<<elements[i]<<": "<<priorities[i]<<endl;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(10,3);
    pq.insert(20,1);
    pq.insert(30,5);
    pq.insert(40,2);
    pq.insert(50,4);

    pq.display();

    try {
        cout<<"Highest Priority Element: "<<pq.peek()<<endl;
    } catch (const exception &e) {
        cout<<e.what()<<endl;
    }

    try {
        cout<<"Removed Element: "<<pq.remove()<<endl;
    } catch (const exception &e) {
        cout<<e.what()<<endl;
    }

    pq.display();

    return 0;
}
