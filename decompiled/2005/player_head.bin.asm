GlobalVarCount = 0

Strings:
	head

Import:
	PlayCameraMotion (1 args)
	WaitForCameraMotionEnd (0 args)
	IsWalking (1 args)
	StopCameraMotion (0 args)
	Hold (0 args)
	StopGroup0 (0 args)
	InterpolateCameraMotion (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_21 Op = 0x18 Vars = ()
	GTASK_1  Params = 0
		EVENT_20 Op = 0x23 Vars = ()
	GTASK_2  Params = 0


0x0: PushEmpty(bool, bool)
0x1: PushEmpty()
0x2: Push(-0, 0); TaskCall(1)
0x3: Call2 0x1b

0x4: Pop(-0, 0); TaskReturn
0x5: Pop(0)
0x6: Push("head")
0x7: @ PlayCameraMotion(Stack[-1])
0x8: Pop(1)
0x9: @ WaitForCameraMotionEnd()
0xa: Pop(0)
0xb: @ IsWalking(Stack[-1])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[-1] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: GOTO 0x11

0x10: GOTO 0x6

0x11: PushEmpty()
0x12: Push(-0, 0); TaskCall(2)
0x13: Call2 0x26

0x14: Pop(-0, 0); TaskReturn
0x15: Pop(0)
0x16: GOTO 0x1

0x17: Return(); Pop(2)

0x18: @ StopCameraMotion()
0x19: Pop(0)
0x1a: Return(); Pop(0)

0x1b: PushEmpty(bool, bool)
0x1c: @ IsWalking(Stack[-1])
0x1d: Pop(0)
0x1e: Pop(0); Push((bool) Stack[-1] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: @ Hold()
0x21: Pop(0)
0x22: Return(); Pop(2)

0x23: @ StopGroup0()
0x24: Pop(0)
0x25: Return(); Pop(0)

0x26: Push((float)0.08727)
0x27: Push((float)60.0)
0x28: @ InterpolateCameraMotion(Stack[-2], Stack[-1])
0x29: Pop(2)
0x2a: @ WaitForCameraMotionEnd()
0x2b: Pop(0)
0x2c: Return(); Pop(0)

