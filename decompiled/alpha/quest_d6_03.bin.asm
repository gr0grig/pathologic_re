GlobalVarCount = 0

Strings:
	d6q03
	completed
	fail
	place_albinos
	pt_d6q03_albinos
	pers_albinos
	d6q03_albinos.xml
	albinos_retreated
	d6q03AlbinosFlee
	Remove
	albinos_dead
	d6q03AlbinosKilled
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Adding diary entry

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x87 Vars = (int, float)


0x0: Push("d6q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 6
0x6: Call 0x74

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("completed")
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: PushEmpty()
0x10: Call 0x53

0x11: Pop(0)
0x12: GOTO 0x3f

0x13: Push("fail")
0x14: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: PushEmpty()
0x17: Call 0x4b

0x18: Pop(0)
0x19: GOTO 0x3f

0x1a: Push("place_albinos")
0x1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1d: @ GetMainOutdoorScene(Stack[-1])
0x1e: Pop(0)
0x1f: PushEmpty(object, object, string, string, string)
0x20: Stack[-4] = Stack[-6]
0x21: Stack[-3] = "pt_d6q03_albinos"
0x22: Stack[-2] = "pers_albinos"
0x23: Stack[-1] = "d6q03_albinos.xml"
0x24: Call 0x92

0x25: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x26: Pop(5)
0x27: Stack[-1] = 0
0x28: GOTO 0x3f

0x29: Push("albinos_retreated")
0x2a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2c: Push("d6q03AlbinosFlee")
0x2d: Push((int) 1)
0x2e: @ SetVariable(Stack[-2], Stack[-1])
0x2f: Pop(2)
0x30: @@ Remove()
0x31: Pop(0)
0x32: GOTO 0x3f

0x33: Push("albinos_dead")
0x34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x36: Push("d6q03AlbinosKilled")
0x37: Push((int) 1)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call 0xce

0x3c: Pop(0)
0x3d: @@ Remove()
0x3e: Pop(0)
0x3f: Return(); Pop(2)

0x40: PushEmpty(int, int)
0x41: Push("d6q03")
0x42: @ GetVariable(Stack[-1], Stack[-2])
0x43: Pop(1)
0x44: Push((int) 1000)
0x45: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: PushEmpty()
0x48: Call 0x4b

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: Push("d6q03")
0x4c: Push((int) -1)
0x4d: @ SetVariable(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call 0x69

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: PushEmpty(int, int)
0x54: Push("d6q03")
0x55: @ GetVariable(Stack[-1], Stack[-2])
0x56: Pop(1)
0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: Push((int) 1000)
0x5a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5c: Push((int) -1)
0x5d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-1] = (bool) 1
0x60: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x61: Push("d6q03")
0x62: Push((int) 1000)
0x63: @ SetVariable(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: PushEmpty()
0x66: Call 0x69

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: EventDisable(26)
0x6a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: @@ Remove()
0x6d: Pop(0)
0x6e: PushEmpty(object)
0x6f: Call 0x8c

0x70: Pop(0)
0x71: @ RemoveActor(Stack[-1])
0x72: Pop(1)
0x73: Return(); Pop(0)

0x74: PushEmpty(float, float)
0x75: @ GetGameTime(Stack[-1])
0x76: Pop(0)
0x77: Push((int) 24)
0x78: Pop(1); Push(Stack[-4] * Stack[-1]);
0x79: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7b: PushEmpty()
0x7c: Call 0x69

0x7d: Pop(0)
0x7e: GOTO 0x86

0x7f: Push((int) 0)
0x80: Push((int) 24)
0x81: Pop(1); Push(Stack[-5] * Stack[-1]);
0x82: @ SetTimeEvent(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: @ Hold()
0x85: Pop(0)
0x86: Return(); Pop(2)

0x87: PushEmpty()
0x88: PushEmpty()
0x89: Call 0x40

0x8a: Pop(0)
0x8b: Return(); Pop(0)

0x8c: PushEmpty(object, object)
0x8d: @ self(Stack[-1])
0x8e: Pop(0)
0x8f: Stack[-3] = Stack[-1]
0x90: Return(); Pop(2)

0x91: Stack[-1] = 0
0x92: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x93: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x94: Pop(0)
0x95: Pop(0); Push((bool) Stack[-4] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x97: Push("Locator ")
0x98: Pop(1); Push(Stack[-1] + Stack[-12]);
0x99: Push(" doesn't exist")
0x9a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9b: @ Trace(Stack[-1])
0x9c: Pop(1)
0x9d: Stack[-1] = 0
0x9e: GOTO 0xa1

0x9f: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xa0: Pop(0)
0xa1: Stack[-13] = Stack[-1]
0xa2: Return(); Pop(8)

0xa3: Stack[-1] = 0
0xa4: PushEmpty(object, object)
0xa5: @ GetDiaryRoot(Stack[-1])
0xa6: Pop(0)
0xa7: Pop(0); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push("Can't retrieve diary root")
0xaa: @ Trace(Stack[-1])
0xab: Pop(1)
0xac: Stack[-3] = (bool) 0
0xad: Return(); Pop(2)

0xae: Stack[-3] = Stack[-1]
0xaf: Return(); Pop(2)

0xb0: Stack[-1] = 0
0xb1: PushEmpty(object, object, int, object, object, int)
0xb2: PushEmpty(object)
0xb3: Call 0xa4

0xb4: Stack[-4] = Stack[-1]
0xb5: Pop(1)
0xb6: @@ Find(Stack[-7], Stack[-2])
0xb7: Pop(0)
0xb8: Pop(0); Push((bool) Stack[-2] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xba: Push("Can't find diary parent with id: ")
0xbb: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbc: @ Trace(Stack[-1])
0xbd: Pop(1)
0xbe: Stack[-9] = (bool) 0
0xbf: Return(); Pop(6)

0xc0: @@ AddChild(Stack[-8])
0xc1: Pop(0)
0xc2: Push("player_diary")
0xc3: Push((int) 1)
0xc4: @ SetVariable(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: @@ GetCategory(Stack[-1])
0xc7: Pop(0)
0xc8: @ SetDiarySection(Stack[-1])
0xc9: Pop(0)
0xca: Stack[-9] = (bool) 0
0xcb: Return(); Pop(6)

0xcc: Stack[-2] = 0
0xcd: Stack[-3] = 0
0xce: PushEmpty(object, object)
0xcf: Push("Adding diary entry")
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: Push((int) 108)
0xd3: Push((int) 2)
0xd4: Push((int) 13731)
0xd5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: PushEmpty(bool, object, int)
0xd8: Stack[-2] = Stack[-4]
0xd9: Stack[-1] = (int) 107
0xda: Call 0xb1

0xdb: Pop(3)
0xdc: Return(); Pop(2)

0xdd: Stack[-1] = 0
