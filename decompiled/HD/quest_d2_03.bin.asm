GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d2q03
	birdmask
	r4_house_2_02
	r4_house_2_02@door1
	r4_house_2_02@door2
	pt_d2q03_birdmask
	pers_birdmask
	d2q03_birdmask.xml
	completed
	d2q03RepDown
	icot_lara_supply
	enabled
	SetProperty
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	Can't retrieve diary root
	Find
	Remove

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	GetDiaryRoot (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x7a Vars = (int, float)


0x0: Push("d2q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 2
0x6: Call2 0x67

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("birdmask")
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0xf: Push("r4_house_2_02")
0x10: @ GetSceneByName(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(string, bool)
0x13: Stack[-2] = "r4_house_2_02@door1"
0x14: Stack[-1] = (bool) 0
0x15: Call2 0x97

0x16: Pop(2)
0x17: PushEmpty(string, bool)
0x18: Stack[-2] = "r4_house_2_02@door2"
0x19: Stack[-1] = (bool) 0
0x1a: Call2 0x97

0x1b: Pop(2)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-6]
0x1e: Stack[-3] = "pt_d2q03_birdmask"
0x1f: Stack[-2] = "pers_birdmask"
0x20: Stack[-1] = "d2q03_birdmask.xml"
0x21: Call2 0x85

0x22: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x23: Pop(5)
0x24: Stack[-1] = 0
0x25: GOTO 0x2c

0x26: Push("completed")
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: PushEmpty()
0x2a: Call2 0x47

0x2b: Pop(0)
0x2c: Return(); Pop(2)

0x2d: PushEmpty(int, int)
0x2e: Push("d2q03")
0x2f: @ GetVariable(Stack[-1], Stack[-2])
0x30: Pop(1)
0x31: Push((int) 1000)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x34: Push((int) 0)
0x35: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x37: Push("d2q03RepDown")
0x38: Push((int) 1)
0x39: @ SetVariable(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: PushEmpty()
0x3c: Call2 0x3f

0x3d: Pop(0)
0x3e: Return(); Pop(2)

0x3f: Push("d2q03")
0x40: Push((int) -1)
0x41: @ SetVariable(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: PushEmpty()
0x44: Call2 0x58

0x45: Pop(0)
0x46: Return(); Pop(0)

0x47: PushEmpty(object, object)
0x48: Push("icot_lara_supply")
0x49: @ FindActor(Stack[-2], Stack[-1])
0x4a: Pop(1)
0x4b: Push("enabled")
0x4c: Push((bool) 1)
0x4d: @@ SetProperty(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: Push("d2q03")
0x50: Push((int) 1000)
0x51: @ SetVariable(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: PushEmpty()
0x54: Call2 0x58

0x55: Pop(0)
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: EventDisable(26)
0x59: PushEmpty()
0x5a: Call2 0xcb

0x5b: Pop(0)
0x5c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: Push("cleanup")
0x5f: @ Trigger(Stack[-0], Stack[-1])
0x60: Pop(1)
0x61: PushEmpty(object)
0x62: Call2 0x7f

0x63: Pop(0)
0x64: @ RemoveActor(Stack[-1])
0x65: Pop(1)
0x66: Return(); Pop(0)

0x67: PushEmpty(float, float)
0x68: @ GetGameTime(Stack[-1])
0x69: Pop(0)
0x6a: Push((int) 24)
0x6b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x6c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6e: PushEmpty()
0x6f: Call2 0x58

0x70: Pop(0)
0x71: GOTO 0x79

0x72: Push((int) 0)
0x73: Push((int) 24)
0x74: Pop(1); Push(Stack[-5] * Stack[-1]);
0x75: @ SetTimeEvent(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: @ Hold()
0x78: Pop(0)
0x79: Return(); Pop(2)

0x7a: PushEmpty()
0x7b: PushEmpty()
0x7c: Call2 0x2d

0x7d: Pop(0)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(object, object)
0x80: @ self(Stack[-1])
0x81: Pop(0)
0x82: Stack[-3] = Stack[-1]
0x83: Return(); Pop(2)

0x84: Stack[-1] = 0
0x85: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x86: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x87: Pop(0)
0x88: Pop(0); Push((bool) Stack[-4] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8a: Push("Locator ")
0x8b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8c: Push(" doesn't exist")
0x8d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8e: @ Trace(Stack[-1])
0x8f: Pop(1)
0x90: Stack[-1] = 0
0x91: GOTO 0x94

0x92: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x93: Pop(0)
0x94: Stack[-13] = Stack[-1]
0x95: Return(); Pop(8)

0x96: Stack[-1] = 0
0x97: PushEmpty(object, object)
0x98: @ FindActor(Stack[-1], Stack[-4])
0x99: Pop(0)
0x9a: Pop(0); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9c: Push("Door ")
0x9d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x9e: Push(" not found")
0x9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa0: @ Trace(Stack[-1])
0xa1: Pop(1)
0xa2: GOTO 0xa6

0xa3: Push("locked")
0xa4: @@ SetProperty(Stack[-1], Stack[-4])
0xa5: Pop(1)
0xa6: Return(); Pop(2)

0xa7: Stack[-1] = 0
0xa8: PushEmpty(bool, int)
0xa9: Stack[-1] = (int) 37
0xaa: Call2 0xba

0xab: Pop(2)
0xac: Return(); Pop(0)

0xad: PushEmpty(object, object)
0xae: @ GetDiaryRoot(Stack[-1])
0xaf: Pop(0)
0xb0: Pop(0); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: Push("Can't retrieve diary root")
0xb3: @ Trace(Stack[-1])
0xb4: Pop(1)
0xb5: Stack[-3] = (bool) 0
0xb6: Return(); Pop(2)

0xb7: Stack[-3] = Stack[-1]
0xb8: Return(); Pop(2)

0xb9: Stack[-1] = 0
0xba: PushEmpty(object, object, object, object)
0xbb: PushEmpty(object)
0xbc: Call2 0xad

0xbd: Stack[-3] = Stack[-1]
0xbe: Pop(1)
0xbf: @@ Find(Stack[-5], Stack[-1])
0xc0: Pop(0)
0xc1: Pop(0); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-6] = (bool) 0
0xc4: Return(); Pop(4)

0xc5: @@ Remove()
0xc6: Pop(0)
0xc7: Stack[-6] = (bool) 1
0xc8: Return(); Pop(4)

0xc9: Stack[-1] = 0
0xca: Stack[-2] = 0
0xcb: PushEmpty()
0xcc: Call2 0xa8

0xcd: Pop(0)
0xce: Return(); Pop(0)

