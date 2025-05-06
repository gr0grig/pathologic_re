GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	torch
	Can't find torch particle system
	AddSource
	Enable
	remove
	Fade

Import:
	FindParticleSystem (2 args)
	Trace (1 args)
	Hold (0 args)
	Sleep (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x19 Vars = (string)
	GTASK_1  Params = 0


0x0: PushEmpty(object, object)
0x1: Push("torch")
0x2: @ FindParticleSystem(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Pop(0); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x6: Push("Can't find torch particle system")
0x7: @ Trace(Stack[-1])
0x8: Pop(1)
0x9: Return(); Pop(2)

0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: Push(CVector(0.0, 1.0, 0.0))
0xc: Push((float)0.0)
0xd: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(3)
0xf: @@ Enable()
0x10: Pop(0)
0x11: Push(GlobalVars[0])
0x12: Stack[-1] = Stack[-2]
0x13: GlobalVars[0] = Stack[-1]; Pop(1)
0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: Push("remove")
0x1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(1)
0x1f: Call2 0x23

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: Push(GlobalVars[0])
0x24: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x25: Push(GlobalVars[0])
0x26: @@ Fade()
0x27: Pop(1)
0x28: Push((int) 1)
0x29: @ Sleep(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(object)
0x2c: Call2 0x33

0x2d: Pop(0)
0x2e: @ RemoveActor(Stack[-1])
0x2f: Pop(1)
0x30: @ Hold()
0x31: Pop(0)
0x32: Return(); Pop(0)

0x33: PushEmpty(object, object)
0x34: @ self(Stack[-1])
0x35: Pop(0)
0x36: Stack[-3] = Stack[-1]
0x37: Return(); Pop(2)

0x38: Stack[-1] = 0
