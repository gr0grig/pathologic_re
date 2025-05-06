GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	b6q01_bull_envelope
	all
	idle
	cleanup
	restore

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	GetScene (1 args)
	AddActor (5 args)
	RemoveEnvelope (0 args)
	RemoveRTEnvelope (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	GetDirection (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	HasAnimation (3 args)
	RemoveActor (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x22 Vars = ()
	GTASK_2  Params = 0
		EVENT_6 Op = 0x3b Vars = ()

Events:
EVENT_26 Op = 0xbc Vars = (string)
EVENT_6 Op = 0xd4 Vars = ()
EVENT_32 Op = 0xdc Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x69

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: Call2 0x14

0xf: Pop(0)
0x10: PushEmpty()
0x11: Call2 0x26

0x12: Pop(0)
0x13: Return(); Pop(0)

0x14: PushEmpty(object, object, object, object)
0x15: @ GetScene(Stack[-2])
0x16: Pop(0)
0x17: Push("b6q01_bull_envelope")
0x18: Push(CVector(0.0, 0.0, 0.0))
0x19: Push(CVector(0.0, 0.0, 1.0))
0x1a: @ AddActor(Stack[-4], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1b: Pop(3)
0x1c: Push(GlobalVars[0])
0x1d: Stack[-1] = Stack[-2]
0x1e: GlobalVars[0] = Stack[-1]; Pop(1)
0x1f: Return(); Pop(4)

0x20: Stack[-1] = 0
0x21: Stack[-2] = 0
0x22: PushEmpty()
0x23: Call2 0xd4

0x24: Pop(0)
0x25: Return(); Pop(0)

0x26: @ RemoveEnvelope()
0x27: Pop(0)
0x28: @ RemoveRTEnvelope()
0x29: Pop(0)
0x2a: PushEmpty(bool)
0x2b: Call2 0x69

0x2c: Pop(0)
0x2d: Pop(1); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: PushEmpty()
0x30: Push(-0, 0); TaskCall(0)
0x31: Call2 0x0

0x32: Pop(-0, 0); TaskReturn
0x33: Pop(0)
0x34: PushEmpty()
0x35: Push(-0, 0); TaskCall(2)
0x36: Call2 0x42

0x37: Pop(-0, 0); TaskReturn
0x38: Pop(0)
0x39: GOTO 0x2a

0x3a: Return(); Pop(0)

0x3b: PushEmpty()
0x3c: Call2 0xd4

0x3d: Pop(0)
0x3e: PushEmpty()
0x3f: Call2 0x66

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: PushEmpty(int, int, int, string, int, int, int, string)
0x43: Push((int) 3)
0x44: @ irand(Stack[-5], Stack[-1])
0x45: Pop(1)
0x46: Pop(0); Push((bool) Stack[-4] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x48: PushEmpty(int)
0x49: Call2 0xaa

0x4a: Stack[-4] = Stack[-1]
0x4b: Pop(1)
0x4c: Push(Stack[-3])
0x4d: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4e: @ irand(Stack[-2], Stack[-3])
0x4f: Pop(0)
0x50: PushEmpty(string, int)
0x51: Stack[-1] = Stack[-4]
0x52: Call2 0xa4

0x53: Stack[-3] = Stack[-2]
0x54: Pop(2)
0x55: Push("all")
0x56: @ PlayAnimation(Stack[-1], Stack[-2])
0x57: Pop(1)
0x58: PushEmpty(string)
0x59: Stack[-1] = Stack[-2]
0x5a: Call2 0x6e

0x5b: Pop(1)
0x5c: @ WaitForAnimEnd()
0x5d: Pop(0)
0x5e: GOTO 0x65

0x5f: Push("all")
0x60: Push("idle")
0x61: @ PlayAnimation(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: @ WaitForAnimEnd()
0x64: Pop(0)
0x65: Return(); Pop(8)

0x66: @ StopAnimation()
0x67: Pop(0)
0x68: Return(); Pop(0)

0x69: PushEmpty(bool, bool)
0x6a: @ IsLoaded(Stack[-1])
0x6b: Pop(0)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x70: Pop(0)
0x71: Pop(0); Push((bool) Stack[-8] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x73: Stack[-7] = (int) 0
0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[-8] + Stack[-1]);
0x76: Pop(1); Push(Stack[-18] + Stack[-1]);
0x77: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x78: Pop(1)
0x79: Pop(0); Push((bool) Stack[-6] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: GOTO 0x7f

0x7c: Push((int) 1)
0x7d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7e: GOTO 0x74

0x7f: Pop(0); Push((bool) Stack[-7] == 0)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Return(); Pop(16)

0x82: @ irand(Stack[-5], Stack[-7])
0x83: Pop(0)
0x84: Push((int) 1)
0x85: Pop(1); Push(Stack[-6] + Stack[-1]);
0x86: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x87: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x88: Pop(0)
0x89: Push(Stack[-4])
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ GetEyesHeight(Stack[-3])
0x8c: Pop(0)
0x8d: @ GetDirection(Stack[-2])
0x8e: Pop(0)
0x8f: Push((int) 50)
0x90: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x91: Push(CvectorIndex(Stack[-1], 1))
0x92: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x93: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x94: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x95: Pop(0)
0x96: Return(); Pop(16)

0x97: PushEmpty(object, object)
0x98: @ self(Stack[-1])
0x99: Pop(0)
0x9a: Stack[-3] = Stack[-1]
0x9b: Return(); Pop(2)

0x9c: Stack[-1] = 0
0x9d: PushEmpty(string, string)
0x9e: Stack[-1] = "idle"
0x9f: Push(Stack[-3])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa2: Stack[-4] = Stack[-1]
0xa3: Return(); Pop(2)

0xa4: PushEmpty()
0xa5: Push("idle")
0xa6: Push((int) 1)
0xa7: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xa9: Return(); Pop(0)

0xaa: PushEmpty(int, bool, int, bool)
0xab: Stack[-2] = (int) 0
0xac: Push("all")
0xad: PushEmpty(string, int)
0xae: Push((int) 1)
0xaf: Stack[-2] = Stack[-6] + Stack[-1]; Pop(1);
0xb0: Call2 0x9d

0xb1: Pop(1)
0xb2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: Pop(0); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xba

0xb7: Push((int) 1)
0xb8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb9: GOTO 0xac

0xba: Stack[-5] = Stack[-2]
0xbb: Return(); Pop(4)

0xbc: PushEmpty(bool, bool)
0xbd: Push("cleanup")
0xbe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc0: Push(GlobalVars[1])
0xc1: Stack[-1] = (bool) 1
0xc2: GlobalVars[1] = Stack[-1]; Pop(1)
0xc3: @ IsLoaded(Stack[-1])
0xc4: Pop(0)
0xc5: Pop(0); Push((bool) Stack[-1] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(object)
0xc8: Call2 0x97

0xc9: Pop(0)
0xca: @ RemoveActor(Stack[-1])
0xcb: Pop(1)
0xcc: GOTO 0xd3

0xcd: Push("restore")
0xce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd0: Push(GlobalVars[1])
0xd1: Stack[-1] = (bool) 0
0xd2: GlobalVars[1] = Stack[-1]; Pop(1)
0xd3: Return(); Pop(2)

0xd4: Push(GlobalVars[1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object)
0xd7: Call2 0x97

0xd8: Pop(0)
0xd9: @ RemoveActor(Stack[-1])
0xda: Pop(1)
0xdb: Return(); Pop(0)

0xdc: Push(GlobalVars[0])
0xdd: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xde: Push(GlobalVars[0])
0xdf: @ RemoveActor(Stack[-1])
0xe0: Pop(1)
0xe1: Return(); Pop(0)

