GlobalVarCount = 0

Strings:
	voices
	voice
	whiten
	final_theater_cam.mot
	exit

Import:
	Hold (0 args)
	Trace (1 args)
	PlaySound (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	sync (1 args)
	ModDarkenLevel (1 args)
	CameraSwitchToNormal (0 args)
	TriggerWorld (1 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(float, float, float, float)
0x5: @ Trace(Stack[-5])
0x6: Pop(0)
0x7: Push("voices")
0x8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xa: Push("voice")
0xb: @ PlaySound(Stack[-1])
0xc: Pop(1)
0xd: GOTO 0x31

0xe: Push("whiten")
0xf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x11: PushEmpty()
0x12: Call2 0x32

0x13: Pop(0)
0x14: Push("final_theater_cam.mot")
0x15: @ CameraPlay(Stack[-1])
0x16: Pop(1)
0x17: @ CameraWaitForPlayFinish()
0x18: Pop(0)
0x19: Stack[-2] = (int) 0
0x1a: Push((int) 1)
0x1b: @ Trace(Stack[-1])
0x1c: Pop(1)
0x1d: @ sync(Stack[-1])
0x1e: Pop(0)
0x1f: Push((float)1.0)
0x20: Pop(1); Push(Stack[-2] * Stack[-1]);
0x21: Push((float)2.0)
0x22: Pop(2); Push(Stack[-2] / Stack[-1]);
0x23: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x24: @ ModDarkenLevel(Stack[-2])
0x25: Pop(0)
0x26: Push((int) 1)
0x27: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x29: PushEmpty()
0x2a: Call2 0x37

0x2b: Pop(0)
0x2c: @ CameraSwitchToNormal()
0x2d: Pop(0)
0x2e: Push("exit")
0x2f: @ TriggerWorld(Stack[-1])
0x30: Pop(1)
0x31: Return(); Pop(4)

0x32: Push((float)0.5)
0x33: Push((float)0.886)
0x34: @ SetSepia(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: Return(); Pop(0)

0x37: Push((int) 0)
0x38: Push((int) 0)
0x39: @ SetSepia(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: Return(); Pop(0)

