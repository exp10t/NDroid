/**
 * author: Chenxiong (R0r5ch4ch) Qian
 * date: 2014-11-15
 */

#include "DECAF_shared/utils/OutputWrapper.h"
#include "instance_field_access.h"

jniHookHandler hookInstanceFieldAccess(int curPC, int dvmStartAddr, CPUState* env){
	switch (curPC - dvmStartAddr){
	}
	return NULL;
}

void hookGetObjectField(CPUState* env, int isStart){
}

void hookGetBooleanField(CPUState* env, int isStart){
}

void hookGetByteField(CPUState* env, int isStart){
}

void hookGetCharField(CPUState* env, int isStart){
}

void hookGetShortField(CPUState* env, int isStart){
}

void hookGetIntField(CPUState* env, int isStart){
}

void hookGetLongField(CPUState* env, int isStart){
}

void hookGetFloatField(CPUState* env, int isStart){
}

void hookGetDoubleField(CPUState* env, int isStart){
}

void hookSetObjectField(CPUState* env, int isStart){
}

void hookSetBooleanField(CPUState* env, int isStart){
}

void hookSetByteField(CPUState* env, int isStart){
}

void hookSetCharField(CPUState* env, int isStart){
}

void hookSetShortField(CPUState* env, int isStart){
}

void hookSetIntField(CPUState* env, int isStart){
}

void hookSetLongField(CPUState* env, int isStart){
}

void hookSetFloatField(CPUState* env, int isStart){
}

void hookSetDoubleField(CPUState* env, int isStart){
}
