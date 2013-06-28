#ifndef _AVERANGE_H_
#define _AVERANGE_H_

#include <iostream>

using namespace std;

class Averange {
	private:
		
		int iCount;
		int iTotal;
		float fResult;
	public:
		
		Averange();
		void vPut();
		void vCompute();
		void vPrintResult();
};

#endif