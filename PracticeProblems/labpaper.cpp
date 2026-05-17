#include<iostream>
#include<vector>
#include<stdexcept>
#include<cstring>
using namespace std;
class MatrixEx : public exception{
	string msg;
	public:
		MatrixEx(string m) : msg(m){}
			const string what() const override{
				return msg;
			}
};
template<typename T>
class Matrix{
	vector <T> m;
	int row,col;
	public:
		Matrix(int r, int c) : row(r), col(c){}
		
		 Matrix operator [](Matrix &i){
		 	return Matrix[i];
		 }
		 Matrix operator +(const Matrix &obj){
		 	T add=0;
		 	for(int i=0;i<row;i++)
		 	{
		 		for(int j=0;<col;j++)
		 		add=m[j] + obj[j];
			 }
		 }
	
	void push(T v){
		s.push_back(v);
	}
	void pop()
	{
		s.pop_back();
	}
	friend peek(Stack &s){
		cout
	}
};
