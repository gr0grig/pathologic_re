GlobalVarCount = 0

Strings:
	attack
	FadeOut
	GetPosition
	player
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	disease
	armor_disease
	immunity

Import:
	Sleep (1 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (3 args)
	FogLinear (2 args)
	ReportHit (4 args)
	GetPosition (1 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1  Params = 1


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call 0x53

0x3: Stack[-2] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(bool, object)
0x6: Stack[-1] = Stack[-3]
0x7: Call 0xc6

0x8: Pop(1)
0x9: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xa: PushEmpty(object)
0xb: Stack[-1] = Stack[-2]
0xc: Push(-1, 0); TaskCall(1)
0xd: Call 0x17

0xe: Pop(-1, 0); TaskReturn
0xf: Pop(1)
0x10: GOTO 0x5

0x11: Push((int) 1)
0x12: @ Sleep(Stack[-1])
0x13: Pop(1)
0x14: Stack[-1] = 0
0x15: GOTO 0x1

0x16: Return(); Pop(2)

0x17: PushEmpty(float, cvector, object, float, float, cvector, object, float)
0x18: @ GetHeight(Stack[-4])
0x19: Pop(0)
0x1a: Stack[-3] = CVector(0.0, 0.0, 0.0)
0x1b: Push(CvectorIndex(Stack[-3], 1))
0x1c: Stack[-1] = Stack[-5]
0x1d: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x1e: Push("attack")
0x1f: @ PlayLoopedGlobalSound(Stack[-3], Stack[-1], Stack[-4])
0x20: Pop(1)
0x21: Push((int) 1)
0x22: Push((int) 1)
0x23: @ FogLinear(Stack[-2], Stack[-1])
0x24: Pop(2)
0x25: PushEmpty(bool, object)
0x26: Stack[-1] = Stack[-11]
0x27: Call 0xd3

0x28: Pop(1)
0x29: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2a: PushEmpty(float, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 0.1
0x2d: Call 0x7c

0x2e: Stack[-4] = Stack[-3]
0x2f: Pop(3)
0x30: Push((int) 5)
0x31: Push((float)0.1)
0x32: @ ReportHit(Stack[-11], Stack[-2], Stack[-3], Stack[-1])
0x33: Pop(2)
0x34: Push((int) 1)
0x35: @ Sleep(Stack[-1])
0x36: Pop(1)
0x37: PushEmpty(bool, object)
0x38: Stack[-1] = Stack[-11]
0x39: Call 0xc6

0x3a: Pop(1)
0x3b: Pop(1); Push((bool) Stack[-1] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: GOTO 0x3f

0x3e: GOTO 0x25

0x3f: Push((int) 0)
0x40: Push((int) 1)
0x41: @ FogLinear(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: Push((int) 1)
0x44: @@ FadeOut(Stack[-1])
0x45: Pop(1)
0x46: Push((int) 1)
0x47: @ Sleep(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(8)

0x4a: Stack[-2] = 0
0x4b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4c: @ GetPosition(Stack[-3])
0x4d: Pop(0)
0x4e: @@ GetPosition(Stack[-2])
0x4f: Pop(0)
0x50: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x51: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x52: Return(); Pop(6)

0x53: PushEmpty(object, object)
0x54: Push("player")
0x55: @ FindActor(Stack[-2], Stack[-1])
0x56: Pop(1)
0x57: Stack[-3] = Stack[-1]
0x58: Return(); Pop(2)

0x59: Stack[-1] = 0
0x5a: PushEmpty(bool, bool)
0x5b: Push("HasProperty")
0x5c: Push((int) 2)
0x5d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5e: Pop(1); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: Stack[-5] = (bool) 0
0x61: Return(); Pop(2)

0x62: @@ HasProperty(Stack[-3], Stack[-1])
0x63: Pop(0)
0x64: Stack[-5] = Stack[-1]
0x65: Return(); Pop(2)

0x66: PushEmpty(float, float)
0x67: PushEmpty(bool, object, string)
0x68: Stack[-2] = Stack[-10]
0x69: Stack[-1] = Stack[-9]
0x6a: Call 0x5a

0x6b: Pop(2)
0x6c: Pop(1); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-8] = (bool) 0
0x6f: Return(); Pop(2)

0x70: @@ GetProperty(Stack[-6], Stack[-1])
0x71: Pop(0)
0x72: PushEmpty(float, float, float, float)
0x73: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x74: Stack[-2] = Stack[-8]
0x75: Stack[-1] = Stack[-7]
0x76: Call 0xbb

0x77: Pop(3)
0x78: @@ SetProperty(Stack[-7], Stack[-1])
0x79: Pop(1)
0x7a: Stack[-8] = (bool) 1
0x7b: Return(); Pop(2)

0x7c: PushEmpty(int, float, float, int, float, float)
0x7d: PushEmpty(bool, object, string)
0x7e: Stack[-2] = Stack[-11]
0x7f: Stack[-1] = "disease"
0x80: Call 0x5a

0x81: Pop(2)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[-9] = (int) 0
0x85: Return(); Pop(6)

0x86: PushEmpty(bool, object, string)
0x87: Stack[-2] = Stack[-11]
0x88: Stack[-1] = "armor_disease"
0x89: Call 0x5a

0x8a: Pop(2)
0x8b: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8c: Push("armor_disease")
0x8d: @@ GetProperty(Stack[-1], Stack[-4])
0x8e: Pop(1)
0x8f: Push((int) 100)
0x90: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: Push((int) 1)
0x93: Push((float)100.0)
0x94: Pop(1); Push(Stack[-5] / Stack[-1]);
0x95: Pop(2); Push(Stack[-2] - Stack[-1]);
0x96: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x97: GOTO 0x9a

0x98: Stack[-9] = (int) 0
0x99: Return(); Pop(6)

0x9a: PushEmpty(bool, object, string)
0x9b: Stack[-2] = Stack[-11]
0x9c: Stack[-1] = "immunity"
0x9d: Call 0x5a

0x9e: Pop(2)
0x9f: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa0: Push("immunity")
0xa1: @@ GetProperty(Stack[-1], Stack[-2])
0xa2: Pop(1)
0xa3: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0xa4: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa5: Push("immunity")
0xa6: Push((int) 0)
0xa7: @@ SetProperty(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0xaa: GOTO 0xb1

0xab: Push("immunity")
0xac: Pop(0); Push(Stack[-2] - Stack[-8]);
0xad: @@ SetProperty(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: Stack[-9] = Stack[-7]
0xb0: Return(); Pop(6)

0xb1: PushEmpty(bool, object, string, float, float, float)
0xb2: Stack[-5] = Stack[-14]
0xb3: Stack[-4] = "disease"
0xb4: Stack[-3] = Stack[-8]
0xb5: Stack[-2] = (int) 0
0xb6: Stack[-1] = (int) 1
0xb7: Call 0x66

0xb8: Pop(6)
0xb9: Stack[-9] = Stack[-7]
0xba: Return(); Pop(6)

0xbb: PushEmpty()
0xbc: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbd: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbe: Stack[-4] = Stack[-2]
0xbf: Return(); Pop(0)

0xc0: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-4] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: Stack[-4] = Stack[-3]
0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: Stack[-2] = (bool) 0
0xc8: Push(Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xca: PushEmpty(float, object)
0xcb: Stack[-1] = Stack[-3]
0xcc: Call 0x4b

0xcd: Pop(1)
0xce: Push((float)160000.0)
0xcf: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Stack[-2] = (bool) 1
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: PushEmpty(float, object)
0xd5: Stack[-1] = Stack[-3]
0xd6: Call 0x4b

0xd7: Pop(1)
0xd8: Push((float)40000.0)
0xd9: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0xda: Return(); Pop(0)

