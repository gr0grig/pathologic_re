GlobalVarCount = 0

Strings:
	all
	idle

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	RemoveEnvelope (0 args)
	RemoveRTEnvelope (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAnimation (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	HasAnimation (3 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
	GTASK_2  Params = 0
		EVENT_6 Op = 0x47 Vars = ()
	GTASK_3  Params = 0
		EVENT_6 Op = 0x53 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(int, int)
0x7: @ RemoveEnvelope()
0x8: Pop(0)
0x9: @ RemoveRTEnvelope()
0xa: Pop(0)
0xb: PushEmpty(bool)
0xc: Call 0x56

0xd: Pop(0)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x10: PushEmpty()
0x11: Push(-0, 0); TaskCall(0)
0x12: Call 0x0

0x13: Pop(-0, 0); TaskReturn
0x14: Pop(0)
0x15: Push((int) 3)
0x16: @ irand(Stack[-2], Stack[-1])
0x17: Pop(1)
0x18: Push((int) 0)
0x19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1b: PushEmpty()
0x1c: Push(-0, 0); TaskCall(2)
0x1d: Call 0x28

0x1e: Pop(-0, 0); TaskReturn
0x1f: Pop(0)
0x20: GOTO 0x26

0x21: PushEmpty()
0x22: Push(-0, 0); TaskCall(3)
0x23: Call 0x4a

0x24: Pop(-0, 0); TaskReturn
0x25: Pop(0)
0x26: GOTO 0xb

0x27: Return(); Pop(2)

0x28: PushEmpty(int, int, int, int, int, int)
0x29: Push((int) 3)
0x2a: @ irand(Stack[-4], Stack[-1])
0x2b: Pop(1)
0x2c: Pop(0); Push((bool) Stack[-3] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x2e: PushEmpty(int)
0x2f: Call 0x68

0x30: Stack[-3] = Stack[-1]
0x31: Pop(1)
0x32: Push(Stack[-2])
0x33: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x34: @ irand(Stack[-1], Stack[-2])
0x35: Pop(0)
0x36: Push("all")
0x37: PushEmpty(string, int)
0x38: Stack[-1] = Stack[-4]
0x39: Call 0x62

0x3a: Pop(1)
0x3b: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: @ WaitForAnimEnd()
0x3e: Pop(0)
0x3f: GOTO 0x46

0x40: Push("all")
0x41: Push("idle")
0x42: @ PlayAnimation(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: @ WaitForAnimEnd()
0x45: Pop(0)
0x46: Return(); Pop(6)

0x47: @ StopAnimation()
0x48: Pop(0)
0x49: Return(); Pop(0)

0x4a: PushEmpty(float, float)
0x4b: Push((int) 3)
0x4c: @ rand(Stack[-2], Stack[-1])
0x4d: Pop(1)
0x4e: Push((int) 5)
0x4f: Pop(1); Push(Stack[-2] + Stack[-1]);
0x50: @ Sleep(Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(2)

0x53: @ StopGroup0()
0x54: Pop(0)
0x55: Return(); Pop(0)

0x56: PushEmpty(bool, bool)
0x57: @ IsLoaded(Stack[-1])
0x58: Pop(0)
0x59: Stack[-3] = Stack[-1]
0x5a: Return(); Pop(2)

0x5b: PushEmpty(string, string)
0x5c: Stack[-1] = "idle"
0x5d: Push(Stack[-3])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x60: Stack[-4] = Stack[-1]
0x61: Return(); Pop(2)

0x62: PushEmpty()
0x63: Push("idle")
0x64: Push((int) 1)
0x65: Pop(1); Push(Stack[-3] + Stack[-1]);
0x66: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x67: Return(); Pop(0)

0x68: PushEmpty(int, bool, int, bool)
0x69: Stack[-2] = (int) 0
0x6a: Push("all")
0x6b: PushEmpty(string, int)
0x6c: Push((int) 1)
0x6d: Stack[-2] = Stack[-6] + Stack[-1]; Pop(1);
0x6e: Call 0x5b

0x6f: Pop(1)
0x70: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: Pop(0); Push((bool) Stack[-1] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x74: GOTO 0x78

0x75: Push((int) 1)
0x76: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x77: GOTO 0x6a

0x78: Stack[-5] = Stack[-2]
0x79: Return(); Pop(4)

