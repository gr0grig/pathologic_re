GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	Neutral
	GetPosition
	playing 
	start: 
	end: 
	No

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshWaitForAnimEnd (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x5d

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x3d

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x42

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x5e

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x31

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x32: @@ GetPosition(Stack[-4])
0x33: Pop(0)
0x34: @ GetPosition(Stack[-3])
0x35: Pop(0)
0x36: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x37: Push(CvectorIndex(Stack[-2], 0))
0x38: Push(CvectorIndex(Stack[-3], 2))
0x39: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3a: Pop(2)
0x3b: Stack[-10] = Stack[-1]
0x3c: Return(); Pop(8)

0x3d: PushEmpty(bool, bool)
0x3e: @ IsLoaded(Stack[-1])
0x3f: Pop(0)
0x40: Stack[-3] = Stack[-1]
0x41: Return(); Pop(2)

0x42: PushEmpty(float, float, float, float)
0x43: Push("playing ")
0x44: Pop(1); Push(Stack[-1] + Stack[-6]);
0x45: @ Trace(Stack[-1])
0x46: Pop(1)
0x47: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x48: Pop(0)
0x49: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x4a: Pop(0)
0x4b: Push("start: ")
0x4c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x4d: @ Trace(Stack[-1])
0x4e: Pop(1)
0x4f: Push("end: ")
0x50: Pop(1); Push(Stack[-1] + Stack[-2]);
0x51: @ Trace(Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(4)

0x54: PushEmpty(bool, bool)
0x55: PushEmpty(string)
0x56: Stack[-1] = "No"
0x57: Call 0x42

0x58: Pop(1)
0x59: @ lshWaitForAnimEnd(Stack[-1])
0x5a: Pop(0)
0x5b: Stack[-3] = Stack[-1]
0x5c: Return(); Pop(2)

0x5d: Return(); Pop(0)

0x5e: PushEmpty()
0x5f: PushEmpty(bool)
0x60: Call 0x54

0x61: Pop(1)
0x62: Return(); Pop(0)

