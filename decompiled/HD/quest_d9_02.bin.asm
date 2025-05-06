GlobalVarCount = 0

Strings:
	init_soldiers
	pt_d9q02_enemy1
	pers_soldat_hand
	d9q02_e_soldat.xml
	add
	pt_d9q02_enemy2
	pt_d9q02_enemy3
	d9q02_e_soldat_rifle.xml
	pt_d9q02_enemy4
	pt_d9q02_enemy5
	pt_d9q02_enemy6
	fail
	completed
	d9q02
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	size
	get

Import:
	CreateObjectVector (1 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x7 Vars = (string)
		EVENT_9 Op = 0x93 Vars = (int, float)


0x0: @ CreateObjectVector(Stack[-0])
0x1: Pop(0)
0x2: PushEmpty(int)
0x3: Stack[-1] = (int) 9
0x4: Call2 0x80

0x5: Pop(1)
0x6: Return(); Pop(0)

0x7: PushEmpty(object, object)
0x8: @ Trace(Stack[-3])
0x9: Pop(0)
0xa: Push("init_soldiers")
0xb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0xd: @ GetMainOutdoorScene(Stack[-1])
0xe: Pop(0)
0xf: PushEmpty(object, object, string, string, string)
0x10: Stack[-4] = Stack[-6]
0x11: Stack[-3] = "pt_d9q02_enemy1"
0x12: Stack[-2] = "pers_soldat_hand"
0x13: Stack[-1] = "d9q02_e_soldat.xml"
0x14: Call2 0x9e

0x15: Pop(4)
0x16: @@ add(Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-4] = Stack[-6]
0x1a: Stack[-3] = "pt_d9q02_enemy2"
0x1b: Stack[-2] = "pers_soldat_hand"
0x1c: Stack[-1] = "d9q02_e_soldat.xml"
0x1d: Call2 0x9e

0x1e: Pop(4)
0x1f: @@ add(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(object, object, string, string, string)
0x22: Stack[-4] = Stack[-6]
0x23: Stack[-3] = "pt_d9q02_enemy3"
0x24: Stack[-2] = "pers_soldat_hand"
0x25: Stack[-1] = "d9q02_e_soldat_rifle.xml"
0x26: Call2 0x9e

0x27: Pop(4)
0x28: @@ add(Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(object, object, string, string, string)
0x2b: Stack[-4] = Stack[-6]
0x2c: Stack[-3] = "pt_d9q02_enemy4"
0x2d: Stack[-2] = "pers_soldat_hand"
0x2e: Stack[-1] = "d9q02_e_soldat_rifle.xml"
0x2f: Call2 0x9e

0x30: Pop(4)
0x31: @@ add(Stack[-1])
0x32: Pop(1)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-4] = Stack[-6]
0x35: Stack[-3] = "pt_d9q02_enemy5"
0x36: Stack[-2] = "pers_soldat_hand"
0x37: Stack[-1] = "d9q02_e_soldat_rifle.xml"
0x38: Call2 0x9e

0x39: Pop(4)
0x3a: @@ add(Stack[-1])
0x3b: Pop(1)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-4] = Stack[-6]
0x3e: Stack[-3] = "pt_d9q02_enemy6"
0x3f: Stack[-2] = "pers_soldat_hand"
0x40: Stack[-1] = "d9q02_e_soldat_rifle.xml"
0x41: Call2 0x9e

0x42: Pop(4)
0x43: @@ add(Stack[-1])
0x44: Pop(1)
0x45: Stack[-1] = 0
0x46: GOTO 0x54

0x47: Push("fail")
0x48: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x63

0x4c: Pop(0)
0x4d: GOTO 0x54

0x4e: Push("completed")
0x4f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: PushEmpty()
0x52: Call2 0x6b

0x53: Pop(0)
0x54: Return(); Pop(2)

0x55: PushEmpty(int, int)
0x56: Push("d9q02")
0x57: @ GetVariable(Stack[-1], Stack[-2])
0x58: Pop(1)
0x59: Push((int) 1000)
0x5a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5c: PushEmpty()
0x5d: Call2 0x63

0x5e: Pop(0)
0x5f: PushEmpty()
0x60: Call2 0x74

0x61: Pop(0)
0x62: Return(); Pop(2)

0x63: Push("d9q02")
0x64: Push((int) -1)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call2 0x73

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: Push("d9q02")
0x6c: Push((int) 1000)
0x6d: @ SetVariable(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: PushEmpty()
0x70: Call2 0x73

0x71: Pop(0)
0x72: Return(); Pop(0)

0x73: Return(); Pop(0)

0x74: EventDisable(26)
0x75: PushEmpty(object, string)
0x76: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x77: Stack[-1] = "cleanup"
0x78: Call2 0xb0

0x79: Pop(2)
0x7a: PushEmpty(object)
0x7b: Call2 0x98

0x7c: Pop(0)
0x7d: @ RemoveActor(Stack[-1])
0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty(float, float)
0x81: @ GetGameTime(Stack[-1])
0x82: Pop(0)
0x83: Push((int) 24)
0x84: Pop(1); Push(Stack[-4] * Stack[-1]);
0x85: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x74

0x89: Pop(0)
0x8a: GOTO 0x92

0x8b: Push((int) 0)
0x8c: Push((int) 24)
0x8d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x8e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ Hold()
0x91: Pop(0)
0x92: Return(); Pop(2)

0x93: PushEmpty()
0x94: PushEmpty()
0x95: Call2 0x55

0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: PushEmpty(object, object)
0x99: @ self(Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: Stack[-1] = 0
0x9e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa0: Pop(0)
0xa1: Pop(0); Push((bool) Stack[-4] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa3: Push("Locator ")
0xa4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa5: Push(" doesn't exist")
0xa6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa7: @ Trace(Stack[-1])
0xa8: Pop(1)
0xa9: Stack[-1] = 0
0xaa: GOTO 0xad

0xab: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xac: Pop(0)
0xad: Stack[-13] = Stack[-1]
0xae: Return(); Pop(8)

0xaf: Stack[-1] = 0
0xb0: PushEmpty(int, int, object, int, int, object)
0xb1: Push(Stack[-8])
0xb2: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb3: @@ size(Stack[-3])
0xb4: Pop(0)
0xb5: Stack[-2] = (int) 0
0xb6: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xb7: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb8: @@ get(Stack[-1], Stack[-2])
0xb9: Pop(0)
0xba: Push(Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: @ Trigger(Stack[-1], Stack[-7])
0xbd: Pop(0)
0xbe: Stack[-1] = 0
0xbf: Push((int) 1)
0xc0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc1: GOTO 0xb6

0xc2: Return(); Pop(6)

