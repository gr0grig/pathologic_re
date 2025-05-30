GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_b11q02_doberman1
	pers_doberman
	b11q02_doberman.xml
	add
	pt_b11q02_doberman2
	pt_b11q02_doberman3
	teleport
	mnogogrannik_han
	pt_b11q02_teleport
	fail
	completed
	b11q02
	cot_kapella
	nohan
	player
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Teleport location '
	' not found in scene '
	size
	get
	Remove
	clear

Import:
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	FindActor (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x28 Vars = (string)
		EVENT_9 Op = 0x90 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0xa2

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: @ GetMainOutdoorScene(Stack[-1])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-4] = Stack[-6]
0x9: Stack[-3] = "pt_b11q02_doberman1"
0xa: Stack[-2] = "pers_doberman"
0xb: Stack[-1] = "b11q02_doberman.xml"
0xc: Call2 0xa8

0xd: Pop(4)
0xe: @@ add(Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-4] = Stack[-6]
0x12: Stack[-3] = "pt_b11q02_doberman2"
0x13: Stack[-2] = "pers_doberman"
0x14: Stack[-1] = "b11q02_doberman.xml"
0x15: Call2 0xa8

0x16: Pop(4)
0x17: @@ add(Stack[-1])
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-4] = Stack[-6]
0x1b: Stack[-3] = "pt_b11q02_doberman3"
0x1c: Stack[-2] = "pers_doberman"
0x1d: Stack[-1] = "b11q02_doberman.xml"
0x1e: Call2 0xa8

