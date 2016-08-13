#include <stdio.h>

int main(void)
{
	int iex1, iex2, iex3, iex4, iex5, iex6, iex7, iex8;
	float fex1, fex2, fex3, fex4, fex5, fex6;
	// (a) (equivalent)
	scanf("%d", &iex1);
	scanf(" %d",&iex2);
	// (b) (non-equivalent, first will not tolerate whitespace before dashes, the second, however, will.)
	scanf("%d-%d-%d", &iex3, &iex4, &iex5);
	scanf("%d -%d -%d", &iex6, &iex7, &iex8);
	// (c) (equivalent)
	scanf("%f", &fex1);
	scanf("%f ", &fex2);
	// (d) (equivalent, both require comma seperating or scanf will terminate)
	scanf("%f,%f", &fex3, &fex4);
	scanf("%f, %f", &fex5, &fex6);

	// (equivalent: any whitespace in the format string goes back into the buffer.)

	return 0;
}