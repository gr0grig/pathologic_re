GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_b2q02_gatherer
	W:pers_morlok
	W:b2q02_gatherer.xml
	W:pt_b2q02_bride1
	W:pers_nudegirl
	W:b2q02_bride.xml
	W:move_bride
	A:Remove
	W:fail
	W:completed
	W:b2q02
	W:pt_b2q02_bride2
	W:b2q02_bride2.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:700074005f00620032007100300032005f0067006100740068006500720065007200000070006500720073005f006d006f0072006c006f006b000000620032007100300032005f00670061007400680065007200650072002e0078006d006c000000700074005f00620032007100300032005f00620072006900640065003100000070006500720073005f006e007500640065006700690072006c000000620032007100300032005f00620072006900640065002e0078006d006c0000006d006f00760065005f0062007200690064006500000052656d6f7665006600610069006c00000063006f006d0070006c0065007400650064000000620032007100300032000000700074005f00620032007100300032005f006200720069006400650032000000620032007100300032005f006200720069006400650032002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool) Params = 0
		EVENT_26 Op = 0x19 Vars = (string)
		EVENT_9 Op = 0x85 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string, string)
0x4: Stack[-6] = Stack[-4]
0x5: Stack[-3] = "pt_b2q02_gatherer" // @poff=0
0x6: Stack[-2] = "pers_morlok" // @poff=36
0x7: Stack[-1] = "b2q02_gatherer.xml" // @poff=60
0x8: Call2 0x90

0x9: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xa: Pop(5)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-6] = Stack[-4]
0xd: Stack[-3] = "pt_b2q02_bride1" // @poff=98
0xe: Stack[-2] = "pers_nudegirl" // @poff=130
0xf: Stack[-1] = "b2q02_bride.xml" // @poff=158
0x10: Call2 0x90

0x11: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(int)
0x14: Stack[-1] = (int) 2
0x15: Call2 0x72

0x16: Pop(1)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: @ Trace(Stack[-1])
0x1b: Pop(0)
0x1c: Push("move_bride") // @poff=190
0x1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x20: Push( Stack[1 + Tasks[-1].StackPointer] )
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: @@@ Remove(); Obj=1 // @poff=212
0x23: Pop(0)
0x24: GOTO 0x32

0x25: Push("fail") // @poff=219
0x26: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x28: PushEmpty()
0x29: Call2 0x3e

0x2a: Pop(0)
0x2b: GOTO 0x32

0x2c: Push("completed") // @poff=229
0x2d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2f: PushEmpty()
0x30: Call2 0x46

0x31: Pop(0)
0x32: Return(); Pop(0)

0x33: PushEmpty(int, int)
0x34: Push("b2q02") // @poff=249
0x35: @ GetVariable(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Push((int) 1000)
0x38: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3a: PushEmpty()
0x3b: Call2 0x3e

0x3c: Pop(0)
0x3d: Return(); Pop(2)

0x3e: Push("b2q02") // @poff=249
0x3f: Push((int) -1)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call2 0x4e

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: Push("b2q02") // @poff=249
0x47: Push((int) 1000)
0x48: @ SetVariable(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty()
0x4b: Call2 0x4e

0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(object, object)
0x4f: EventDisable(26)
0x50: Push( Stack[1 + Tasks[-1].StackPointer] )
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: @@@ Remove(); Obj=1 // @poff=212
0x53: Pop(0)
0x54: Push( Stack[0 + Tasks[-1].StackPointer] )
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: @@@ Remove(); Obj=0 // @poff=212
0x57: Pop(0)
0x58: @ GetMainOutdoorScene(Stack[-1])
0x59: Pop(0)
0x5a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5b: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5c: PushEmpty(object, object, string, string, string)
0x5d: Stack[-6] = Stack[-4]
0x5e: Stack[-3] = "pt_b2q02_bride2" // @poff=261
0x5f: Stack[-2] = "pers_nudegirl" // @poff=130
0x60: Stack[-1] = "b2q02_bride2.xml" // @poff=293
0x61: Call2 0x90

0x62: Pop(5)
0x63: GOTO 0x6b

0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-6] = Stack[-4]
0x66: Stack[-3] = "pt_b2q02_bride1" // @poff=98
0x67: Stack[-2] = "pers_nudegirl" // @poff=130
0x68: Stack[-1] = "b2q02_bride2.xml" // @poff=293
0x69: Call2 0x90

0x6a: Pop(5)
0x6b: PushEmpty(object)
0x6c: Call2 0x8a

0x6d: Pop(0)
0x6e: @ RemoveActor(Stack[-1])
0x6f: Pop(1)
0x70: Return(); Pop(2)

0x71: Stack[-1] = 0
0x72: PushEmpty(float, float)
0x73: @ GetGameTime(Stack[-1])
0x74: Pop(0)
0x75: Push((int) 24)
0x76: Pop(1); Push(Stack[-4] * Stack[-1]);
0x77: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x79: PushEmpty()
0x7a: Call2 0x4e

0x7b: Pop(0)
0x7c: GOTO 0x84

0x7d: Push((int) 0)
0x7e: Push((int) 24)
0x7f: Pop(1); Push(Stack[-5] * Stack[-1]);
0x80: @ SetTimeEvent(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: @ Hold()
0x83: Pop(0)
0x84: Return(); Pop(2)

0x85: PushEmpty()
0x86: PushEmpty()
0x87: Call2 0x33

0x88: Pop(0)
0x89: Return(); Pop(0)

0x8a: PushEmpty(object, object)
0x8b: @ self(Stack[-1])
0x8c: Pop(0)
0x8d: Stack[-1] = Stack[-3]
0x8e: Return(); Pop(2)

0x8f: Stack[-1] = 0
0x90: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x91: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=327
0x92: Pop(0)
0x93: Pop(0); Push((bool) Stack[-4] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x95: Push("Locator ") // @poff=338
0x96: Pop(1); Push(Stack[-1] + Stack[-12]);
0x97: Push(" doesn't exist") // @poff=356
0x98: Pop(2); Push(Stack[-2] + Stack[-1]);
0x99: @ Trace(Stack[-1])
0x9a: Pop(1)
0x9b: Stack[-1] = 0
0x9c: GOTO 0x9f

0x9d: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=386
0x9e: Pop(0)
0x9f: Stack[-1] = Stack[-13]
0xa0: Return(); Pop(8)

0xa1: Stack[-1] = 0
