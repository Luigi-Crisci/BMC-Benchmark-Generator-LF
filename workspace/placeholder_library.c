#define bool _Bool
#define true 1
#define false 0
#define UNUSED __attribute__((unused))

static bool __VERIFIER_atomic_compare_and_exchange(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, bool weak_p UNUSED, int sm UNUSED, int fm UNUSED)
{
	if (*mptr == *eptr)
	{
		*mptr = newval;
		return 1;
	}
	else
	{
		*eptr = newval;
		return 0;
	}
}

static bool __atomic_compare_exchange_n(volatile int long long unsigned *mptr, volatile int long long unsigned *eptr, volatile int long long unsigned newval, bool weak_p UNUSED, int sm UNUSED, int fm UNUSED)
{
	int res = __VERIFIER_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
	return res;
}

unsigned long __VERIFIER_atomic_exchange(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
	unsigned long int old = *previous;
	*previous = new;
	return old;
}

unsigned long __atomic_exchange_n(volatile int long long unsigned *previous, int long long unsigned new, int memorder)
{
	int res = __VERIFIER_atomic_exchange(previous, new, memorder);
	return res;
}


void __atomic_thread_fence(int i)
{
}

