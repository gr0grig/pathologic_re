GlobalVarCount = 0

Strings:
	woman
	worker
	pt_agony_
	pers_
	agony1_
	.xml
	New fog at 
	fog
	horror_fog.xml
	pt_fog
	fog_stat.xml

Import:
	Hold (0 args)
	GetLocator (4 args)
	AddActor (6 args)
	Sleep (2 args)
	GetRandomPFPoint (3 args)
	StopGroup0 (0 args)
	Trace (1 args)
	AddActorByType (6 args)
	self (1 args)
	rand (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0xe Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x55 Vars = ()


0x0: PushEmpty(string, string)
0x1: Stack[-2] = "woman"
0x2: Stack[-1] = "woman"
0x3: Call2 0x14

0x4: Pop(2)
0x5: PushEmpty(string, string)
0x6: Stack[-2] = "worker"
0x7: Stack[-1] = "man"
0x8: Call2 0x14

0x9: Pop(2)
0xa: @ Hold()
0xb: Pop(0)
0xc: GOTO 0xa

0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(1)
0x10: Call2 0x3c

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: Return(); Pop(0)

0x14: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x15: Stack[-4] = (int) 1
0x16: Push("pt_agony_")
0x17: Pop(1); Push(Stack[-1] + Stack[-11]);
0x18: Pop(1); Push(Stack[-1] + Stack[-5]);
0x19: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x1a: Pop(1)
0x1b: Pop(0); Push((bool) Stack[-3] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: GOTO 0x28

0x1e: PushEmpty(string, string, cvector, cvector)
0x1f: Stack[-4] = Stack[-14]
0x20: Stack[-3] = Stack[-13]
0x21: Stack[-2] = Stack[-6]
0x22: Stack[-1] = Stack[-5]
0x23: Call2 0x29

0x24: Pop(4)
0x25: Push((int) 1)
0x26: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x27: GOTO 0x16

0x28: Return(); Pop(8)

0x29: PushEmpty(object, object)
0x2a: PushEmpty(bool, float)
0x2b: Stack[-1] = (float) 0.5
0x2c: Call2 0x8e

0x2d: Pop(1)
0x2e: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x2f: Push("pers_")
0x30: Pop(1); Push(Stack[-1] + Stack[-7]);
0x31: PushEmpty(object)
0x32: Call2 0x88

0x33: Pop(0)
0x34: Push("agony1_")
0x35: Pop(1); Push(Stack[-1] + Stack[-8]);
0x36: Push(".xml")
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: @ AddActor(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x39: Pop(3)
0x3a: Stack[-1] = 0
0x3b: Return(); Pop(2)

0x3c: PushEmpty(bool, cvector, bool, cvector)
0x3d: PushEmpty()
0x3e: Call2 0x67

0x3f: Pop(0)
0x40: Push((int) 3)
0x41: @ Sleep(Stack[-1], Stack[-3])
0x42: Pop(1)
0x43: Push(Stack[-2])
0x44: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x45: Push((int) 0)
0x46: Push((int) 0)
0x47: @ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: PushEmpty(cvector)
0x4a: Stack[-1] = Stack[-2]
0x4b: Call2 0x58

0x4c: Pop(1)
0x4d: Push((int) 30)
0x4e: @ Sleep(Stack[-1], Stack[-3])
0x4f: Pop(1)
0x50: Pop(0); Push((bool) Stack[-2] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: GOTO 0x54

0x53: GOTO 0x45

0x54: Return(); Pop(4)

0x55: @ StopGroup0()
0x56: Pop(0)
0x57: Return(); Pop(0)

0x58: PushEmpty(object, object)
0x59: Push("New fog at ")
0x5a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x5b: @ Trace(Stack[-1])
0x5c: Pop(1)
0x5d: Push("fog")
0x5e: PushEmpty(object)
0x5f: Call2 0x88

0x60: Pop(0)
0x61: Push(CVector(0.0, 0.0, 1.0))
0x62: Push("horror_fog.xml")
0x63: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0x64: Pop(4)
0x65: Return(); Pop(2)

0x66: Stack[-1] = 0
0x67: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x68: Stack[-4] = (int) 1
0x69: Push("pt_fog")
0x6a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x6b: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x6c: Pop(1)
0x6d: Pop(0); Push((bool) Stack[-3] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: GOTO 0x78

0x70: PushEmpty(cvector, cvector)
0x71: Stack[-2] = Stack[-4]
0x72: Stack[-1] = Stack[-3]
0x73: Call2 0x79

0x74: Pop(2)
0x75: Push((int) 1)
0x76: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x77: GOTO 0x69

0x78: Return(); Pop(8)

0x79: PushEmpty(object, object)
0x7a: PushEmpty(bool, float)
0x7b: Stack[-1] = (float) 0.5
0x7c: Call2 0x8e

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7f: Push("fog")
0x80: PushEmpty(object)
0x81: Call2 0x88

0x82: Pop(0)
0x83: Push("fog_stat.xml")
0x84: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x85: Pop(3)
0x86: Stack[-1] = 0
0x87: Return(); Pop(2)

0x88: PushEmpty(object, object)
0x89: @ self(Stack[-1])
0x8a: Pop(0)
0x8b: Stack[-3] = Stack[-1]
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(float, float)
0x8f: @ rand(Stack[-1])
0x90: Pop(0)
0x91: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x92: Return(); Pop(2)

