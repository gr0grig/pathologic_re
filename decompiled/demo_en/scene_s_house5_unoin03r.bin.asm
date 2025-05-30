GlobalVarCount = 0

Strings:
	quest_b4_02
	house_load
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
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x9
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x5e Vars = ()


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_b4_02"
0x2: Stack[-1] = "house_load"
0x3: Call2 0x9c

0x4: Pop(3)
0x5: PushEmpty()
0x6: Call2 0x17

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(string, string)
0xa: Stack[-2] = "woman"
0xb: Stack[-1] = "woman"
0xc: Call2 0x1d

0xd: Pop(2)
0xe: PushEmpty(string, string)
0xf: Stack[-2] = "worker"
0x10: Stack[-1] = "man"
0x11: Call2 0x1d

0x12: Pop(2)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(0)

0x17: PushEmpty()
0x18: Push(-0, 0); TaskCall(1)
0x19: Call2 0x45

0x1a: Pop(-0, 0); TaskReturn
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x1e: Stack[-4] = (int) 1
0x1f: Push("pt_agony_")
0x20: Pop(1); Push(Stack[-1] + Stack[-11]);
0x21: Pop(1); Push(Stack[-1] + Stack[-5]);
0x22: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x23: Pop(1)
0x24: Pop(0); Push((bool) Stack[-3] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: GOTO 0x31

0x27: PushEmpty(string, string, cvector, cvector)
0x28: Stack[-4] = Stack[-14]
0x29: Stack[-3] = Stack[-13]
0x2a: Stack[-2] = Stack[-6]
0x2b: Stack[-1] = Stack[-5]
0x2c: Call2 0x32

0x2d: Pop(4)
0x2e: Push((int) 1)
0x2f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x30: GOTO 0x1f

0x31: Return(); Pop(8)

0x32: PushEmpty(object, object)
0x33: PushEmpty(bool, float)
0x34: Stack[-1] = (float) 0.5
0x35: Call2 0x97

0x36: Pop(1)
0x37: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x38: Push("pers_")
0x39: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3a: PushEmpty(object)
0x3b: Call2 0x91

0x3c: Pop(0)
0x3d: Push("agony1_")
0x3e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f: Push(".xml")
0x40: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41: @ AddActor(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x42: Pop(3)
0x43: Stack[-1] = 0
0x44: Return(); Pop(2)

0x45: PushEmpty(bool, cvector, bool, cvector)
0x46: PushEmpty()
0x47: Call2 0x70

0x48: Pop(0)
0x49: Push((int) 3)
0x4a: @ Sleep(Stack[-1], Stack[-3])
0x4b: Pop(1)
0x4c: Push(Stack[-2])
0x4d: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x4e: Push((int) 0)
0x4f: Push((int) 0)
0x50: @ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: PushEmpty(cvector)
0x53: Stack[-1] = Stack[-2]
0x54: Call2 0x61

0x55: Pop(1)
0x56: Push((int) 30)
0x57: @ Sleep(Stack[-1], Stack[-3])
0x58: Pop(1)
0x59: Pop(0); Push((bool) Stack[-2] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: GOTO 0x5d

0x5c: GOTO 0x4e

0x5d: Return(); Pop(4)

0x5e: @ StopGroup0()
0x5f: Pop(0)
0x60: Return(); Pop(0)

0x61: PushEmpty(object, object)
0x62: Push("New fog at ")
0x63: Pop(1); Push(Stack[-1] + Stack[-4]);
0x64: @ Trace(Stack[-1])
0x65: Pop(1)
0x66: Push("fog")
0x67: PushEmpty(object)
0x68: Call2 0x91

0x69: Pop(0)
0x6a: Push(CVector(0.0, 0.0, 1.0))
0x6b: Push("horror_fog.xml")
0x6c: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0x6d: Pop(4)
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
0x70: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x71: Stack[-4] = (int) 1
0x72: Push("pt_fog")
0x73: Pop(1); Push(Stack[-1] + Stack[-5]);
0x74: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x75: Pop(1)
0x76: Pop(0); Push((bool) Stack[-3] == 0)
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x81

0x79: PushEmpty(cvector, cvector)
0x7a: Stack[-2] = Stack[-4]
0x7b: Stack[-1] = Stack[-3]
0x7c: Call2 0x82

0x7d: Pop(2)
0x7e: Push((int) 1)
0x7f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80: GOTO 0x72

0x81: Return(); Pop(8)

0x82: PushEmpty(object, object)
0x83: PushEmpty(bool, float)
0x84: Stack[-1] = (float) 0.5
0x85: Call2 0x97

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x88: Push("fog")
0x89: PushEmpty(object)
0x8a: Call2 0x91

0x8b: Pop(0)
0x8c: Push("fog_stat.xml")
0x8d: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x8e: Pop(3)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(2)

0x91: PushEmpty(object, object)
0x92: @ self(Stack[-1])
0x93: Pop(0)
0x94: Stack[-3] = Stack[-1]
0x95: Return(); Pop(2)

0x96: Stack[-1] = 0
0x97: PushEmpty(float, float)
0x98: @ rand(Stack[-1])
0x99: Pop(0)
0x9a: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x9b: Return(); Pop(2)

0x9c: PushEmpty(object, object)
0x9d: @ FindActor(Stack[-1], Stack[-4])
0x9e: Pop(0)
0x9f: Pop(0); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-5] = (bool) 0
0xa2: Return(); Pop(2)

0xa3: @ Trigger(Stack[-1], Stack[-3])
0xa4: Pop(0)
0xa5: Stack[-5] = (bool) 1
0xa6: Return(); Pop(2)

0xa7: Stack[-1] = 0
