#include <iostream>
using namespace std;

// Node 구조체 정의
struct Node {
    int data;
    Node* prev;
    Node* next;

    // 생성자
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// 원형 이중 연결 리스트 클래스 정의
class CircularDoublyLinkedList {
private:
    Node* head;
    int size;

public:
    // 생성자
    CircularDoublyLinkedList() : head(nullptr), size(0) {}

    // 리스트에 새로운 노드 삽입
    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            head->prev = head;
            head->next = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
        }
        size++;
    }

    // 리스트에서 K번째 노드 제거하고 해당 노드의 데이터 반환
    int removeKthNode(int k) {
        if (size == 0) {
            cerr << "List is empty." << endl;
            return -1;
        }
        if (k <= 0) {
            cerr << "Invalid value of k." << endl;
            return -1;
        }

        Node* current = head;
        for (int i = 1; i < k; i++) {
            current = current->next;
        }

        int removedData = current->data;
        current->prev->next = current->next;
        current->next->prev = current->prev;
        if (current == head) {
            head = current->next;
        }
        delete current;
        size--;

        return removedData;
    }

    // (N, K)-요세푸스 순열 출력
    void josephusPermutation(int n, int k) {
        cout << "(" << n << ", " << k << ")-요세푸스 순열: <";
        for (int i = 0; i < n; i++) {
            int removedData = removeKthNode(k);
            cout << removedData;
            if (i != n - 1) {
                cou t << ", ";
            }
        }
        cout << ">" << endl;
    }
};

int main() {
    CircularDoublyLinkedList circularList;

    int N, K;
    cout << "Enter N and K: ";
    cin >> N >> K;

    // 원형 이중 연결 리스트에 데이터 삽입
    for (int i = 1; i <= N; i++) {
        circularList.insert(i);
    }

    // (N, K)-요세푸스 순열 출력
    circularList.josephusPermutation(N, K);

    return 0;
}
