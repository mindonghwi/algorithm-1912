// 1912.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<stdio.h>
int arData[100000]{};
int arMax[100000]{};
int main()
{
	int nLength(0);
	int nLastIndex(0);
	int nMax(0);
	scanf_s("%d", &nLength);

	for (int i = 0; i < nLength; i++)
	{
		scanf_s("%d", &arData[i]);
	}

	arMax[0] = arData[0];
	
	for (int i = 1; i < nLength; i++)
	{
		arMax[i] = arData[i];
		if (arMax[i-1] + arData[i] > arData[i])
		{
			arMax[i] = arMax[i - 1] + arData[i];
		}
	}
	nMax = arMax[0];
	for (int i = 1; i < nLength; i++)
	{
		if (nMax < arMax[i])
		{
			nMax = arMax[i];
		}
	}

	printf("%d\n", nMax);
	return 0;
}

