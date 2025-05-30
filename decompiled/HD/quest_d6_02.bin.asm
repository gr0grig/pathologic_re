GlobalVarCount = 0

Strings:
	d6q02
	completed
	fail
	place_trigger
	d6q02_trigger_bombers
	d6q02_trigger.xml
	d6q02Trigger
	pt_d6q02_bomber1
	pers_bomber
	d6q02_bomber.xml
	pt_d6q02_bomber2
	pt_d6q02_bomber3
	pt_d6q02_bomber4
	pt_d6q02_gorbun
	pers_gorbun
	d6q02_gorbun.xml
	gorbun_death
	d6q02GorbunDeath
	GetLocator
	Locator 
	 doesn't exist
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0xa9 Vars = (int, float)


0x0: Push("d6q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 6
0x6: Call2 0x96

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, object)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("completed")
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: PushEmpty()
0x10: Call2 0x75

0x11: Pop(0)
0x12: GOTO 0x61

0x13: Push("fail")
0x14: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: PushEmpty()
0x17: Call2 0x6d

0x18: Pop(0)
0x19: GOTO 0x61

0x1a: Push("place_trigger")
0x1b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x1d: @ GetMainOutdoorScene(Stack[-2])
0x1e: Pop(0)
0x1f: Push("d6q02_trigger_bombers")
0x20: Push(CVector(0.0, 0.0, 0.0))
0x21: Push(CVector(0.0, 0.0, 1.0))
0x22: Push("d6q02_trigger.xml")
0x23: @ AddActor(Stack[-0], Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x24: Pop(4)
0x25: Stack[-2] = 0
0x26: GOTO 0x61

0x27: Push("d6q02_trigger_bombers")
0x28: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x2a: Push("d6q02Trigger")
0x2b: Push((int) 1)
0x2c: @ SetVariable(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: @ RemoveActor(Stack[-0])
0x2f: Pop(0)
0x30: @ GetMainOutdoorScene(Stack[-1])
0x31: Pop(0)
0x32: PushEmpty(object, object, string, string, string)
0x33: Stack[-4] = Stack[-6]
0x34: Stack[-3] = "pt_d6q02_bomber1"
0x35: Stack[-2] = "pers_bomber"
0x36: Stack[-1] = "d6q02_bomber.xml"
0x37: Call2 0xb4

0x38: Pop(5)
0x39: PushEmpty(object, object, string, string, string)
0x3a: Stack[-4] = Stack[-6]
0x3b: Stack[-3] = "pt_d6q02_bomber2"
0x3c: Stack[-2] = "pers_bomber"
0x3d: Stack[-1] = "d6q02_bomber.xml"
0x3e: Call2 0xb4

0x3f: Pop(5)
0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-4] = Stack[-6]
0x42: Stack[-3] = "pt_d6q02_bomber3"
0x43: Stack[-2] = "pers_bomber"
0x44: Stack[-1] = "d6q02_bomber.xml"
0x45: Call2 0xb4

0x46: Pop(5)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-6]
0x49: Stack[-3] = "pt_d6q02_bomber4"
0x4a: Stack[-2] = "pers_bomber"
0x4b: Stack[-1] = "d6q02_bomber.xml"
0x4c: Call2 0xb4

0x4d: Pop(5)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-4] = Stack[-6]
0x50: Stack[-3] = "pt_d6q02_gorbun"
0x51: Stack[-2] = "pers_gorbun"
0x52: Stack[-1] = "d6q02_gorbun.xml"
0x53: Call2 0xb4

0x54: Pop(5)
0x55: Stack[-1] = 0
0x56: GOTO 0x61

0x57: Push("gorbun_death")
0x58: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0xc6

