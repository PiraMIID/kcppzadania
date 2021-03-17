//
// Created by dszma on 17.03.2021.
//

#include <stdio.h>
#include<iostream>
#include <cstring>
using  namespace std;

void a() { cout <<"a "<< endl;}
void b() { cout <<"b "<< endl;}
void c() { cout <<"c "<< endl; }
extern "C" void d() {    printf("d \n");}
extern "C" void e() {    printf("e \n");}


int main(int argc, char *arg[]) {
    cout <<"Liczba argumentow: "<< argc << endl;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(arg[i] , "a")) { a(); }
        if (!strcmp(arg[i] , "b")) { b(); }
        if (!strcmp(arg[i] , "c")) { c(); }
        if (!strcmp(arg[i] , "d")) { d(); }
        if (!strcmp(arg[i] , "e")) { e(); }

    }
    return 1;
}

