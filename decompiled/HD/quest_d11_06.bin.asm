GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_d11q06_wastedmale1
	pers_wasted_male
	d11q06_wastedmale.xml
	add
	pt_d11q06_wastedmale2
	pt_d11q06_wastedmale3
	pt_d11q06_wastedmale4
	pt_d11q06_wastedgirl1
	pers_wasted_girl
	d11q06_wastedgirl.xml
	pt_d11q06_wastedgirl2
	place_maria
	crypt2
	pt_d11q06_maria
	NPC_Maria
	d11q06_maria.xml
	fail
	completed
	d11q06
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get
	Remove
	clear

Import:
	GetMainOutdoorScene (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x41 Vars = (string)
		EVENT_9 Op = 0xa7 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: @ CreateObjectVector(Stack[-0])
0x4: Pop(0)
0x5: PushEmpty(object, object, string, string, string)
0x6: Stack[-4] = Stack[-6]
0x7: Stack[-3] = "pt_d11q06_wastedmale1"
0x8: Stack[-2] = "pers_wasted_male"
0x9: Stack[-1] = "d11q06_wastedmale.xml"
0xa: Call2 0xc4

0xb: Pop(4)
0xc: @@ add(Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-4] = Stack[-6]
0x10: Stack[-3] = "pt_d11q06_wastedmale2"
0x11: Stack[-2] = "pers_wasted_male"
0x12: Stack[-1] = "d11q06_wastedmale.xml"
0x13: Call2 0xc4

0x14: Pop(4)
0x15: @@ add(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-4] = Stack[-6]
0x19: Stack[-3] = "pt_d11q06_wastedmale3"
0x1a: Stack[-2] = "pers_wasted_male"
0x1b: Stack[-1] = "d11q06_wastedmale.xml"
0x1c: Call2 0xc4

0x1d: Pop(4)
0x1e: @@ add(Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-4] = Stack[-6]
0x22: Stack[-3] = "pt_d11q06_wastedmale4"
0x23: Stack[-2] = "pers_wasted_male"
0x24: Stack[-1] = "d11q06_wastedmale.xml"
0x25: Call2 0xc4

0x26: Pop(4)
0x27: @@ add(Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-6]
0x2b: Stack[-3] = "pt_d11q06_wastedgirl1"
0x2c: Stack[-2] = "pers_wasted_girl"
0x2d: Stack[-1] = "d11q06_wastedgirl.xml"
0x2e: Call2 0xc4

0x2f: Pop(4)
0x30: @@ add(Stack[-1])
0x31: Pop(1)
0x32: PushEmpty(object, object, string, string, string)
0x33: Stack[-4] = Stack[-6]
0x34: Stack[-3] = "pt_d11q06_wastedgirl2"
0x35: Stack[-2] = "pers_wasted_girl"
0x36: Stack[-1] = "d11q06_wastedgirl.xml"
0x37: Call2 0xc4

0x38: Pop(4)
0x39: @@ add(Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty(int)
0x3c: Stack[-1] = (int) 11
0x3d: Call2 0x94

0x3e: Pop(1)
0x3f: Return(); Pop(2)

0x40: Stack[-1] = 0
0x41: PushEmpty(object, object)
0x42: @ Trace(Stack[-3])
0x43: Pop(0)
0x44: Push("place_maria")
0x45: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x47: Push("crypt2")
0x48: @ GetSceneByName(Stack[-2], Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(object, object, string, string, string)
0x4b: Stack[-4] = Stack[-6]
0x4c: Stack[-3] = "pt_d11q06_maria"
0x4d: Stack[-2] = "NPC_Maria"
0x4e: Stack[-1] = "d11q06_maria.xml"
0x4f: Call2 0xb2

0x50: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x51: Pop(5)
0x52: Stack[-1] = 0
0x53: GOTO 0x61

0x54: Push("fail")
0x55: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x57: PushEmpty()
0x58: Call2 0x70

0x59: Pop(0)
0x5a: GOTO 0x61

0x5b: Push("completed")
0x5c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: PushEmpty()
0x5f: Call2 0x78

0x60: Pop(0)
0x61: Return(); Pop(2)

0x62: PushEmpty(int, int)
0x63: Push("d11q06")
0x64: @ GetVariable(Stack[-1], Stack[-2])
0x65: Pop(1)
0x66: Push((int) 1000)
0x67: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x69: PushEmpty()
0x6a: Call2 0x70

0x6b: Pop(0)
0x6c: PushEmpty()
0x6d: Call2 0x81

0x6e: Pop(0)
0x6f: Return(); Pop(2)

0x70: Push("d11q06")
0x71: Push((int) -1)
0x72: @ SetVariable(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: PushEmpty()
0x75: Call2 0x80

0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: Push("d11q06")
0x79: Push((int) 1000)
0x7a: @ SetVariable(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: PushEmpty()
0x7d: Call2 0x80

0x7e: Pop(0)
0x7f: Return(); Pop(0)

0x80: Return(); Pop(0)

0x81: EventDisable(26)
0x82: PushEmpty()
0x83: Call2 0x80

0x84: Pop(0)
0x85: PushEmpty(object)
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0xd6

0x88: Pop(1)
0x89: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8b: Push("cleanup")
0x8c: @ Trigger(Stack[-1], Stack[-1])
0x8d: Pop(1)
0x8e: PushEmpty(object)
0x8f: Call2 0xac

0x90: Pop(0)
0x91: @ RemoveActor(Stack[-1])
0x92: Pop(1)
0x93: Return(); Pop(0)

0x94: PushEmpty(float, float)
0x95: @ GetGameTime(Stack[-1])
0x96: Pop(0)
0x97: Push((int) 24)
0x98: Pop(1); Push(Stack[-4] * Stack[-1]);
0x99: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9b: PushEmpty()
0x9c: Call2 0x81

0x9d: Pop(0)
0x9e: GOTO 0xa6

0x9f: Push((int) 0)
0xa0: Push((int) 24)
0xa1: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa2: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: @ Hold()
0xa5: Pop(0)
0xa6: Return(); Pop(2)

0xa7: PushEmpty()
0xa8: PushEmpty()
0xa9: Call2 0x62

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(object, object)
0xad: @ self(Stack[-1])
0xae: Pop(0)
0xaf: Stack[-3] = Stack[-1]
0xb0: Return(); Pop(2)

0xb1: Stack[-1] = 0
0xb2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xb4: Pop(0)
0xb5: Pop(0); Push((bool) Stack[-4] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb7: Push("Locator ")
0xb8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb9: Push(" doesn't exist")
0xba: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb: @ Trace(Stack[-1])
0xbc: Pop(1)
0xbd: Stack[-1] = 0
0xbe: GOTO 0xc1

0xbf: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc0: Pop(0)
0xc1: Stack[-13] = Stack[-1]
0xc2: Return(); Pop(8)

0xc3: Stack[-1] = 0
0xc4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xc6: Pop(0)
0xc7: Pop(0); Push((bool) Stack[-4] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc9: Push("Locator ")
0xca: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcb: Push(" doesn't exist")
0xcc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcd: @ Trace(Stack[-1])
0xce: Pop(1)
0xcf: Stack[-1] = 0
0xd0: GOTO 0xd3

0xd1: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xd2: Pop(0)
0xd3: Stack[-13] = Stack[-1]
0xd4: Return(); Pop(8)

0xd5: Stack[-1] = 0
0xd6: PushEmpty(int, int, object, int, int, object)
0xd7: Push(Stack[-7])
0xd8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd9: @@ size(Stack[-3])
0xda: Pop(0)
0xdb: Stack[-2] = (int) 0
0xdc: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xdd: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xde: @@ get(Stack[-1], Stack[-2])
0xdf: Pop(0)
0xe0: Push(Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe2: @@ Remove()
0xe3: Pop(0)
0xe4: Stack[-1] = 0
0xe5: Push((int) 1)
0xe6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe7: GOTO 0xdc

0xe8: @@ clear()
0xe9: Pop(0)
0xea: Return(); Pop(6)