0x5c: Pop(0)
0x5d: Push("d6q02GorbunDeath")
0x5e: Push((int) 1)
0x5f: @ SetVariable(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: Return(); Pop(4)

0x62: PushEmpty(int, int)
0x63: Push("d6q02")
0x64: @ GetVariable(Stack[-1], Stack[-2])
0x65: Pop(1)
0x66: Push((int) 1000)
0x67: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x69: PushEmpty()
0x6a: Call2 0x6d

0x6b: Pop(0)
0x6c: Return(); Pop(2)

0x6d: Push("d6q02")
0x6e: Push((int) -1)
0x6f: @ SetVariable(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: PushEmpty()
0x72: Call2 0x8b

0x73: Pop(0)
0x74: Return(); Pop(0)

0x75: PushEmpty(int, int)
0x76: Push("d6q02")
0x77: @ GetVariable(Stack[-1], Stack[-2])
0x78: Pop(1)
0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: Push((int) 1000)
0x7c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7e: Push((int) -1)
0x7f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Stack[-1] = (bool) 1
0x82: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x83: Push("d6q02")
0x84: Push((int) 1000)
0x85: @ SetVariable(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: PushEmpty()
0x88: Call2 0x8b

0x89: Pop(0)
0x8a: Return(); Pop(2)

0x8b: EventDisable(26)
0x8c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: @ RemoveActor(Stack[-0])
0x8f: Pop(0)
0x90: PushEmpty(object)
0x91: Call2 0xae

0x92: Pop(0)
0x93: @ RemoveActor(Stack[-1])
0x94: Pop(1)
0x95: Return(); Pop(0)

0x96: PushEmpty(float, float)
0x97: @ GetGameTime(Stack[-1])
0x98: Pop(0)
0x99: Push((int) 24)
0x9a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x9b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x8b

0x9f: Pop(0)
0xa0: GOTO 0xa8

0xa1: Push((int) 0)
0xa2: Push((int) 24)
0xa3: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa4: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ Hold()
0xa7: Pop(0)
0xa8: Return(); Pop(2)

0xa9: PushEmpty()
0xaa: PushEmpty()
0xab: Call2 0x62

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(object, object)
0xaf: @ self(Stack[-1])
0xb0: Pop(0)
0xb1: Stack[-3] = Stack[-1]
0xb2: Return(); Pop(2)

0xb3: Stack[-1] = 0
0xb4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xb6: Pop(0)
0xb7: Pop(0); Push((bool) Stack[-4] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb9: Push("Locator ")
0xba: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbb: Push(" doesn't exist")
0xbc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd: @ Trace(Stack[-1])
0xbe: Pop(1)
0xbf: Stack[-1] = 0
0xc0: GOTO 0xc3

0xc1: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc2: Pop(0)
0xc3: Stack[-13] = Stack[-1]
0xc4: Return(); Pop(8)

0xc5: Stack[-1] = 0
0xc6: PushEmpty(object, object)
0xc7: Push((int) 103)
0xc8: Push((int) 2)
0xc9: Push((int) 513726)
0xca: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: PushEmpty(bool, object, int)
0xcd: Stack[-2] = Stack[-4]
0xce: Stack[-1] = (int) 102
0xcf: Call2 0xe0

0xd0: Pop(3)
0xd1: Return(); Pop(2)

0xd2: Stack[-1] = 0
0xd3: PushEmpty(object, object)
0xd4: @ GetDiaryRoot(Stack[-1])
0xd5: Pop(0)
0xd6: Pop(0); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: Push("Can't retrieve diary root")
0xd9: @ Trace(Stack[-1])
0xda: Pop(1)
0xdb: Stack[-3] = (bool) 0
0xdc: Return(); Pop(2)

0xdd: Stack[-3] = Stack[-1]
0xde: Return(); Pop(2)

0xdf: Stack[-1] = 0
0xe0: PushEmpty(object, object, int, object, object, int)
0xe1: PushEmpty(object)
0xe2: Call2 0xd3

0xe3: Stack[-4] = Stack[-1]
0xe4: Pop(1)
0xe5: @@ Find(Stack[-7], Stack[-2])
0xe6: Pop(0)
0xe7: Pop(0); Push((bool) Stack[-2] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe9: Push("Can't find diary parent with id: ")
0xea: Pop(1); Push(Stack[-1] + Stack[-8]);
0xeb: @ Trace(Stack[-1])
0xec: Pop(1)
0xed: Stack[-9] = (bool) 0
0xee: Return(); Pop(6)

0xef: @@ AddChild(Stack[-8])
0xf0: Pop(0)
0xf1: Push((int) 7)
0xf2: @ SendWorldWndMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ GetCategory(Stack[-1])
0xf5: Pop(0)
0xf6: @ SetDiarySection(Stack[-1])
0xf7: Pop(0)
0xf8: Stack[-9] = (bool) 0
0xf9: Return(); Pop(6)

0xfa: Stack[-2] = 0
0xfb: Stack[-3] = 0
