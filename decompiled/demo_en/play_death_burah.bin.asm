GlobalVarCount = 0

Strings:
	danko_death.mot
	gameover.xml
	player

Import:
	RemoveOverride (0 args)
	ModBlurLevel (1 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	CameraPlayRel (2 args)
	Sleep (1 args)
	CameraWaitForPlayFinish (0 args)
	GameOver (1 args)
	Hold (0 args)
	FindActor (2 args)
	ModDarkenLevel (1 args)
	sync (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: @ RemoveOverride()
0x1: Pop(0)
0x2: Push((float)0.15)
0x3: @ ModBlurLevel(Stack[-1])
0x4: Pop(1)
0x5: @ CameraSwitchToNormal()
0x6: Pop(0)
0x7: PushEmpty(object)
0x8: Call2 0x21

0x9: Pop(0)
0xa: @ RemoveActor(Stack[-1])
0xb: Pop(1)
0xc: Push("danko_death.mot")
0xd: Push((bool) 1)
0xe: @ CameraPlayRel(Stack[-2], Stack[-1])
0xf: Pop(2)
0x10: Push((float)1.5)
0x11: @ Sleep(Stack[-1])
0x12: Pop(1)
0x13: PushEmpty(float, float, float)
0x14: Stack[-3] = (int) 0
0x15: Stack[-2] = (int) 1
0x16: Stack[-1] = (float) 1.25
0x17: Call2 0x28

0x18: Pop(3)
0x19: @ CameraWaitForPlayFinish()
0x1a: Pop(0)
0x1b: Push("gameover.xml")
0x1c: @ GameOver(Stack[-1])
0x1d: Pop(1)
0x1e: @ Hold()
0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(object, object)
0x22: Push("player")
0x23: @ FindActor(Stack[-2], Stack[-1])
0x24: Pop(1)
0x25: Stack[-3] = Stack[-1]
0x26: Return(); Pop(2)

0x27: Stack[-1] = 0
0x28: PushEmpty(bool, float, float, bool, float, float)
0x29: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x2a: Pop(0); Push(Stack[-8] - Stack[-9]);
0x2b: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x2c: Push(Stack[-3])
0x2d: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2e: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x2f: GOTO 0x31

0x30: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x31: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x32: @ ModDarkenLevel(Stack[-9])
0x33: Pop(0)
0x34: @ sync(Stack[-1])
0x35: Pop(0)
0x36: Pop(0); Push(Stack[-1] * Stack[-2]);
0x37: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x38: GOTO 0x2c

0x39: @ ModDarkenLevel(Stack[-8])
0x3a: Pop(0)
0x3b: Return(); Pop(6)

