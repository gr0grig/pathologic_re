GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d5q02KnowNudeIsDead
	W:d5q01_heart
	W:d5q01
	W:cleanup
	W:restore
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:640035007100300032004b006e006f0077004e007500640065004900730044006500610064000000640035007100300031005f0068006500610072007400000064003500710030003100000063006c00650061006e0075007000000072006500730074006f00720065000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	SetVariable (2 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetItemCountOfType (2 args)
	GetVariable (2 args)
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2b
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_6 Op = 0x3c Vars = ()
		EVENT_26 Op = 0x4a Vars = (string)


0x0: PushEmpty(bool, bool)
0x1: Push("d5q02KnowNudeIsDead") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: @ IsOverrideActive(Stack[-1])
0x6: Pop(0)
0x7: Pop(0); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: @ Barter(Stack[-3])
0xa: Pop(0)
0xb: PushEmpty(bool)
0xc: Stack[-1] = (bool) 0
0xd: PushEmpty(bool)
0xe: Call2 0x1a

0xf: Pop(0)
0x10: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x11: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: Stack[-1] = (bool) 1
0x14: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x15: PushEmpty()
0x16: Call2 0x81

0x17: Pop(0)
0x18: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x19: Return(); Pop(2)

0x1a: PushEmpty(int, int, int, int)
0x1b: Push("d5q01_heart") // @poff=40
0x1c: @ GetItemCountOfType(Stack[-3], Stack[-1])
0x1d: Pop(1)
0x1e: Pop(0); Push((bool) Stack[-2] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-5] = (bool) 1
0x21: Return(); Pop(4)

0x22: Push("d5q01") // @poff=64
0x23: @ GetVariable(Stack[-1], Stack[-2])
0x24: Pop(1)
0x25: PushEmpty(bool, int)
0x26: Stack[-3] = Stack[-1]
0x27: Call2 0xb7

0x28: Pop(1)
0x29: Stack[-6] = !Stack[-1]; Pop(1);
0x2a: Return(); Pop(4)

0x2b: @ sync()
0x2c: Pop(0)
0x2d: PushEmpty(bool)
0x2e: Call2 0x76

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x32: Push((bool) 1)
0x33: @ SetVisibility(Stack[-1])
0x34: Pop(1)
0x35: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x36: GOTO 0x38

0x37: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x38: PushEmpty()
0x39: Call2 0x46

0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3e: Push((bool) 1)
0x3f: @ SetVisibility(Stack[-1])
0x40: Pop(1)
0x41: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x42: PushEmpty()
0x43: Call2 0x66

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: @ Hold()
0x47: Pop(0)
0x48: GOTO 0x46

0x49: Return(); Pop(0)

0x4a: PushEmpty(bool, bool)
0x4b: Push("cleanup") // @poff=76
0x4c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x4e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4f: @ IsLoaded(Stack[-1])
0x50: Pop(0)
0x51: PushEmpty(bool)
0x52: Stack[-1] = (bool) 0
0x53: Pop(0); Push((bool) Stack[-2] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x55: PushEmpty(bool)
0x56: Call2 0x1a

0x57: Pop(0)
0x58: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x59: Stack[-1] = (bool) 1
0x5a: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5b: PushEmpty(object)
0x5c: Call2 0x7b

0x5d: Pop(0)
0x5e: @ RemoveActor(Stack[-1])
0x5f: Pop(1)
0x60: GOTO 0x65

0x61: Push("restore") // @poff=92
0x62: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x65: Return(); Pop(2)

0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 0
0x68: Push( Stack[0 + Tasks[-1].StackPointer] )
0x69: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6a: PushEmpty(bool)
0x6b: Call2 0x1a

0x6c: Pop(0)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: PushEmpty(object)
0x71: Call2 0x7b

0x72: Pop(0)
0x73: @ RemoveActor(Stack[-1])
0x74: Pop(1)
0x75: Return(); Pop(0)

0x76: PushEmpty(bool, bool)
0x77: @ IsLoaded(Stack[-1])
0x78: Pop(0)
0x79: Stack[-1] = Stack[-3]
0x7a: Return(); Pop(2)

0x7b: PushEmpty(object, object)
0x7c: @ self(Stack[-1])
0x7d: Pop(0)
0x7e: Stack[-1] = Stack[-3]
0x7f: Return(); Pop(2)

0x80: Stack[-1] = 0
0x81: PushEmpty(object, object)
0x82: Push((int) 634)
0x83: Push((int) 1)
0x84: Push((int) 533080)
0x85: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: PushEmpty(bool, object, int)
0x88: Stack[-4] = Stack[-2]
0x89: Stack[-1] = (int) 139
0x8a: Call2 0x9b

0x8b: Pop(3)
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(object, object)
0x8f: @ GetDiaryRoot(Stack[-1])
0x90: Pop(0)
0x91: Pop(0); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: Push("Can't retrieve diary root") // @poff=108
0x94: @ Trace(Stack[-1])
0x95: Pop(1)
0x96: Stack[-3] = (bool) 0
0x97: Return(); Pop(2)

0x98: Stack[-1] = Stack[-3]
0x99: Return(); Pop(2)

0x9a: Stack[-1] = 0
0x9b: PushEmpty(object, object, int, object, object, int)
0x9c: PushEmpty(object)
0x9d: Call2 0x8e

0x9e: Stack[-1] = Stack[-4]
0x9f: Pop(1)
0xa0: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=160
0xa1: Pop(0)
0xa2: Pop(0); Push((bool) Stack[-2] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa4: Push("Can't find diary parent with id: ") // @poff=165
0xa5: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa6: @ Trace(Stack[-1])
0xa7: Pop(1)
0xa8: Stack[-9] = (bool) 0
0xa9: Return(); Pop(6)

0xaa: @@ AddChild(Stack[-8]); Obj=2 // @poff=233
0xab: Pop(0)
0xac: Push((int) 7)
0xad: @ SendWorldWndMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ GetCategory(Stack[-1]); Obj=8 // @poff=242
0xb0: Pop(0)
0xb1: @ SetDiarySection(Stack[-1])
0xb2: Pop(0)
0xb3: Stack[-9] = (bool) 0
0xb4: Return(); Pop(6)

0xb5: Stack[-2] = 0
0xb6: Stack[-3] = 0
0xb7: PushEmpty()
0xb8: Stack[-2] = (bool) 0
0xb9: Push((int) 1)
0xba: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbc: Push((int) 1000)
0xbd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-2] = (bool) 1
0xc0: Return(); Pop(0)

