GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:space
	W:escape
	W:playing: 
	W:@Trigger : 
	W:d2q01_trigger
	W:scenes/d2q01_trigger.mot
// @pool_raw:730070006100630065000000650073006300610070006500000070006c006100790069006e0067003a00200000004000540072006900670067006500720020003a0020000000640032007100300031005f00740072006900670067006500720000007300630065006e00650073002f00640032007100300031005f0074007200690067006700650072002e006d006f0074000000

Import:
	RegisterKeyCallback (1 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	Hold (0 args)

RunOp = 0x22
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_24 Op = 0x12 Vars = (int)
	GTASK_1  Params = 0
		EVENT_26 Op = 0x26 Vars = (string)


0x0: PushEmpty()
0x1: Push("space") // @poff=0
0x2: @ RegisterKeyCallback(Stack[-1])
0x3: Pop(1)
0x4: Push("escape") // @poff=12
0x5: @ RegisterKeyCallback(Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(string)
0x8: Stack[-2] = Stack[-1]
0x9: Call 0x16

0xa: Pop(1)
0xb: Push("escape") // @poff=12
0xc: @ UnregisterKeyCallback(Stack[-1])
0xd: Pop(1)
0xe: Push("space") // @poff=0
0xf: @ UnregisterKeyCallback(Stack[-1])
0x10: Pop(1)
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: @ CameraSwitchToNormal()
0x14: Pop(0)
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: Push("playing: ") // @poff=26
0x18: Pop(1); Push(Stack[-1] + Stack[-2]);
0x19: @ Trace(Stack[-1])
0x1a: Pop(1)
0x1b: @ CameraPlay(Stack[-1])
0x1c: Pop(0)
0x1d: @ CameraWaitForPlayFinish()
0x1e: Pop(0)
0x1f: @ CameraSwitchToNormal()
0x20: Pop(0)
0x21: Return(); Pop(0)

0x22: @ Hold()
0x23: Pop(0)
0x24: GOTO 0x22

0x25: Return(); Pop(0)

0x26: PushEmpty()
0x27: Push("@Trigger : ") // @poff=46
0x28: Pop(1); Push(Stack[-1] + Stack[-2]);
0x29: @ Trace(Stack[-1])
0x2a: Pop(1)
0x2b: Push("d2q01_trigger") // @poff=70
0x2c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2e: PushEmpty(string)
0x2f: Stack[-1] = "scenes/d2q01_trigger.mot" // @poff=98
0x30: Push(-1, 0); TaskCall(0)
0x31: Call 0x0

0x32: Pop(-1, 0); TaskReturn
0x33: Pop(1)
0x34: Return(); Pop(0)

