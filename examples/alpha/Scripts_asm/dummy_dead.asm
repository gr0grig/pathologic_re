GlobalVarCount = 0

Strings:
	W:animation
	W:all
// @pool_raw:61006e0069006d006100740069006f006e00000061006c006c000000

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


0x0: PushEmpty(string, string)
0x1: @ RemoveRTEnvelope()
0x2: Pop(0)
0x3: @ RemoveEnvelope()
0x4: Pop(0)
0x5: @ SetDeathState()
0x6: Pop(0)
0x7: Push("animation") // @poff=0
0x8: @ GetProperty(Stack[-1], Stack[-2])
0x9: Pop(1)
0xa: Push("all") // @poff=20
0xb: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xc: Pop(1)
0xd: @ Hold()
0xe: Pop(0)
0xf: GOTO 0xd

0x10: Return(); Pop(2)

