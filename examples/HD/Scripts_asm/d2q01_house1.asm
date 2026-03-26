GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:space
	W:escape
	W:playing: 
	W:@Trigger : 
	W:d2q01_trigger
	W:scenes/d2q01_trigger.mot
	W:quest_b1_05
	W:house_load
// @pool_raw:730070006100630065000000650073006300610070006500000070006c006100790069006e0067003a00200000004000540072006900670067006500720020003a0020000000640032007100300031005f00740072006900670067006500720000007300630065006e00650073002f00640032007100300031005f0074007200690067006700650072002e006d006f0074000000710075006500730074005f00620031005f0030003500000068006f007500730065005f006c006f00610064000000

Import:
	RegisterKeyCallback (1 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	Hold (0 args)
	FindActor (2 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x28
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_24 Op = 0x12 Vars = (int)
	GTASK_1  Params = 0
		EVENT_26 Op = 0x2c Vars = (string)
		EVENT_5 Op = 0x3b Vars = ()
		EVENT_6 Op = 0x41 Vars = ()


0x0: PushEmpty()
0x1: Push("space") // @poff=0
0x2: @ RegisterKeyCallback(Stack[-1])
0x3: Pop(1)
0x4: Push("escape") // @poff=12
0x5: @ RegisterKeyCallback(Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(string)
0x8: Stack[-2] = Stack[-1]
0x9: Call2 0x16

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
0x1b: PushEmpty()
0x1c: Call2 0x4e

0x1d: Pop(0)
0x1e: @ CameraPlay(Stack[-1])
0x1f: Pop(0)
0x20: @ CameraWaitForPlayFinish()
0x21: Pop(0)
0x22: PushEmpty()
0x23: Call2 0x53

0x24: Pop(0)
0x25: @ CameraSwitchToNormal()
0x26: Pop(0)
0x27: Return(); Pop(0)

0x28: @ Hold()
0x29: Pop(0)
0x2a: GOTO 0x28

0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push("@Trigger : ") // @poff=46
0x2e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2f: @ Trace(Stack[-1])
0x30: Pop(1)
0x31: Push("d2q01_trigger") // @poff=70
0x32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x34: PushEmpty(string)
0x35: Stack[-1] = "scenes/d2q01_trigger.mot" // @poff=98
0x36: Push(-1, 0); TaskCall(0)
0x37: Call2 0x0

0x38: Pop(-1, 0); TaskReturn
0x39: Pop(1)
0x3a: Return(); Pop(0)

0x3b: PushEmpty(bool, string, string)
0x3c: Stack[-2] = "quest_b1_05" // @poff=148
0x3d: Stack[-1] = "house_load" // @poff=172
0x3e: Call2 0x42

0x3f: Pop(3)
0x40: Return(); Pop(0)

0x41: Return(); Pop(0)

0x42: PushEmpty(object, object)
0x43: @ FindActor(Stack[-1], Stack[-4])
0x44: Pop(0)
0x45: Pop(0); PushNull((bool) Stack[-1] == 0)
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: Stack[-5] = (bool) 0
0x48: Return(); Pop(2)

0x49: @ Trigger(Stack[-1], Stack[-3])
0x4a: Pop(0)
0x4b: Stack[-5] = (bool) 1
0x4c: Return(); Pop(2)

0x4d: Stack[-1] = 0
0x4e: Push((float)0.5)
0x4f: Push((float)0.8859999775886536)
0x50: @ SetSepia(Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: Return(); Pop(0)

0x53: Push((int) 0)
0x54: Push((int) 0)
0x55: @ SetSepia(Stack[-2], Stack[-1])
0x56: Pop(2)
0x57: Return(); Pop(0)

