GlobalVarCount = 0

Strings:
	W:quest_d4_02
	W:scene_load
	W:scene_unload
	W:woman
	W:worker
	W:pt_agony_
	W:pers_
	W:agony1_
	W:.xml
	W:New fog at 
	W:fog
	W:horror_fog.xml
	W:pt_fog
	W:fog_stat.xml
// @pool_raw:710075006500730074005f00640034005f003000320000007300630065006e0065005f006c006f006100640000007300630065006e0065005f0075006e006c006f0061006400000077006f006d0061006e00000077006f0072006b00650072000000700074005f00610067006f006e0079005f00000070006500720073005f000000610067006f006e00790031005f0000002e0078006d006c0000004e0065007700200066006f0067002000610074002000000066006f006700000068006f00720072006f0072005f0066006f0067002e0078006d006c000000700074005f0066006f006700000066006f0067005f0073007400610074002e0078006d006c000000

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

RunOp = 0xf
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x9 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x4b Vars = ()


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_d4_02" // @poff=0
0x2: Stack[-1] = "scene_load" // @poff=24
0x3: Call2 0xab

0x4: Pop(3)
0x5: PushEmpty()
0x6: Call2 0x1d

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d4_02" // @poff=0
0xb: Stack[-1] = "scene_unload" // @poff=46
0xc: Call2 0xab

0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: PushEmpty(string, string)
0x10: Stack[-2] = "woman" // @poff=72
0x11: Stack[-1] = "woman" // @poff=72
0x12: Call2 0x23

0x13: Pop(2)
0x14: PushEmpty(string, string)
0x15: Stack[-2] = "worker" // @poff=84
0x16: Stack[-1] = "man" // @poff=76
0x17: Call2 0x23

0x18: Pop(2)
0x19: @ Hold()
0x1a: Pop(0)
0x1b: GOTO 0x19

0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(1)
0x1f: Call2 0x54

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x24: Stack[-4] = (int) 1
0x25: Push("pt_agony_") // @poff=98
0x26: Pop(1); Push(Stack[-1] + Stack[-11]);
0x27: Pop(1); Push(Stack[-1] + Stack[-5]);
0x28: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x29: Pop(1)
0x2a: Pop(0); Push((bool) Stack[-3] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2c: GOTO 0x37

0x2d: PushEmpty(string, string, cvector, cvector)
0x2e: Stack[-14] = Stack[-4]
0x2f: Stack[-13] = Stack[-3]
0x30: Stack[-6] = Stack[-2]
0x31: Stack[-5] = Stack[-1]
0x32: Call2 0x38

0x33: Pop(4)
0x34: Push((int) 1)
0x35: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x36: GOTO 0x25

0x37: Return(); Pop(8)

0x38: PushEmpty(object, object)
0x39: PushEmpty(bool, float)
0x3a: Stack[-1] = (float) 0.5
0x3b: Call2 0xa6

0x3c: Pop(1)
0x3d: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x3e: Push("pers_") // @poff=118
0x3f: Pop(1); Push(Stack[-1] + Stack[-7]);
0x40: PushEmpty(object)
0x41: Call2 0xa0

0x42: Pop(0)
0x43: Push("agony1_") // @poff=130
0x44: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45: Push(".xml") // @poff=146
0x46: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47: @ AddActor(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x48: Pop(3)
0x49: Stack[-1] = 0
0x4a: Return(); Pop(2)

0x4b: PushEmpty(bool, string, string)
0x4c: Stack[-2] = "quest_d4_02" // @poff=0
0x4d: Stack[-1] = "scene_unload" // @poff=46
0x4e: Call2 0xab

0x4f: Pop(3)
0x50: PushEmpty()
0x51: Call2 0x6d

0x52: Pop(0)
0x53: Return(); Pop(0)

0x54: PushEmpty(bool, cvector, bool, cvector)
0x55: PushEmpty()
0x56: Call2 0x7f

0x57: Pop(0)
0x58: Push((int) 3)
0x59: @ Sleep(Stack[-1], Stack[-3])
0x5a: Pop(1)
0x5b: Push(Stack[-2])
0x5c: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5d: Push((int) 0)
0x5e: Push((int) 0)
0x5f: @ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: PushEmpty(cvector)
0x62: Stack[-2] = Stack[-1]
0x63: Call2 0x70

0x64: Pop(1)
0x65: Push((int) 30)
0x66: @ Sleep(Stack[-1], Stack[-3])
0x67: Pop(1)
0x68: Pop(0); Push((bool) Stack[-2] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: GOTO 0x6c

0x6b: GOTO 0x5d

0x6c: Return(); Pop(4)

0x6d: @ StopGroup0()
0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: PushEmpty(object, object)
0x71: Push("New fog at ") // @poff=156
0x72: Pop(1); Push(Stack[-1] + Stack[-4]);
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Push("fog") // @poff=180
0x76: PushEmpty(object)
0x77: Call2 0xa0

0x78: Pop(0)
0x79: Push(CVector(0.0, 0.0, 1.0))
0x7a: Push("horror_fog.xml") // @poff=188
0x7b: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0x7c: Pop(4)
0x7d: Return(); Pop(2)

0x7e: Stack[-1] = 0
0x7f: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x80: Stack[-4] = (int) 1
0x81: Push("pt_fog") // @poff=218
0x82: Pop(1); Push(Stack[-1] + Stack[-5]);
0x83: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x84: Pop(1)
0x85: Pop(0); Push((bool) Stack[-3] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x90

0x88: PushEmpty(cvector, cvector)
0x89: Stack[-4] = Stack[-2]
0x8a: Stack[-3] = Stack[-1]
0x8b: Call2 0x91

0x8c: Pop(2)
0x8d: Push((int) 1)
0x8e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8f: GOTO 0x81

0x90: Return(); Pop(8)

0x91: PushEmpty(object, object)
0x92: PushEmpty(bool, float)
0x93: Stack[-1] = (float) 0.5
0x94: Call2 0xa6

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x97: Push("fog") // @poff=180
0x98: PushEmpty(object)
0x99: Call2 0xa0

0x9a: Pop(0)
0x9b: Push("fog_stat.xml") // @poff=232
0x9c: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-7], Stack[-6], Stack[-1])
0x9d: Pop(3)
0x9e: Stack[-1] = 0
0x9f: Return(); Pop(2)

0xa0: PushEmpty(object, object)
0xa1: @ self(Stack[-1])
0xa2: Pop(0)
0xa3: Stack[-1] = Stack[-3]
0xa4: Return(); Pop(2)

0xa5: Stack[-1] = 0
0xa6: PushEmpty(float, float)
0xa7: @ rand(Stack[-1])
0xa8: Pop(0)
0xa9: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0xaa: Return(); Pop(2)

0xab: PushEmpty(object, object)
0xac: @ FindActor(Stack[-1], Stack[-4])
0xad: Pop(0)
0xae: Pop(0); PushNull((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb0: Stack[-5] = (bool) 0
0xb1: Return(); Pop(2)

0xb2: @ Trigger(Stack[-1], Stack[-3])
0xb3: Pop(0)
0xb4: Stack[-5] = (bool) 1
0xb5: Return(); Pop(2)

0xb6: Stack[-1] = 0