0x1f: Pop(4)
0x20: @@ add(Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(int)
0x23: Stack[-1] = (int) 11
0x24: Call2 0x7d

0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: Stack[-1] = 0
0x28: PushEmpty()
0x29: @ Trace(Stack[-1])
0x2a: Pop(0)
0x2b: Push("teleport")
0x2c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x2e: PushEmpty(object, string, string)
0x2f: PushEmpty(object)
0x30: Call2 0x95

0x31: Stack[-4] = Stack[-1]
0x32: Pop(1)
0x33: Stack[-2] = "mnogogrannik_han"
0x34: Stack[-1] = "pt_b11q02_teleport"
0x35: Call2 0xba

0x36: Pop(3)
0x37: GOTO 0x45

0x38: Push("fail")
0x39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: PushEmpty()
0x3c: Call2 0x54

0x3d: Pop(0)
0x3e: GOTO 0x45

0x3f: Push("completed")
0x40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x42: PushEmpty()
0x43: Call2 0x5c

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: PushEmpty(int, int)
0x47: Push("b11q02")
0x48: @ GetVariable(Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Push((int) 1000)
0x4b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: PushEmpty()
0x4e: Call2 0x54

0x4f: Pop(0)
0x50: PushEmpty()
0x51: Call2 0x72

0x52: Pop(0)
0x53: Return(); Pop(2)

0x54: Push("b11q02")
0x55: Push((int) -1)
0x56: @ SetVariable(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: PushEmpty()
0x59: Call2 0x72

0x5a: Pop(0)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, object)
0x5d: Push("b11q02")
0x5e: Push((int) 1000)
0x5f: @ SetVariable(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: Push("cot_kapella")
0x62: @ GetSceneByName(Stack[-2], Stack[-1])
0x63: Pop(1)
0x64: Push("han")
0x65: @ Trigger(Stack[-2], Stack[-1])
0x66: Pop(1)
0x67: Push("mnogogrannik_han")
0x68: @ GetSceneByName(Stack[-2], Stack[-1])
0x69: Pop(1)
0x6a: Push("nohan")
0x6b: @ Trigger(Stack[-2], Stack[-1])
0x6c: Pop(1)
0x6d: PushEmpty()
0x6e: Call2 0x72

0x6f: Pop(0)
0x70: Return(); Pop(2)

0x71: Stack[-1] = 0
0x72: EventDisable(26)
0x73: PushEmpty(object)
0x74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75: Call2 0xd2

0x76: Pop(1)
0x77: PushEmpty(object)
0x78: Call2 0x9c

0x79: Pop(0)
0x7a: @ RemoveActor(Stack[-1])
0x7b: Pop(1)
0x7c: Return(); Pop(0)

0x7d: PushEmpty(float, float)
0x7e: @ GetGameTime(Stack[-1])
0x7f: Pop(0)
0x80: Push((int) 24)
0x81: Pop(1); Push(Stack[-4] * Stack[-1]);
0x82: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x84: PushEmpty()
0x85: Call2 0x72

0x86: Pop(0)
0x87: GOTO 0x8f

0x88: Push((int) 0)
0x89: Push((int) 24)
0x8a: Pop(1); Push(Stack[-5] * Stack[-1]);
0x8b: @ SetTimeEvent(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ Hold()
0x8e: Pop(0)
0x8f: Return(); Pop(2)

0x90: PushEmpty()
0x91: PushEmpty()
0x92: Call2 0x46

0x93: Pop(0)
0x94: Return(); Pop(0)

0x95: PushEmpty(object, object)
0x96: Push("player")
0x97: @ FindActor(Stack[-2], Stack[-1])
0x98: Pop(1)
0x99: Stack[-3] = Stack[-1]
0x9a: Return(); Pop(2)

0x9b: Stack[-1] = 0
0x9c: PushEmpty(object, object)
0x9d: @ self(Stack[-1])
0x9e: Pop(0)
0x9f: Stack[-3] = Stack[-1]
0xa0: Return(); Pop(2)

0xa1: Stack[-1] = 0
0xa2: PushEmpty(object, object)
0xa3: @ CreateObjectVector(Stack[-1])
0xa4: Pop(0)
0xa5: Stack[-3] = Stack[-1]
0xa6: Return(); Pop(2)

0xa7: Stack[-1] = 0
0xa8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xaa: Pop(0)
0xab: Pop(0); Push((bool) Stack[-4] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xad: Push("Locator ")
0xae: Pop(1); Push(Stack[-1] + Stack[-12]);
0xaf: Push(" doesn't exist")
0xb0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb1: @ Trace(Stack[-1])
0xb2: Pop(1)
0xb3: Stack[-1] = 0
0xb4: GOTO 0xb7

0xb5: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xb6: Pop(0)
0xb7: Stack[-13] = Stack[-1]
0xb8: Return(); Pop(8)

0xb9: Stack[-1] = 0
0xba: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0xbb: Pop(0); Push((bool) Stack[-11] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(8)

0xbe: @ GetSceneByName(Stack[-4], Stack[-10])
0xbf: Pop(0)
0xc0: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(0)
0xc2: Pop(0); Push((bool) Stack[-3] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: Push("Teleport location '")
0xc5: Pop(1); Push(Stack[-1] + Stack[-10]);
0xc6: Push("' not found in scene '")
0xc7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8: Pop(1); Push(Stack[-1] + Stack[-11]);
0xc9: Push("'")
0xca: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcb: @ Trace(Stack[-1])
0xcc: Pop(1)
0xcd: GOTO 0xd0

0xce: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0xcf: Pop(0)
0xd0: Return(); Pop(8)

0xd1: Stack[-4] = 0
0xd2: PushEmpty(int, int, object, int, int, object)
0xd3: Push(Stack[-7])
0xd4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd5: @@ size(Stack[-3])
0xd6: Pop(0)
0xd7: Stack[-2] = (int) 0
0xd8: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xd9: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xda: @@ get(Stack[-1], Stack[-2])
0xdb: Pop(0)
0xdc: Push(Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: @@ Remove()
0xdf: Pop(0)
0xe0: Stack[-1] = 0
0xe1: Push((int) 1)
0xe2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe3: GOTO 0xd8

0xe4: @@ clear()
0xe5: Pop(0)
0xe6: Return(); Pop(6)

