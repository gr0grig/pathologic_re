GlobalVarCount = 0

Strings:
	d3q02
	r7_house2_01
	pt_d3q02_butcher
	pers_butcher
	d3q02_butcher.xml
	d3q02_corpse
	actor_disp.bin
	d3q02_btrigger
	quest_d3_02_btrigger.bin
	butcher_trigger
	d3q02SeeCorpse
	completed
	cleanup
	GetLocator
	Locator 
	 doesn't exist

Import:
	SetVariable (2 args)
	AddScriptedActor (5 args)
	Trace (1 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	GetSceneByName (2 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x22 Vars = (string)
		EVENT_9 Op = 0x92 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d3q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(object, string)
0x6: Stack[-1] = "r7_house2_01"
0x7: Call 0x9d

0x8: Stack[-3] = Stack[-2]
0x9: Pop(2)
0xa: PushEmpty(object, object, string, string, string)
0xb: Stack[-4] = Stack[-6]
0xc: Stack[-3] = "pt_d3q02_butcher"
0xd: Stack[-2] = "pers_butcher"
0xe: Stack[-1] = "d3q02_butcher.xml"
0xf: Call 0xa3

0x10: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x11: Pop(5)
0x12: Push("d3q02_corpse")
0x13: Push("actor_disp.bin")
0x14: Push(CVector(0.0, 0.0, 0.0))
0x15: @ AddScriptedActor(Stack[-1], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x16: Pop(3)
0x17: Push("d3q02_btrigger")
0x18: Push("quest_d3_02_btrigger.bin")
0x19: Push(CVector(0.0, 0.0, 0.0))
0x1a: @ AddScriptedActor(Stack[-2], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x1b: Pop(3)
0x1c: PushEmpty(int)
0x1d: Stack[-1] = (int) 3
0x1e: Call 0x7f

0x1f: Pop(1)
0x20: Return(); Pop(2)

0x21: Stack[-1] = 0
0x22: PushEmpty()
0x23: @ Trace(Stack[-1])
0x24: Pop(0)
0x25: Push("butcher_trigger")
0x26: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x28: Push( Stack[0 + Tasks[-1].StackPointer] )
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: Push("trigger")
0x2b: @ Trigger(Stack[-0], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty()
0x2e: Call 0x65

0x2f: Pop(0)
0x30: Push("d3q02SeeCorpse")
0x31: Push((int) 1)
0x32: @ SetVariable(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: GOTO 0x3b

0x35: Push("completed")
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: PushEmpty()
0x39: Call 0x4f

0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(int, int)
0x3d: Push("d3q02")
0x3e: @ GetVariable(Stack[-1], Stack[-2])
0x3f: Pop(1)
0x40: Push((int) 1000)
0x41: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x43: PushEmpty()
0x44: Call 0x47

0x45: Pop(0)
0x46: Return(); Pop(2)

0x47: Push("d3q02")
0x48: Push((int) -1)
0x49: @ SetVariable(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: PushEmpty()
0x4c: Call 0x75

0x4d: Pop(0)
0x4e: Return(); Pop(0)

0x4f: PushEmpty(int, int)
0x50: Push("d3q02")
0x51: @ GetVariable(Stack[-1], Stack[-2])
0x52: Pop(1)
0x53: PushEmpty(bool)
0x54: Stack[-1] = (bool) 0
0x55: Push((int) 1000)
0x56: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: Push((int) -1)
0x59: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Stack[-1] = (bool) 1
0x5c: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5d: Push("d3q02")
0x5e: Push((int) 1000)
0x5f: @ SetVariable(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: PushEmpty()
0x62: Call 0x75

0x63: Pop(0)
0x64: Return(); Pop(2)

0x65: Push( Stack[0 + Tasks[-1].StackPointer] )
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: Push("cleanup")
0x68: @ Trigger(Stack[-0], Stack[-1])
0x69: Pop(1)
0x6a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: Push("cleanup")
0x6d: @ Trigger(Stack[-1], Stack[-1])
0x6e: Pop(1)
0x6f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup")
0x72: @ Trigger(Stack[-2], Stack[-1])
0x73: Pop(1)
0x74: Return(); Pop(0)

0x75: EventDisable(26)
0x76: PushEmpty()
0x77: Call 0x65

0x78: Pop(0)
0x79: PushEmpty(object)
0x7a: Call 0x97

0x7b: Pop(0)
0x7c: @ RemoveActor(Stack[-1])
0x7d: Pop(1)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(float, float)
0x80: @ GetGameTime(Stack[-1])
0x81: Pop(0)
0x82: Push((int) 24)
0x83: Pop(1); Push(Stack[-4] * Stack[-1]);
0x84: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x86: PushEmpty()
0x87: Call 0x75

0x88: Pop(0)
0x89: GOTO 0x91

0x8a: Push((int) 0)
0x8b: Push((int) 24)
0x8c: Pop(1); Push(Stack[-5] * Stack[-1]);
0x8d: @ SetTimeEvent(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ Hold()
0x90: Pop(0)
0x91: Return(); Pop(2)

0x92: PushEmpty()
0x93: PushEmpty()
0x94: Call 0x3c

0x95: Pop(0)
0x96: Return(); Pop(0)

0x97: PushEmpty(object, object)
0x98: @ self(Stack[-1])
0x99: Pop(0)
0x9a: Stack[-3] = Stack[-1]
0x9b: Return(); Pop(2)

0x9c: Stack[-1] = 0
0x9d: PushEmpty(object, object)
0x9e: @ GetSceneByName(Stack[-1], Stack[-3])
0x9f: Pop(0)
0xa0: Stack[-4] = Stack[-1]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa4: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa5: Pop(0)
0xa6: Pop(0); Push((bool) Stack[-4] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa8: Push("Locator ")
0xa9: Pop(1); Push(Stack[-1] + Stack[-12]);
0xaa: Push(" doesn't exist")
0xab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xac: @ Trace(Stack[-1])
0xad: Pop(1)
0xae: Stack[-1] = 0
0xaf: GOTO 0xb2

0xb0: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb1: Pop(0)
0xb2: Stack[-13] = Stack[-1]
0xb3: Return(); Pop(8)

0xb4: Stack[-1] = 0
