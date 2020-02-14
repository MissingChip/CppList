#include <stdio.h>
#include <vector>
#include "list.h"

using namespace std;

int main(void){
    List<int> l;
    l.push_back(3);
    printf("pushed back 3\n");
    printf("pop_back %d\n", l.pop_back());
    l.push_front(4);
    printf("pushed front 4\n");
    printf("pop_front %d\n", l.pop_front());
    l.push_back(6);
    printf("push 6");
    l.push_back(4);
    printf(" 4");
    l.push_back(18);
    
    printf(" 18\n");
    printf("get 0,1 %d,%d\n", l.get(0), l.get(1));
    printf("seek(0), next %d ", l.seek(0));
    printf("%d\n", l.next());
    l[2] = 7;
    printf("\n");
    printf("seek(0), %d\n", l.seek(0));
    printf("\n");
    printf("l[0], %d\n", l[0]);
    l.next() = 17;
    printf("\n");
    printf("seek(1), %d\n", l.seek(1));
    printf("\n");
    printf("%s\n", l.to_string().c_str());
    l.insert(0, 19);
    printf("%s\n", l.to_string().c_str());
    l.insert(2, 20);
    printf("%s\n", l.to_string().c_str());
    l.insert(4, 21);
    printf("%s\n", l.to_string().c_str());
    l.insert(6, 43);
    printf("%s\n", l.to_string().c_str());
    vector<int> v = l.to_vector();
    printf("\n");
    printf("%s\n", to_string(v).c_str());
    printf("%s\n", l.to_string().c_str());
}
