GlobalVarCount = 0

Strings:
	Play
	IsLost
	Restore
	IsPlaying
	StretchBlit
	Stop
	fin_termit.wmv
	world_final.xml
	player_final.xml

Import:
	SetOwnerDraw (1 args)
	ShowCursor (1 args)
	CaptureKeyboard (0 args)
	GetWindowSize (2 args)
	LoadVideo (1 args)
	FindVideo (2 args)
	ProcessEvents (0 args)
	ReleaseVideo (1 args)
	StopEventProcessing (0 args)
	UISync (0 args)
	DestroyWindow (0 args)
	NewGame (2 args)

RunOp = 0x59
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1  Params = 0


0x0: PushEmpty()
0x1: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x2: Push((bool) 1)
0x3: @ SetOwnerDraw(Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 0)
0x6: @ ShowCursor(Stack[-1])
0x7: Pop(1)
0x8: @ CaptureKeyboard()
0x9: Pop(0)
0xa: @ GetWindowSize(Stack[-1], Stack[-2])
0xb: Pop(0)
0xc: @ LoadVideo(Stack[-2])
0xd: Pop(0)
0xe: @ FindVideo(Stack[-0], Stack[-2])
0xf: Pop(0)
0x10: Push((bool) 0)
0x11: @@ Play(Stack[-1])
0x12: Pop(1)
0x13: @ ProcessEvents()
0x14: Pop(0)
0x15: Push((bool) 0)
0x16: @ SetOwnerDraw(Stack[-1])
0x17: Pop(1)
0x18: Push((bool) 1)
0x19: @ ShowCursor(Stack[-1])
0x1a: Pop(1)
0x1b: @ ReleaseVideo(Stack[-2])
0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty(bool, bool, bool, bool, bool, bool)
0x1f: @@ IsLost(Stack[-3])
0x20: Pop(0)
0x21: Push(Stack[-3])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: @@ Restore(Stack[-2])
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[-2] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Return(); Pop(6)

0x28: @@ IsPlaying(Stack[-1])
0x29: Pop(0)
0x2a: Push(Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push((int) 0)
0x2d: Push((int) 0)
0x2e: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x2f: Pop(2)
0x30: GOTO 0x37

0x31: Push((int) 0)
0x32: Push((int) 0)
0x33: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x34: Pop(2)
0x35: @ StopEventProcessing()
0x36: Pop(0)
0x37: Return(); Pop(6)

0x38: PushEmpty()
0x39: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Return(); Pop(0)

0x3c: PushEmpty(bool)
0x3d: Stack[-1] = (bool) 1
0x3e: PushEmpty(bool)
0x3f: Stack[-1] = (bool) 1
0x40: PushEmpty(bool)
0x41: Stack[-1] = (bool) 1
0x42: Push((int) 27)
0x43: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x45: Push((int) 32)
0x46: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: Stack[-1] = (bool) 0
0x49: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4a: Push((int) 257)
0x4b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4d: Stack[-1] = (bool) 0
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: Push((int) 262)
0x50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 0
0x53: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x54: @ StopEventProcessing()
0x55: Pop(0)
0x56: @@ Stop()
0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: EventDisable(1)
0x5a: EventDisable(0)
0x5b: @ UISync()
0x5c: Pop(0)
0x5d: EventEnable(1)
0x5e: EventEnable(0)
0x5f: PushEmpty(string, bool)
0x60: Stack[-2] = "fin_termit.wmv"
0x61: Stack[-1] = (bool) 0
0x62: Push(-2, 4); TaskCall(0)
0x63: Call2 0x0

0x64: Pop(-2, 4); TaskReturn
0x65: Pop(2)
0x66: @ DestroyWindow()
0x67: Pop(0)
0x68: Push("world_final.xml")
0x69: Push("player_final.xml")
0x6a: @ NewGame(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(0)

