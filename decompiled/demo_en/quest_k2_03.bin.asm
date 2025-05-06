GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	k2q03
	place_arfist
	r4_house_2_02
	pt_k2q03_arfist
	pers_wasted_male
	k2q03_arfist.xml
	place_danko
	icot_eva_door
	pt_k2q03_danko
	NPC_Bakalavr
	k2q03_danko.xml
	completed
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	Close
	locked
	SetProperty

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x7c Vars = (int, float)


0x0: Push("k2q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 2
0x6: Call2 0x69

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, object)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("place_arfist")
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("r4_house_2_02")
0x10: @ GetSceneByName(Stack[-3], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-7]
0x14: Stack[-3] = "pt_k2q03_arfist"
0x15: Stack[-2] = "pers_wasted_male"
0x16: Stack[-1] = "k2q03_arfist.xml"
0x17: Call2 0x87

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-2] = 0
0x1b: GOTO 0x37

0x1c: Push("place_danko")
0x1d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x1f: PushEmpty(string, bool)
0x20: Stack[-2] = "icot_eva_door"
0x21: Stack[-1] = (bool) 1
0x22: Call2 0x99

0x23: Pop(2)
0x24: Push("r4_house_2_02")
0x25: @ GetSceneByName(Stack[-2], Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-6]
0x29: Stack[-3] = "pt_k2q03_danko"
0x2a: Stack[-2] = "NPC_Bakalavr"
0x2b: Stack[-1] = "k2q03_danko.xml"
0x2c: Call2 0x87

0x2d: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2e: Pop(5)
0x2f: Stack[-1] = 0
0x30: GOTO 0x37

0x31: Push("completed")
0x32: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x4b

0x36: Pop(0)
0x37: Return(); Pop(4)

0x38: PushEmpty(int, int)
0x39: Push("k2q03")
0x3a: @ GetVariable(Stack[-1], Stack[-2])
0x3b: Pop(1)
0x3c: Push((int) 1000)
0x3d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: PushEmpty()
0x40: Call2 0x43

0x41: Pop(0)
0x42: Return(); Pop(2)

0x43: Push("k2q03")
0x44: Push((int) -1)
0x45: @ SetVariable(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: PushEmpty()
0x48: Call2 0x53

0x49: Pop(0)
0x4a: Return(); Pop(0)

0x4b: Push("k2q03")
0x4c: Push((int) 1000)
0x4d: @ SetVariable(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call2 0x53

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: EventDisable(26)
0x54: PushEmpty(string, bool)
0x55: Stack[-2] = "icot_eva_door"
0x56: Stack[-1] = (bool) 0
0x57: Call2 0x99

0x58: Pop(2)
0x59: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: Push("cleanup")
0x5c: @ Trigger(Stack[-0], Stack[-1])
0x5d: Pop(1)
0x5e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x60: Push("cleanup")
0x61: @ Trigger(Stack[-1], Stack[-1])
0x62: Pop(1)
0x63: PushEmpty(object)
0x64: Call2 0x81

0x65: Pop(0)
0x66: @ RemoveActor(Stack[-1])
0x67: Pop(1)
0x68: Return(); Pop(0)

0x69: PushEmpty(float, float)
0x6a: @ GetGameTime(Stack[-1])
0x6b: Pop(0)
0x6c: Push((int) 24)
0x6d: Pop(1); Push(Stack[-4] * Stack[-1]);
0x6e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x70: PushEmpty()
0x71: Call2 0x53

0x72: Pop(0)
0x73: GOTO 0x7b

0x74: Push((int) 0)
0x75: Push((int) 24)
0x76: Pop(1); Push(Stack[-5] * Stack[-1]);
0x77: @ SetTimeEvent(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ Hold()
0x7a: Pop(0)
0x7b: Return(); Pop(2)

0x7c: PushEmpty()
0x7d: PushEmpty()
0x7e: Call2 0x38

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: PushEmpty(object, object)
0x82: @ self(Stack[-1])
0x83: Pop(0)
0x84: Stack[-3] = Stack[-1]
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x88: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-4] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8c: Push("Locator ")
0x8d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8e: Push(" doesn't exist")
0x8f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x90: @ Trace(Stack[-1])
0x91: Pop(1)
0x92: Stack[-1] = 0
0x93: GOTO 0x96

0x94: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x95: Pop(0)
0x96: Stack[-13] = Stack[-1]
0x97: Return(); Pop(8)

0x98: Stack[-1] = 0
0x99: PushEmpty(object, object)
0x9a: @ FindActor(Stack[-1], Stack[-4])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: Push("Door ")
0x9f: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa0: Push(" not found")
0xa1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2: @ Trace(Stack[-1])
0xa3: Pop(1)
0xa4: GOTO 0xac

0xa5: Push(Stack[-3])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: @@ Close()
0xa8: Pop(0)
0xa9: Push("locked")
0xaa: @@ SetProperty(Stack[-1], Stack[-4])
0xab: Pop(1)
0xac: Return(); Pop(2)

0xad: Stack[-1] = 0
