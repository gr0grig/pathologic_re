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
	add

Import:
	Sleep (1 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (3 args)
	FogLinear (2 args)
	ReportHit (4 args)
	GetPosition (1 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	IsLoaded (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	RemoveActor (1 args)
	Hold (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1  Params = 1

Events:
EVENT_6 Op = 0x101 Vars = ()

0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x59

0x3: Stack[-2] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(bool, object)
0x6: Stack[-1] = Stack[-3]
0x7: Call2 0xec

0x8: Pop(1)
0x9: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xa: PushEmpty(object)
0xb: Stack[-1] = Stack[-2]
0xc: Push(-1, 0); TaskCall(1)
0xd: Call2 0x17

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
0x25: PushEmpty(bool)
0x26: Call2 0xcc

0x27: Pop(0)
0x28: Pop(1); Push((bool) Stack[-1] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: Return(); Pop(8)

0x2b: PushEmpty(bool, object)
0x2c: Stack[-1] = Stack[-11]
0x2d: Call2 0xf9

0x2e: Pop(1)
0x2f: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x30: PushEmpty(float, object, float)
0x31: Stack[-2] = Stack[-12]
0x32: Stack[-1] = (float) 0.1
0x33: Call2 0x87

0x34: Stack[-4] = Stack[-3]
0x35: Pop(3)
0x36: Push((int) 5)
0x37: Push((float)0.1)
0x38: @ ReportHit(Stack[-11], Stack[-2], Stack[-3], Stack[-1])
0x39: Pop(2)
0x3a: Push((int) 1)
0x3b: @ Sleep(Stack[-1])
0x3c: Pop(1)
0x3d: PushEmpty(bool, object)
0x3e: Stack[-1] = Stack[-11]
0x3f: Call2 0xec

0x40: Pop(1)
0x41: Pop(1); Push((bool) Stack[-1] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: GOTO 0x45

0x44: GOTO 0x25

0x45: Push((int) 0)
0x46: Push((int) 1)
0x47: @ FogLinear(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: Push((int) 1)
0x4a: @@ FadeOut(Stack[-1])
0x4b: Pop(1)
0x4c: Push((int) 1)
0x4d: @ Sleep(Stack[-1])
0x4e: Pop(1)
0x4f: Return(); Pop(8)

0x50: Stack[-2] = 0
0x51: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x52: @ GetPosition(Stack[-3])
0x53: Pop(0)
0x54: @@ GetPosition(Stack[-2])
0x55: Pop(0)
0x56: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x57: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x58: Return(); Pop(6)

0x59: PushEmpty(object, object)
0x5a: Push("player")
0x5b: @ FindActor(Stack[-2], Stack[-1])
0x5c: Pop(1)
0x5d: Stack[-3] = Stack[-1]
0x5e: Return(); Pop(2)

0x5f: Stack[-1] = 0
0x60: PushEmpty(bool, bool)
0x61: @ IsPlayerActor(Stack[-3], Stack[-1])
0x62: Pop(0)
0x63: Stack[-4] = Stack[-1]
0x64: Return(); Pop(2)

0x65: PushEmpty(bool, bool)
0x66: Push("HasProperty")
0x67: Push((int) 2)
0x68: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x69: Pop(1); Push((bool) Stack[-1] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6b: Stack[-5] = (bool) 0
0x6c: Return(); Pop(2)

0x6d: @@ HasProperty(Stack[-3], Stack[-1])
0x6e: Pop(0)
0x6f: Stack[-5] = Stack[-1]
0x70: Return(); Pop(2)

0x71: PushEmpty(float, float)
0x72: PushEmpty(bool, object, string)
0x73: Stack[-2] = Stack[-10]
0x74: Stack[-1] = Stack[-9]
0x75: Call2 0x65

0x76: Pop(2)
0x77: Pop(1); Push((bool) Stack[-1] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-8] = (bool) 0
0x7a: Return(); Pop(2)

0x7b: @@ GetProperty(Stack[-6], Stack[-1])
0x7c: Pop(0)
0x7d: PushEmpty(float, float, float, float)
0x7e: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x7f: Stack[-2] = Stack[-8]
0x80: Stack[-1] = Stack[-7]
0x81: Call2 0xd7

0x82: Pop(3)
0x83: @@ SetProperty(Stack[-7], Stack[-1])
0x84: Pop(1)
0x85: Stack[-8] = (bool) 1
0x86: Return(); Pop(2)

0x87: PushEmpty(float, float, float, float)
0x88: PushEmpty(bool, object, string)
0x89: Stack[-2] = Stack[-9]
0x8a: Stack[-1] = "disease"
0x8b: Call2 0x65

0x8c: Pop(2)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8f: Stack[-7] = (int) 0
0x90: Return(); Pop(4)

0x91: Stack[-2] = (int) 0
0x92: PushEmpty(bool, object, string)
0x93: Stack[-2] = Stack[-9]
0x94: Stack[-1] = "armor_disease"
0x95: Call2 0x65

0x96: Pop(2)
0x97: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x98: Push("armor_disease")
0x99: @@ GetProperty(Stack[-1], Stack[-3])
0x9a: Pop(1)
0x9b: Push((int) 100)
0x9c: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-9]
0x9f: Stack[-1] = "immunity"
0xa0: Call2 0x65

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa3: Push("immunity")
0xa4: @@ GetProperty(Stack[-1], Stack[-2])
0xa5: Pop(1)
0xa6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0xa7: PushEmpty(bool, object, string, float, float, float)
0xa8: Stack[-5] = Stack[-12]
0xa9: Stack[-4] = "immunity"
0xaa: Stack[-3] = -Stack[-11]; Pop(0);
0xab: Stack[-2] = (int) 0
0xac: Stack[-1] = (int) 1
0xad: Call2 0x71

0xae: Pop(6)
0xaf: Push((int) 1)
0xb0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-7] = (float) 0.0
0xb3: Return(); Pop(4)

0xb4: Push((int) 1)
0xb5: Pop(1); Push(Stack[-1] - Stack[-3]);
0xb6: Push((int) 2)
0xb7: Pop(2); Push(Stack[-2] / Stack[-1]);
0xb8: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0xb9: PushEmpty(bool, object, string, float, float, float)
0xba: Stack[-5] = Stack[-12]
0xbb: Stack[-4] = "disease"
0xbc: Stack[-3] = Stack[-11]
0xbd: Stack[-2] = (int) 0
0xbe: Stack[-1] = (int) 1
0xbf: Call2 0x71

0xc0: Pop(6)
0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[-8]
0xc3: Call2 0x60

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc6: PushEmpty(float)
0xc7: Stack[-1] = Stack[-6]
0xc8: Call2 0xe2

0xc9: Pop(1)
0xca: Stack[-7] = Stack[-5]
0xcb: Return(); Pop(4)

0xcc: PushEmpty(bool, bool)
0xcd: @ IsLoaded(Stack[-1])
0xce: Pop(0)
0xcf: Stack[-3] = Stack[-1]
0xd0: Return(); Pop(2)

0xd1: PushEmpty(object, object)
0xd2: @ self(Stack[-1])
0xd3: Pop(0)
0xd4: Stack[-3] = Stack[-1]
0xd5: Return(); Pop(2)

0xd6: Stack[-1] = 0
0xd7: PushEmpty()
0xd8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xd9: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xda: Stack[-4] = Stack[-2]
0xdb: Return(); Pop(0)

0xdc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-4] = Stack[-1]
0xdf: Return(); Pop(0)

0xe0: Stack[-4] = Stack[-3]
0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, object)
0xe3: @ CreateFloatVector(Stack[-1])
0xe4: Pop(0)
0xe5: @@ add(Stack[-3])
0xe6: Pop(0)
0xe7: Push((int) 14)
0xe8: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe9: Pop(1)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty()
0xed: Stack[-2] = (bool) 0
0xee: Push(Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf0: PushEmpty(float, object)
0xf1: Stack[-1] = Stack[-3]
0xf2: Call2 0x51

0xf3: Pop(1)
0xf4: Push((float)360000.0)
0xf5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Stack[-2] = (bool) 1
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: PushEmpty(float, object)
0xfb: Stack[-1] = Stack[-3]
0xfc: Call2 0x51

0xfd: Pop(1)
0xfe: Push((float)40000.0)
0xff: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x100: Return(); Pop(0)

0x101: PushEmpty(object)
0x102: Call2 0xd1

0x103: Pop(0)
0x104: @ RemoveActor(Stack[-1])
0x105: Pop(1)
0x106: @ Hold()
0x107: Pop(0)
0x108: Return(); Pop(0)

