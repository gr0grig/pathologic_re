GlobalVarCount = 1
	G_VAR_0 object Target

Strings:
	1
	2
	3
	fire
	Can't find fire particle system
	4
	GetPosition
	x
	 y 
	 z
	AddSource
	Enable
	Fade
	5
	6
	HasProperty
	HasProperty
	GetScene
	noaccess
	GetProperty

Import:
	Trace (1 args)
	sync (0 args)
	RemoveActor (1 args)
	FindParticleSystem (2 args)
	GetPosition (1 args)
	Sleep (1 args)
	GetScene (1 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x88 Vars = ()


0x0: PushEmpty(object, cvector, cvector, cvector, int, int, float, int, object, cvector, cvector, cvector, int, int, float, int)
0x1: Push("1")
0x2: @ Trace(Stack[-1])
0x3: Pop(1)
0x4: @ sync()
0x5: Pop(0)
0x6: Push("2")
0x7: @ Trace(Stack[-1])
0x8: Pop(1)
0x9: PushEmpty(bool)
0xa: Stack[-1] = (bool) 1
0xb: PushEmpty(bool)
0xc: Call2 0xbc

0xd: Pop(0)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x10: PushEmpty(bool, object)
0x11: Push(GlobalVars[0])
0x12: Stack[-2] = Stack[-1]
0x13: Pop(1)
0x14: Call2 0x9a

0x15: Pop(1)
0x16: Pop(1); Push((bool) Stack[-1] == 0)
0x17: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x18: Stack[-1] = (bool) 0
0x19: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1a: PushEmpty(object)
0x1b: Call2 0xc1

0x1c: Pop(0)
0x1d: @ RemoveActor(Stack[-1])
0x1e: Pop(1)
0x1f: Return(); Pop(16)

0x20: Push("3")
0x21: @ Trace(Stack[-1])
0x22: Pop(1)
0x23: Push("fire")
0x24: @ FindParticleSystem(Stack[-1], Stack[-9])
0x25: Pop(1)
0x26: Pop(0); Push((bool) Stack[-8] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x28: Push("Can't find fire particle system")
0x29: @ Trace(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(16)

0x2c: Push("4")
0x2d: @ Trace(Stack[-1])
0x2e: Pop(1)
0x2f: Push(GlobalVars[0])
0x30: @@ GetPosition(Stack[-8])
0x31: Pop(1)
0x32: @ GetPosition(Stack[-6])
0x33: Pop(0)
0x34: Push("x")
0x35: Push(CvectorIndex(Stack[-8], 0))
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push(" y ")
0x38: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39: Push(CvectorIndex(Stack[-8], 1))
0x3a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b: Push(" z")
0x3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d: Push(CvectorIndex(Stack[-8], 2))
0x3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f: @ Trace(Stack[-1])
0x40: Pop(1)
0x41: Pop(0); Push(Stack[-7] - Stack[-6]);
0x42: Push(CVector(0.0, 1.0, 0.0))
0x43: Push((float)0.5)
0x44: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x45: Pop(3)
0x46: @@ Enable()
0x47: Pop(0)
0x48: Push((bool) 0)
0x49: @@ Fade(Stack[-1])
0x4a: Pop(1)
0x4b: Push("5")
0x4c: @ Trace(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-5] = Stack[-7]
0x4f: Stack[-4] = (int) 2
0x50: Stack[-3] = (int) 0
0x51: Push((int) 600)
0x52: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x54: @ sync()
0x55: Pop(0)
0x56: PushEmpty(bool, object)
0x57: Push(GlobalVars[0])
0x58: Stack[-2] = Stack[-1]
0x59: Pop(1)
0x5a: Call2 0x9a

0x5b: Pop(1)
0x5c: Pop(1); Push((bool) Stack[-1] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x79

0x5f: Push(GlobalVars[0])
0x60: @@ GetPosition(Stack[-8])
0x61: Pop(1)
0x62: Pop(0); Push(Stack[-5] - Stack[-7]);
0x63: Pop(0); Push(Stack[-6] - Stack[-8]);
0x64: Stack[-4] = Stack[-2] | Stack[-1]; Pop(2);
0x65: Push((int) 25)
0x66: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x68: Stack[-1] = (int) 0
0x69: Pop(0); Push((bool) Stack[-1] < Stack[-4])
0x6a: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6b: Pop(0); Push(Stack[-7] - Stack[-6]);
0x6c: Push(CVector(0.0, 1.0, 0.0))
0x6d: Push((float)0.5)
0x6e: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 1)
0x71: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x72: GOTO 0x69

0x73: Push((int) 3)
0x74: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x75: Stack[-5] = Stack[-7]
0x76: Push((int) 1)
0x77: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x78: GOTO 0x51

0x79: Push("6")
0x7a: @ Trace(Stack[-1])
0x7b: Pop(1)
0x7c: @@ Fade()
0x7d: Pop(0)
0x7e: Push((int) 3)
0x7f: @ Sleep(Stack[-1])
0x80: Pop(1)
0x81: PushEmpty(object)
0x82: Call2 0xc1

0x83: Pop(0)
0x84: @ RemoveActor(Stack[-1])
0x85: Pop(1)
0x86: Return(); Pop(16)

0x87: Stack[-8] = 0
0x88: PushEmpty(object)
0x89: Call2 0xc1

0x8a: Pop(0)
0x8b: @ RemoveActor(Stack[-1])
0x8c: Pop(1)
0x8d: Return(); Pop(0)

0x8e: PushEmpty(bool, bool)
0x8f: Push("HasProperty")
0x90: Push((int) 2)
0x91: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x94: Stack[-5] = (bool) 0
0x95: Return(); Pop(2)

0x96: @@ HasProperty(Stack[-3], Stack[-1])
0x97: Pop(0)
0x98: Stack[-5] = Stack[-1]
0x99: Return(); Pop(2)

0x9a: PushEmpty(object, object, int, object, object, int)
0x9b: Pop(0); Push((bool) Stack[-7] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-8] = (bool) 0
0x9e: Return(); Pop(6)

0x9f: @ GetScene(Stack[-3])
0xa0: Pop(0)
0xa1: Pop(0); Push((bool) Stack[-3] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: Stack[-8] = (bool) 0
0xa4: Return(); Pop(6)

0xa5: @@ GetScene(Stack[-2])
0xa6: Pop(0)
0xa7: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-8] = (bool) 0
0xaa: Return(); Pop(6)

0xab: PushEmpty(bool, object, string)
0xac: Stack[-2] = Stack[-10]
0xad: Stack[-1] = "noaccess"
0xae: Call2 0x8e

0xaf: Pop(2)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-8] = (bool) 1
0xb3: Return(); Pop(6)

0xb4: Push("noaccess")
0xb5: @@ GetProperty(Stack[-1], Stack[-2])
0xb6: Pop(1)
0xb7: Push((int) 0)
0xb8: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0xb9: Return(); Pop(6)

0xba: Stack[-2] = 0
0xbb: Stack[-3] = 0
0xbc: PushEmpty(bool, bool)
0xbd: @ IsLoaded(Stack[-1])
0xbe: Pop(0)
0xbf: Stack[-3] = Stack[-1]
0xc0: Return(); Pop(2)

0xc1: PushEmpty(object, object)
0xc2: @ self(Stack[-1])
0xc3: Pop(0)
0xc4: Stack[-3] = Stack[-1]
0xc5: Return(); Pop(2)

0xc6: Stack[-1] = 0
