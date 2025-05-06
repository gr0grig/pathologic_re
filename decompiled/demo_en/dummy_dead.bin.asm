GlobalVarCount = 0

Strings:
	animation
	all

Import:
	RemoveRTEnvelope (0 args)
	RemoveEnvelope (0 args)
	SetDeathState (0 args)
	GetProperty (2 args)
	LockAnimationEnd (2 args)
	Hold (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x11 Vars = ()


0x0: PushEmpty(string, string)
0x1: @ RemoveRTEnvelope()
0x2: Pop(0)
0x3: @ RemoveEnvelope()
0x4: Pop(0)
0x5: @ SetDeathState()
0x6: Pop(0)
0x7: Push("animation")
0x8: @ GetProperty(Stack[-1], Stack[-2])
0x9: Pop(1)
0xa: Push("all")
0xb: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xc: Pop(1)
0xd: @ Hold()
0xe: Pop(0)
0xf: GOTO 0xd

0x10: Return(); Pop(2)

0x11: PushEmpty(string, string)
0x12: Push("animation")
0x13: @ GetProperty(Stack[-1], Stack[-2])
0x14: Pop(1)
0x15: Push("all")
0x16: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x17: Pop(1)
0x18: Return(); Pop(2)

