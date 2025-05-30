GlobalVarCount = 0

Strings:
	player
	GetPosition
	GetPFPosition
	walk
	run
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty

Import:
	FindActor (2 args)
	WaitForAnimEnd (0 args)
	Sleep (1 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x7e Vars = (int)
		EVENT_10 Op = 0x90 Vars = (object)
		EVENT_41 Op = 0x9b Vars = (object)

Events:
EVENT_41 Op = 0xfc Vars = (object)

0x0: PushEmpty(object, object)
0x1: Push("player")
0x2: @ FindActor(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Pop(0); Push(( Stack[-1] != 0 )
0x5: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x6: PushEmpty(bool, object, float, float, bool, bool)
0x7: Stack[-5] = Stack[-7]
0x8: Stack[-4] = (int) 200
0x9: Stack[-3] = (int) 5000
0xa: Stack[-2] = (bool) 1
0xb: Stack[-1] = (bool) 1
0xc: Push(-6, 2); TaskCall(1)
0xd: Call 0x18

0xe: Pop(-6, 2); TaskReturn
0xf: Pop(6)
0x10: @ WaitForAnimEnd()
0x11: Pop(0)
0x12: Push((int) 3)
0x13: @ Sleep(Stack[-1])
0x14: Pop(1)
0x15: GOTO 0x4

0x16: Return(); Pop(2)

0x17: Stack[-1] = 0
0x18: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1b: Stack[-7] = Stack[-17]
0x1c: PushEmpty(bool, object)
0x1d: Stack[-1] = Stack[-23]
0x1e: Call 0xa4

0x1f: Pop(1)
0x20: Pop(1); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-22] = (bool) 0
0x23: Return(); Pop(16)

0x24: @@ GetPosition(Stack[-5])
0x25: Pop(0)
0x26: @ GetPosition(Stack[-4])
0x27: Pop(0)
0x28: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x29: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2a: PushEmpty(bool)
0x2b: Stack[-1] = (bool) 0
0x2c: Push((int) 0)
0x2d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x30: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Stack[-1] = (bool) 1
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: @ Stop()
0x35: Pop(0)
0x36: Stack[-22] = (bool) 0
0x37: Return(); Pop(16)

0x38: Pop(0); Push(Stack[-20] * Stack[-20]);
0x39: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x3b: @@ GetPFPosition(Stack[-5])
0x3c: Pop(0)
0x3d: @ FindPathTo(Stack[-1], Stack[-5])
0x3e: Pop(0)
0x3f: Pop(0); Push(( Stack[-1] != 0 )
0x40: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x41: Stack[-6] = Stack[-1]
0x42: Stack[-1] = 0
0x43: Pop(0); Push(( Stack[-6] != 0 )
0x44: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x45: Push(Stack[-7])
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: Stack[-7] = (bool) 0
0x48: @ RotatePath(Stack[-6], Stack[-8])
0x49: Pop(0)
0x4a: Pop(0); Push((bool) Stack[-8] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: GOTO 0x7c

0x4d: Push((int) 0)
0x4e: Push((float)0.3)
0x4f: @ SetTimer(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: PushEmpty(string)
0x52: Call 0xab

0x53: Pop(0)
0x54: PushEmpty(string)
0x55: Call 0xad

0x56: Pop(0)
0x57: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x58: Pop(2)
0x59: Pop(0); Push((bool) Stack[-8] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5c: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5d: Stack[-6] = 0
0x5e: GOTO 0x7c

0x5f: GOTO 0x61

0x60: GOTO 0x7b

0x61: GOTO 0x63

0x62: Stack[-6] = 0
0x63: GOTO 0x74

0x64: Push((int) 0)
0x65: @ KillTimer(Stack[-1])
0x66: Pop(1)
0x67: Push((float)0.5)
0x68: @ Sleep(Stack[-1], Stack[-9])
0x69: Pop(1)
0x6a: Pop(0); Push((bool) Stack[-8] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-6] = 0
0x6f: GOTO 0x7c

0x70: Push((int) 0)
0x71: Push((float)0.3)
0x72: @ SetTimer(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Stack[-1] = 0
0x75: GOTO 0x7a

0x76: Push((int) 0)
0x77: @ KillTimer(Stack[-1])
0x78: Pop(1)
0x79: GOTO 0x7c

0x7a: Stack[-6] = 0
0x7b: GOTO 0x1c

0x7c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x7d: Return(); Pop(16)

0x7e: PushEmpty()
0x7f: Push((int) 0)
0x80: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(0)

0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call 0xa4

0x86: Pop(1)
0x87: Pop(1); Push((bool) Stack[-1] == 0)
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8a: Push((int) 0)
0x8b: @ KillTimer(Stack[-1])
0x8c: Pop(1)
0x8d: @ Stop()
0x8e: Pop(0)
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: @ RequestClearPath(Stack[-1])
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x95: Push((int) 0)
0x96: @ KillTimer(Stack[-1])
0x97: Pop(1)
0x98: @ Stop()
0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty()
0x9d: Call 0x94

0x9e: Pop(0)
0x9f: PushEmpty(object)
0xa0: Stack[-1] = Stack[-2]
0xa1: Call 0xfc

0xa2: Pop(1)
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool, object)
0xa6: Stack[-1] = Stack[-3]
0xa7: Call 0xe4

0xa8: Stack[-4] = Stack[-2]
0xa9: Pop(2)
0xaa: Return(); Pop(0)

0xab: Stack[-1] = "walk"
0xac: Return(); Pop(0)

0xad: Stack[-1] = "run"
0xae: Return(); Pop(0)

0xaf: PushEmpty(bool, bool)
0xb0: Push("HasProperty")
0xb1: Push((int) 2)
0xb2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb5: Stack[-5] = (bool) 0
0xb6: Return(); Pop(2)

0xb7: @@ HasProperty(Stack[-3], Stack[-1])
0xb8: Pop(0)
0xb9: Stack[-5] = Stack[-1]
0xba: Return(); Pop(2)

0xbb: PushEmpty(bool, bool)
0xbc: @@ IsDead(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-4] = Stack[-1]
0xbf: Return(); Pop(2)

0xc0: PushEmpty(object, object, object, object)
0xc1: Pop(0); Push((bool) Stack[-5] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-6] = (bool) 0
0xc4: Return(); Pop(4)

0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 0
0xc7: Push("IsDead")
0xc8: Push((int) 1)
0xc9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xca: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[-8]
0xcd: Call 0xbb

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[-1] = (bool) 1
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-6] = (bool) 0
0xd3: Return(); Pop(4)

0xd4: @ GetScene(Stack[-2])
0xd5: Pop(0)
0xd6: Pop(0); Push((bool) Stack[-2] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-6] = (bool) 0
0xd9: Return(); Pop(4)

0xda: @@ GetScene(Stack[-1])
0xdb: Pop(0)
0xdc: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-6] = (bool) 0
0xdf: Return(); Pop(4)

0xe0: Stack[-6] = (bool) 1
0xe1: Return(); Pop(4)

0xe2: Stack[-1] = 0
0xe3: Stack[-2] = 0
0xe4: PushEmpty(int, int)
0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[-5]
0xe7: Call 0xc0

0xe8: Pop(1)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-4] = (bool) 0
0xec: Return(); Pop(2)

0xed: PushEmpty(bool, object, string)
0xee: Stack[-2] = Stack[-6]
0xef: Stack[-1] = "noaccess"
0xf0: Call 0xaf

0xf1: Pop(2)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-4] = (bool) 1
0xf5: Return(); Pop(2)

0xf6: Push("noaccess")
0xf7: @@ GetProperty(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Push((int) 0)
0xfa: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xfb: Return(); Pop(2)

0xfc: PushEmpty()
0xfd: Return(); Pop(0)

