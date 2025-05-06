GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d7q02BirdBalahon
	d7q02
	quest_d7_02
	completed
	cleanup
	restore
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	SetVariable (2 args)
	GetVariable (2 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x27
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_26 Op = 0x46 Vars = (string)


0x0: PushEmpty(int, bool, int, bool)
0x1: Push("d7q02BirdBalahon")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("d7q02")
0x6: @ GetVariable(Stack[-1], Stack[-3])
0x7: Pop(1)
0x8: Push((int) 4)
0x9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xb: PushEmpty()
0xc: Call2 0x96

0xd: Pop(0)
0xe: PushEmpty(bool, string, string)
0xf: Stack[-2] = "quest_d7_02"
0x10: Stack[-1] = "completed"
0x11: Call2 0x7d

0x12: Pop(3)
0x13: GOTO 0x19

0x14: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x16: PushEmpty()
0x17: Call2 0x89

0x18: Pop(0)
0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a: @ IsOverrideActive(Stack[-1])
0x1b: Pop(0)
0x1c: Pop(0); Push((bool) Stack[-1] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: @ Barter(Stack[-5])
0x1f: Pop(0)
0x20: Return(); Pop(4)

0x21: PushEmpty(bool, bool)
0x22: Push("d7q02BirdBalahon")
0x23: @ GetVariable(Stack[-1], Stack[-2])
0x24: Pop(1)
0x25: Stack[-3] = Stack[-1]
0x26: Return(); Pop(2)

0x27: @ sync()
0x28: Pop(0)
0x29: PushEmpty(bool)
0x2a: Call2 0x72

0x2b: Pop(0)
0x2c: Pop(1); Push((bool) Stack[-1] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2e: Push((bool) 1)
0x2f: @ SetVisibility(Stack[-1])
0x30: Pop(1)
0x31: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x32: GOTO 0x34

0x33: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x34: PushEmpty()
0x35: Call2 0x42

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3a: Push((bool) 1)
0x3b: @ SetVisibility(Stack[-1])
0x3c: Pop(1)
0x3d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3e: PushEmpty()
0x3f: Call2 0x62

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: @ Hold()
0x43: Pop(0)
0x44: GOTO 0x42

0x45: Return(); Pop(0)

0x46: PushEmpty(bool, bool)
0x47: Push("cleanup")
0x48: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x4a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4b: @ IsLoaded(Stack[-1])
0x4c: Pop(0)
0x4d: PushEmpty(bool)
0x4e: Stack[-1] = (bool) 0
0x4f: Pop(0); Push((bool) Stack[-2] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: PushEmpty(bool)
0x52: Call2 0x21

0x53: Pop(0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Stack[-1] = (bool) 1
0x56: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x57: PushEmpty(object)
0x58: Call2 0x77

0x59: Pop(0)
0x5a: @ RemoveActor(Stack[-1])
0x5b: Pop(1)
0x5c: GOTO 0x61

0x5d: Push("restore")
0x5e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x61: Return(); Pop(2)

0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: Push( Stack[0 + Tasks[-1].StackPointer] )
0x65: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x66: PushEmpty(bool)
0x67: Call2 0x21

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: PushEmpty(object)
0x6d: Call2 0x77

0x6e: Pop(0)
0x6f: @ RemoveActor(Stack[-1])
0x70: Pop(1)
0x71: Return(); Pop(0)

0x72: PushEmpty(bool, bool)
0x73: @ IsLoaded(Stack[-1])
0x74: Pop(0)
0x75: Stack[-3] = Stack[-1]
0x76: Return(); Pop(2)

0x77: PushEmpty(object, object)
0x78: @ self(Stack[-1])
0x79: Pop(0)
0x7a: Stack[-3] = Stack[-1]
0x7b: Return(); Pop(2)

0x7c: Stack[-1] = 0
0x7d: PushEmpty(object, object)
0x7e: @ FindActor(Stack[-1], Stack[-4])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-1] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-5] = (bool) 0
0x83: Return(); Pop(2)

0x84: @ Trigger(Stack[-1], Stack[-3])
0x85: Pop(0)
0x86: Stack[-5] = (bool) 1
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(object, object)
0x8a: Push((int) 636)
0x8b: Push((int) 2)
0x8c: Push((int) 533145)
0x8d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: PushEmpty(bool, object, int)
0x90: Stack[-2] = Stack[-4]
0x91: Stack[-1] = (int) 170
0x92: Call2 0xb0

0x93: Pop(3)
0x94: Return(); Pop(2)

0x95: Stack[-1] = 0
0x96: PushEmpty(object, object)
0x97: Push((int) 174)
0x98: Push((int) 2)
0x99: Push((int) 515426)
0x9a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: PushEmpty(bool, object, int)
0x9d: Stack[-2] = Stack[-4]
0x9e: Stack[-1] = (int) 170
0x9f: Call2 0xb0

0xa0: Pop(3)
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(object, object)
0xa4: @ GetDiaryRoot(Stack[-1])
0xa5: Pop(0)
0xa6: Pop(0); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: Push("Can't retrieve diary root")
0xa9: @ Trace(Stack[-1])
0xaa: Pop(1)
0xab: Stack[-3] = (bool) 0
0xac: Return(); Pop(2)

0xad: Stack[-3] = Stack[-1]
0xae: Return(); Pop(2)

0xaf: Stack[-1] = 0
0xb0: PushEmpty(object, object, int, object, object, int)
0xb1: PushEmpty(object)
0xb2: Call2 0xa3

0xb3: Stack[-4] = Stack[-1]
0xb4: Pop(1)
0xb5: @@ Find(Stack[-7], Stack[-2])
0xb6: Pop(0)
0xb7: Pop(0); Push((bool) Stack[-2] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: Push("Can't find diary parent with id: ")
0xba: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbb: @ Trace(Stack[-1])
0xbc: Pop(1)
0xbd: Stack[-9] = (bool) 0
0xbe: Return(); Pop(6)

0xbf: @@ AddChild(Stack[-8])
0xc0: Pop(0)
0xc1: Push((int) 7)
0xc2: @ SendWorldWndMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ GetCategory(Stack[-1])
0xc5: Pop(0)
0xc6: @ SetDiarySection(Stack[-1])
0xc7: Pop(0)
0xc8: Stack[-9] = (bool) 0
0xc9: Return(); Pop(6)

0xca: Stack[-2] = 0
0xcb: Stack[-3] = 0
