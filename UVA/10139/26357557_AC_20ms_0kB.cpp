#include <math.h>
#include <stdio.h>

int main()
{
	int n, m, i, t, tn, fail;
	int cnt[100], num[100], l;

	while(scanf("%d%d",&n,&m)==2)
	{
		if(m==0)
		{
			printf("0 does not divide %d!\n",n);
			continue;
		}
		if(n < 2)
		{
			if(m!=1)
				printf("%d does not divide %d!\n",m,n);
			else
				printf("1 divides %d!\n",n);
			continue;
		}
		if(m==1)
		{
			printf("1 divides %d!\n",n);
			continue;
		}
		printf("%d",m);
		l = 0;
		if(m%2==0)
		{
			cnt[0] = 0;
			while(m%2==0)
			{
				cnt[0]++;
				m/= 2;
			}
			num[0] = 2;
			l++;
		}
		t = (int)sqrt(m);
		for(i = 3; i <= t; i += 2)
		{
			if(m%i==0)
			{
				cnt[l] = 0;
				while(m%i==0)
				{
					cnt[l]++;
					m/= i;
				}
				num[l] = i;
				l++;
				t = (int)sqrt(m);
			}
		}
		if(m!=1)
		{
			cnt[l] = 1;
			num[l] = m;
			l++;
		}
		fail = 0;
		for(i = 0; i < l; i++)
		{
			t = 0;
			tn = n;
			while(t < cnt[i]&&num[i] <= tn)
			{
				t += tn/num[i];
				tn/= num[i];
			}
			if(t < cnt[i])
			{
				fail = 1;
				break;
			}
		}
		if(fail)
			printf(" does not divide %d!\n",n);
		else
			printf(" divides %d!\n",n);


	}
	return 0;
}
