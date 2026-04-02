GlobalVarCount = 0

Strings:
	A:IsLost
	A:Restore
	A:StretchBlit
	W:ocular
	A:Stop
	W:ui_no_blood.wmv
	W:ui_blood.wmv
	W:ui_diseased_blood.wmv
	W:ui_diseased_alive_blood.wmv
	W:ui_bull_blood.wmv
	W:ui_avroks_blood.wmv
	W:ui_simon_blood.wmv
	W:WRONG BLOOD NUMBER
	A:Play
// @pool_raw:49734c6f737400526573746f72650053747265746368426c6974006f00630075006c0061007200000053746f7000750069005f006e006f005f0062006c006f006f0064002e0077006d0076000000750069005f0062006c006f006f0064002e0077006d0076000000750069005f00640069007300650061007300650064005f0062006c006f006f0064002e0077006d0076000000750069005f00640069007300650061007300650064005f0061006c006900760065005f0062006c006f006f0064002e0077006d0076000000750069005f00620075006c006c005f0062006c006f006f0064002e0077006d0076000000750069005f006100760072006f006b0073005f0062006c006f006f0064002e0077006d0076000000750069005f00730069006d006f006e005f0062006c006f006f0064002e0077006d0076000000570052004f004e004700200042004c004f004f00440020004e0055004d004200450052000000506c617900
// @pool_encoding:utf8

Import:
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	StretchBlit (5 args)
	ReleaseVideo (1 args)
	Trace (1 args)
	LoadVideo (1 args)
	FindVideo (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, int, int, int, string) Params = 0
		EVENT_0 Op = 0x10 Vars = ()
		EVENT_200 Op = 0x22 Vars = (int, string, object)


0x0: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x3: @ ClientToScreen(Stack[-1]T, Stack[-2]T)
0x4: Pop(0)
0x5: @ GetWindowSize(Stack[-3]T, Stack[-4]T)
0x6: Pop(0)
0x7: PushEmpty()
0x8: Call2 0x2f

0x9: Pop(0)
0xa: Push((bool) 1)
0xb: @ SetOwnerDraw(Stack[-1])
0xc: Pop(1)
0xd: @ ProcessEvents()
0xe: Pop(0)
0xf: Return(); Pop(0)

0x10: PushEmpty(bool, bool, bool, bool)
0x11: @@@ IsLost(Stack[-2]); Obj=0 // @poff=0
0x12: Pop(0)
0x13: Push(Stack[-2])
0x14: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x15: @@@ Restore(Stack[-1]); Obj=0 // @poff=7
0x16: Pop(0)
0x17: Pop(0); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: Return(); Pop(4)

0x1a: @@@ StretchBlit(Stack[-1]T, Stack[-2]T, Stack[-3]T, Stack[-4]T); Obj=0 // @poff=15
0x1b: Pop(0)
0x1c: Push("ocular") // @poff=27
0x1d: Push((int) 0)
0x1e: Push((int) 0)
0x1f: @ StretchBlit(Stack[-3], Stack[-2], Stack[-1], Stack[-3]T, Stack[-4]T)
0x20: Pop(3)
0x21: Return(); Pop(4)

0x22: PushEmpty()
0x23: Pop(0); Push((bool) Stack[-3] == Stack[5 + Tasks[-1].StackPointer])
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Return(); Pop(0)

0x26: Push( Stack[0 + Tasks[-1].StackPointer] )
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: @@@ Stop(); Obj=0 // @poff=41
0x29: Pop(0)
0x2a: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0x2b: PushEmpty()
0x2c: Call2 0x2f

0x2d: Pop(0)
0x2e: Return(); Pop(0)

0x2f: @ ReleaseVideo(Stack[-6]T)
0x30: Pop(0)
0x31: Push((int) 0)
0x32: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[6 + Tasks[-1].StackPointer] = "ui_no_blood.wmv" // @poff=46
0x35: GOTO 0x58

0x36: Push((int) 1)
0x37: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[6 + Tasks[-1].StackPointer] = "ui_blood.wmv" // @poff=78
0x3a: GOTO 0x58

0x3b: Push((int) 2)
0x3c: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[6 + Tasks[-1].StackPointer] = "ui_diseased_blood.wmv" // @poff=104
0x3f: GOTO 0x58

0x40: Push((int) 3)
0x41: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x43: Stack[6 + Tasks[-1].StackPointer] = "ui_diseased_alive_blood.wmv" // @poff=148
0x44: GOTO 0x58

0x45: Push((int) 4)
0x46: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x48: Stack[6 + Tasks[-1].StackPointer] = "ui_bull_blood.wmv" // @poff=204
0x49: GOTO 0x58

0x4a: Push((int) 5)
0x4b: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4d: Stack[6 + Tasks[-1].StackPointer] = "ui_avroks_blood.wmv" // @poff=240
0x4e: GOTO 0x58

0x4f: Push((int) 6)
0x50: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[6 + Tasks[-1].StackPointer] = "ui_simon_blood.wmv" // @poff=280
0x53: GOTO 0x58

0x54: Push("WRONG BLOOD NUMBER") // @poff=318
0x55: @ Trace(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(0)

0x58: @ LoadVideo(Stack[-6]T)
0x59: Pop(0)
0x5a: @ FindVideo(Stack[-0]T, Stack[-6]T)
0x5b: Pop(0)
0x5c: Push((bool) 1)
0x5d: @@@ Play(Stack[-1]); Obj=0 // @poff=356
0x5e: Pop(1)
0x5f: Return(); Pop(0)

