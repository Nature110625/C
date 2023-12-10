#include<stdio.h>
int main()
{
int hr;
for(hr = 0; hr < 24; hr++)
{
	if(hr == 0)
		printf("\n12:00 Midnight");
	else if(hr < 12)
		printf("\n%d:00 AM", hr);
	else if(hr == 12)
		printf("\n%d:00 Noon.", hr);
	else if(hr < 24)
		printf("\n%d:00 PM.", hr-12);
}
return 0;
}