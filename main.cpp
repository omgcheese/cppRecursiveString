//
//  main.cpp
//  cppRecursiveString
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void reversePrint(char* pt1, char* pt2){
    if(pt1 == pt2){
        cout << "Reversed word is: ";
    }
    else {
        reversePrint(++pt1, pt2);
        cout << *(--pt1);
        
    }
}

int main() {
    string example;
    cout << "Type any words:" << endl;
    cin >> example;
    
    char* pt1 = &example[0];
    char* pt2 = &example[example.size()];
    
    reversePrint(pt1, pt2);
    
    
    return 0;
}
