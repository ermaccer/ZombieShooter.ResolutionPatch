#include "PatternHelper.h"
#include "..\utils\Patterns.h"
#include <Windows.h>
using namespace hook::txn;

unsigned int _pat(const char* pattern, int offset, const char* func)
{
	unsigned int pat = (unsigned int)get_pattern(pattern,offset);
#ifdef _DEBUG
	printf("Testing pattern: %s Res: %x\n", pattern, pat);
#endif // DEBUG
	return pat;
}
