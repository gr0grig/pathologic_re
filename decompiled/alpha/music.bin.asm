GlobalVarCount = 0

Strings:
	Playing music: 
	Nothing to play
	Next loop: 
	Playing loop: 
	Music time limit reached
	loop
	loop_stop
	music1.ogg

Import:
	IsExistingLoop (2 args)
	KillTimer (1 args)
	FadeMusic2 (0 args)
	WaitForMusicEnd2 (0 args)
	GetRegionMusic (1 args)
	AdvanceRegionMusic (0 args)
	SetTimer (2 args)
	Trace (1 args)
	PlayMusic1 (1 args)
	WaitForMusicEnd1 (0 args)
	Hold (0 args)
	GetRegionLoopCount (1 args)
	irand (2 args)
	GetRegionLoop (2 args)
	IsPlayingMusic2 (1 args)
	PlayMusic2 (1 args)
	IsExistingMusic (2 args)
	FadeMusic1 (0 args)
	StopGroup0 (0 args)
	StopMusic2 (0 args)
	PlayGlobalMusic (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string, bool) Params = 0
		EVENT_7 Op = 0x4d Vars = (int)
		EVENT_1000 Op = 0x76 Vars = (string, string)


0x0: PushEmpty(bool, bool)
0x1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x4: @ IsExistingLoop(Stack[-1], Stack[-1])
0x5: Pop(0)
0x6: Pop(0); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x8: @ IsExistingLoop(Stack[-2], Stack[-1])
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xc: Push((int) 0)
0xd: @ KillTimer(Stack[-1])
0xe: Pop(1)
0xf: @ FadeMusic2()
0x10: Pop(0)
0x11: @ WaitForMusicEnd2()
0x12: Pop(0)
0x13: PushEmpty()
0x14: Call 0x33

0x15: Pop(0)
0x16: @ GetRegionMusic(Stack[-0])
0x17: Pop(0)
0x18: @ AdvanceRegionMusic()
0x19: Pop(0)
0x1a: Push((int) 1)
0x1b: Push((int) 15)
0x1c: @ SetTimer(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1f: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x20: Push("Playing music: ")
0x21: Pop(1); Push(Stack[-1] + Stack[0 + StackPtr]);
0x22: @ Trace(Stack[-1])
0x23: Pop(1)
0x24: @ PlayMusic1(Stack[-0])
0x25: Pop(0)
0x26: @ WaitForMusicEnd1()
0x27: Pop(0)
0x28: GOTO 0x2e

0x29: Push("Nothing to play")
0x2a: @ Trace(Stack[-1])
0x2b: Pop(1)
0x2c: @ Hold()
0x2d: Pop(0)
0x2e: Push((int) 1)
0x2f: @ KillTimer(Stack[-1])
0x30: Pop(1)
0x31: GOTO 0x2

0x32: Return(); Pop(2)

0x33: PushEmpty(int, int, int, int, int, int)
0x34: @ GetRegionLoopCount(Stack[-3])
0x35: Pop(0)
0x36: Push(Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x38: Push((int) 40)
0x39: @ irand(Stack[-3], Stack[-1])
0x3a: Pop(1)
0x3b: Push((int) 30)
0x3c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d: @ irand(Stack[-1], Stack[-3])
0x3e: Pop(0)
0x3f: @ GetRegionLoop(Stack[-1], Stack[-2])
0x40: Pop(0)
0x41: Push("Next loop: ")
0x42: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x43: @ Trace(Stack[-1])
0x44: Pop(1)
0x45: Push((int) 0)
0x46: @ SetTimer(Stack[-1], Stack[-3])
0x47: Pop(1)
0x48: GOTO 0x4c

0x49: Push((int) 0)
0x4a: @ KillTimer(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(6)

0x4d: PushEmpty(bool, bool, bool, bool)
0x4e: Push((int) 0)
0x4f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x51: @ IsPlayingMusic2(Stack[-2])
0x52: Pop(0)
0x53: Pop(0); Push((bool) Stack[-2] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x55: Stack[1 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer]
0x56: Push("Playing loop: ")
0x57: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x58: @ Trace(Stack[-1])
0x59: Pop(1)
0x5a: @ PlayMusic2(Stack[-2])
0x5b: Pop(0)
0x5c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5d: PushEmpty()
0x5e: Call 0x33

0x5f: Pop(0)
0x60: GOTO 0x75

0x61: Push((int) 1)
0x62: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x64: @ IsExistingMusic(Stack[-0], Stack[-1])
0x65: Pop(0)
0x66: Pop(0); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x68: Push((int) 1)
0x69: @ KillTimer(Stack[-1])
0x6a: Pop(1)
0x6b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6d: @ FadeMusic1()
0x6e: Pop(0)
0x6f: GOTO 0x72

0x70: @ StopGroup0()
0x71: Pop(0)
0x72: Push("Music time limit reached")
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Return(); Pop(4)

0x76: PushEmpty()
0x77: Push("loop")
0x78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7a: Push("Playing loop: ")
0x7b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x7c: @ Trace(Stack[-1])
0x7d: Pop(1)
0x7e: @ PlayMusic2(Stack[-1])
0x7f: Pop(0)
0x80: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x81: GOTO 0x8f

0x82: Push("loop_stop")
0x83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: @ StopMusic2()
0x86: Pop(0)
0x87: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x88: GOTO 0x8f

0x89: Stack[-2] = "play"
0x8a: Push(Stack[-2])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: Push("music1.ogg")
0x8d: @ PlayGlobalMusic(Stack[-1])
0x8e: Pop(1)
0x8f: Return(); Pop(0)

