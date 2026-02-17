//Q2
#include<iostream>
using namespace std;
	class Darray{
		int *p;
		int size,C;
		public:
			Darray(int s)
			{
				C=0;
				if(s<=0)
				return ;
				else
				{
				size =s;
				p = new int[size];
				for (int i=0; i<size; i++)
				{
					p[i] = 0;
				}
			} }
			void add(int v)
			{
				if(!full()) {
				p[C] = v;
				C++; }
				else
				resize();
				}
			void resize	()
			{
				if(size==C)
				{
				int *t ;
				t= new int[size + 10];
				for(int i =0;i<size;i++)
				t[i] = p[i];
				delete[] p;
				p=t;
				
}				}	
			int Asize()
			{
				return size;
				}	
			bool full()
			{
				return C==size;
			}
			~Darray(){ delete[] p;}
	};
	int main()
	{
		Darray a1(6);
		a1.add(79);
		cout<<
		a1.Asize();
		return 0;
	}
