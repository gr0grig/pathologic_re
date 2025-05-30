GlobalVarCount = 0

Strings:
	shot
	samopal
	rifle
	revolver
	_blast
	_blast.tex

Import:
	Hold (0 args)
	GetCurrentWeapon (1 args)
	GetGeometryLocator (3 args)
	SetLitColor (1 args)
	MakeBillboard (4 args)
	Sleep (1 args)
	RemoveBillboard (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: Push("shot")
0x7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x9: PushEmpty()
0xa: Call2 0xd

0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(string, float, float, bool, cvector, string, float, float, bool, cvector)
0xe: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(10)

0x11: @ GetCurrentWeapon(Stack[-5])
0x12: Pop(0)
0x13: Push("samopal")
0x14: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x16: Stack[-4] = (int) 18
0x17: Stack[-3] = (float) 0.03333
0x18: GOTO 0x26

0x19: Push("rifle")
0x1a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1c: Stack[-4] = (int) 18
0x1d: Stack[-3] = (float) 0.075
0x1e: GOTO 0x26

0x1f: Push("revolver")
0x20: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x22: Stack[-4] = (int) 15
0x23: Stack[-3] = (float) 0.075
0x24: GOTO 0x26

0x25: Return(); Pop(10)

0x26: Push("_blast")
0x27: Pop(1); Push(Stack[-6] + Stack[-1]);
0x28: @ GetGeometryLocator(Stack[-1], Stack[-3], Stack[-2])
0x29: Pop(1)
0x2a: Push(Stack[-2])
0x2b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x2c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2d: Push(CVector(0.49608, 0.41765, 0.16863))
0x2e: @ SetLitColor(Stack[-1])
0x2f: Pop(1)
0x30: Push("blast")
0x31: Push("_blast.tex")
0x32: Pop(1); Push(Stack[-7] + Stack[-1]);
0x33: @ MakeBillboard(Stack[-2], Stack[-1], Stack[-3], Stack[-6])
0x34: Pop(2)
0x35: @ Sleep(Stack[-3])
0x36: Pop(0)
0x37: Push(CVector(0.0, 0.0, 0.0))
0x38: @ SetLitColor(Stack[-1])
0x39: Pop(1)
0x3a: Push("blast")
0x3b: @ RemoveBillboard(Stack[-1])
0x3c: Pop(1)
0x3d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e: Return(); Pop(10)

