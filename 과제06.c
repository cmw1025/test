//과제 06 21300764 최민우
//주어진 두 개의 양의 정수의 최소 공배수를 구하라
#include <stdio.h>

main()
{
	int n, m;//변수 선언, 초기화
	int max, min;
	int i = 1;

	printf("임의의 두개의 정수를 입력하시오\n");
	scanf("%d %d", &n, &m);
	
	if (n > m)//큰 정수의 배수를 작은 정수와 나누어 나머지가 0일 때의 값을 구하는 방법으로 최소공배수 구하기
	{
		max = n;
		min = m;
	}
	else
	{
		max = m;
		min = n;
	}

	while (i <= min)
	{
		if (((max * i) % min) == 0)
		{
			break;
		}
		else
		{

		}
		i++;

	}
	printf("%d와 %d의 최소공배수는 %d입니다.\n", n, m, max * i);//결과 출력
}