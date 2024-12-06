#include<iostream>
using namespace std;

char before(char x){
	if(x<'A'||x>'Z') return '0';
	if(x == 'A') return 'Z';
	return x-1;
}