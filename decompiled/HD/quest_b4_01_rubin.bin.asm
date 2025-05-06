GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Confusion
	SetMessage
	ClearReplies
	AddReply
	Warning
	all
	idle
	Rage
	Neutral
	cleanup
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png
	oob4Rubin1
	b4q01
	oob4Rubin2
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2ba
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2af Vars = (object)
		EVENT_26 Op = 0x2e3 Vars = (string)
		EVENT_5 Op = 0x2eb Vars = ()
		EVENT_6 Op = 0x2f0 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x35d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x493

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x491

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x495

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x497

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x516

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x473

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3b4

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x3a2

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4c8

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x4b3

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Confusion"
0x63: Call2 0xae

0x64: Pop(1)
0x65: Push((int) 518556)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 518557)
0x6b: Push((int) 19668)
0x6c: Push((int) 19667)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 518965)
0x70: Push((int) 20084)
0x71: Push((int) 20077)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x90

0x75: PushEmpty(string)
0x76: Stack[-1] = "Warning"
0x77: Call2 0xae

0x78: Pop(1)
0x79: Push((int) 518560)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x4d4

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 518978)
0x84: Push((int) 20099)
0x85: Push((int) 20090)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 518561)
0x89: Push((int) -1)
0x8a: Push((int) 19671)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x55

0x90: PushEmpty(bool)
0x91: Call2 0x499

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0x43e

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all")
0xa9: Push("idle")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x499

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = Stack[-3]
0xba: Push("")
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0x44e

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0x46c

0xc9: Pop(0)
0xca: Push((int) 19669)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x4b9

0xd1: Pop(2)
0xd2: Push((int) 20131)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4b9

0xd9: Pop(2)
0xda: Push((int) 20090)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x4c2

0xe1: Pop(2)
0xe2: Push((int) 19666)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x4c8

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x4b3

0xee: Pop(2)
0xef: PushEmpty(string)
0xf0: Stack[-1] = "Confusion"
0xf1: Call2 0xae

0xf2: Pop(1)
0xf3: Push((int) 518556)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 518557)
0xf9: Push((int) 19668)
0xfa: Push((int) 19667)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 518965)
0xfe: Push((int) 20084)
0xff: Push((int) 20077)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Warning"
0x105: Call2 0xae

0x106: Pop(1)
0x107: Push((int) 518560)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call2 0x4d4

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: Push((int) 518978)
0x112: Push((int) 20099)
0x113: Push((int) 20090)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 518561)
0x117: Push((int) -1)
0x118: Push((int) 19671)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 20099)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Warning"
0x121: Call2 0xae

0x122: Pop(1)
0x123: Push((int) 518984)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 518985)
0x129: Push((int) 20101)
0x12a: Push((int) 20100)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 20101)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Confusion"
0x133: Call2 0xae

0x134: Pop(1)
0x135: Push((int) 518986)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 518987)
0x13b: Push((int) 20103)
0x13c: Push((int) 20102)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 20103)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Rage"
0x145: Call2 0xae

0x146: Pop(1)
0x147: Push((int) 518988)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 518989)
0x14d: Push((int) -1)
0x14e: Push((int) 20104)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 20084)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Warning"
0x157: Call2 0xae

0x158: Pop(1)
0x159: Push((int) 518972)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 518973)
0x15f: Push((int) 20086)
0x160: Push((int) 20085)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 20086)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Warning"
0x169: Call2 0xae

0x16a: Pop(1)
0x16b: Push((int) 518974)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 518976)
0x171: Push((int) 20089)
0x172: Push((int) 20088)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 20089)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Warning"
0x17b: Call2 0xae

0x17c: Pop(1)
0x17d: Push((int) 518977)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 518979)
0x183: Push((int) 20092)
0x184: Push((int) 20091)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 20092)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Rage"
0x18d: Call2 0xae

0x18e: Pop(1)
0x18f: Push((int) 518980)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 518981)
0x195: Push((int) 20087)
0x196: Push((int) 20093)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 19668)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Confusion"
0x19f: Call2 0xae

0x1a0: Pop(1)
0x1a1: Push((int) 518558)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 518966)
0x1a7: Push((int) 20087)
0x1a8: Push((int) 20078)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Push((int) 518967)
0x1ac: Push((int) 20080)
0x1ad: Push((int) 20079)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 20080)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Warning"
0x1b6: Call2 0xae

0x1b7: Pop(1)
0x1b8: Push((int) 518968)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 518969)
0x1be: Push((int) 20087)
0x1bf: Push((int) 20081)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 518970)
0x1c3: Push((int) 20083)
0x1c4: Push((int) 20082)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 20083)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Warning"
0x1cd: Call2 0xae

0x1ce: Pop(1)
0x1cf: Push((int) 518971)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 518982)
0x1d5: Push((int) 20084)
0x1d6: Push((int) 20096)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 20087)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Confusion"
0x1df: Call2 0xae

0x1e0: Pop(1)
0x1e1: Push((int) 518975)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 518993)
0x1e7: Push((int) 20110)
0x1e8: Push((int) 20108)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 518994)
0x1ec: Push((int) 20110)
0x1ed: Push((int) 20109)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 20110)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Rage"
0x1f6: Call2 0xae

0x1f7: Pop(1)
0x1f8: Push((int) 518995)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 518996)
0x1fe: Push((int) 20113)
0x1ff: Push((int) 20112)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 527917)
0x203: Push((int) 20113)
0x204: Push((int) 29266)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 20113)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Rage"
0x20d: Call2 0xae

0x20e: Pop(1)
0x20f: Push((int) 518997)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 518998)
0x215: Push((int) 20115)
0x216: Push((int) 20114)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 20115)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Rage"
0x21f: Call2 0xae

0x220: Pop(1)
0x221: Push((int) 518999)
0x222: @@ SetMessage(Stack[-1])
0x223: Pop(1)
0x224: @@ ClearReplies()
0x225: Pop(0)
0x226: Push((int) 519005)
0x227: Push((int) 20122)
0x228: Push((int) 20121)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Push((int) 519001)
0x22c: Push((int) 20118)
0x22d: Push((int) 20117)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Return(); Pop(0)

0x231: Push((int) 20118)
0x232: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x234: PushEmpty(string)
0x235: Stack[-1] = "Neutral"
0x236: Call2 0xae

0x237: Pop(1)
0x238: Push((int) 519002)
0x239: @@ SetMessage(Stack[-1])
0x23a: Pop(1)
0x23b: @@ ClearReplies()
0x23c: Pop(0)
0x23d: Push((int) 519003)
0x23e: Push((int) 20124)
0x23f: Push((int) 20119)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 20124)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call2 0xae

0x249: Pop(1)
0x24a: Push((int) 519007)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 519008)
0x250: Push((int) 20122)
0x251: Push((int) 20125)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 20122)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Confusion"
0x25a: Call2 0xae

0x25b: Pop(1)
0x25c: Push((int) 519006)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 519000)
0x262: Push((int) 20120)
0x263: Push((int) 20116)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 20120)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Confusion"
0x26c: Call2 0xae

0x26d: Pop(1)
0x26e: Push((int) 519004)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 519009)
0x274: Push((int) 20128)
0x275: Push((int) 20127)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 20128)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral"
0x27e: Call2 0xae

0x27f: Pop(1)
0x280: Push((int) 519010)
0x281: @@ SetMessage(Stack[-1])
0x282: Pop(1)
0x283: @@ ClearReplies()
0x284: Pop(0)
0x285: Push((int) 519011)
0x286: Push((int) 20130)
0x287: Push((int) 20129)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Push((int) 20130)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Neutral"
0x290: Call2 0xae

0x291: Pop(1)
0x292: Push((int) 519012)
0x293: @@ SetMessage(Stack[-1])
0x294: Pop(1)
0x295: @@ ClearReplies()
0x296: Pop(0)
0x297: Push((int) 518559)
0x298: Push((int) -1)
0x299: Push((int) 19669)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Push((int) 519013)
0x29d: Push((int) -1)
0x29e: Push((int) 20131)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a3: PushEmpty(bool)
0x2a4: Call2 0x499

0x2a5: Pop(0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a7: @ lshStopAnimation()
0x2a8: Pop(0)
0x2a9: GOTO 0x2ac

0x2aa: @ StopAnimation()
0x2ab: Pop(0)
0x2ac: Return(); Pop(0)

0x2ad: GOTO 0xc5

0x2ae: Return(); Pop(0)

0x2af: PushEmpty()
0x2b0: PushEmpty()
0x2b1: Call2 0x353

0x2b2: Pop(0)
0x2b3: PushEmpty(int, object)
0x2b4: Stack[-1] = Stack[-3]
0x2b5: Push(-2, 1); TaskCall(0)
0x2b6: Call2 0x0

0x2b7: Pop(-2, 1); TaskReturn
0x2b8: Pop(2)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty(float, float)
0x2bb: PushEmpty(bool)
0x2bc: Call2 0x358

0x2bd: Pop(0)
0x2be: Pop(1); Push((bool) Stack[-1] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c0: @ Hold()
0x2c1: Pop(0)
0x2c2: GOTO 0x2bb

0x2c3: Push((int) 3)
0x2c4: @ rand(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push((int) 3)
0x2c7: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2c8: @ Sleep(Stack[-1])
0x2c9: Pop(1)
0x2ca: PushEmpty()
0x2cb: Call2 0x302

0x2cc: Pop(0)
0x2cd: GOTO 0x2bb

0x2ce: Return(); Pop(2)

0x2cf: PushEmpty(bool, bool)
0x2d0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2d1: @ IsLoaded(Stack[-1])
0x2d2: Pop(0)
0x2d3: PushEmpty(bool)
0x2d4: Stack[-1] = (bool) 0
0x2d5: Pop(0); Push((bool) Stack[-2] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: PushEmpty(bool)
0x2d8: Call2 0x300

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Stack[-1] = (bool) 1
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: PushEmpty(object)
0x2de: Call2 0x473

0x2df: Pop(0)
0x2e0: @ RemoveActor(Stack[-1])
0x2e1: Pop(1)
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty()
0x2e4: Push("cleanup")
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: PushEmpty()
0x2e8: Call2 0x2cf

0x2e9: Pop(0)
0x2ea: Return(); Pop(0)

0x2eb: @ StopGroup0()
0x2ec: Pop(0)
0x2ed: @ sync()
0x2ee: Pop(0)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(bool)
0x2f1: Stack[-1] = (bool) 0
0x2f2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: PushEmpty(bool)
0x2f5: Call2 0x300

0x2f6: Pop(0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Stack[-1] = (bool) 1
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(object)
0x2fb: Call2 0x473

0x2fc: Pop(0)
0x2fd: @ RemoveActor(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(0)

0x300: Stack[-1] = (bool) 1
0x301: Return(); Pop(0)

0x302: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x303: @ WaitForAnimEnd()
0x304: Pop(0)
0x305: PushEmpty(bool)
0x306: Call2 0x358

0x307: Pop(0)
0x308: Pop(1); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Return(); Pop(14)

0x30b: PushEmpty(int)
0x30c: Call2 0x4a2

0x30d: Stack[-8] = Stack[-1]
0x30e: Pop(1)
0x30f: Stack[-6] = (int) 0
0x310: PushEmpty(bool)
0x311: Stack[-1] = (bool) 0
0x312: Push((int) 5)
0x313: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x315: PushEmpty(bool)
0x316: Call2 0x358

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: Stack[-1] = (bool) 1
0x31a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x31b: Push((int) 3)
0x31c: @ irand(Stack[-6], Stack[-1])
0x31d: Pop(1)
0x31e: Push((int) 0)
0x31f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x321: Push(Stack[-7])
0x322: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x323: @ irand(Stack[-4], Stack[-7])
0x324: Pop(0)
0x325: Push("all")
0x326: PushEmpty(string, int)
0x327: Stack[-1] = Stack[-7]
0x328: Call2 0x49b

0x329: Pop(1)
0x32a: @ PlayAnimation(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: @ WaitForAnimEnd(Stack[-3])
0x32d: Pop(0)
0x32e: Pop(0); Push((bool) Stack[-3] == 0)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: GOTO 0x34e

0x331: GOTO 0x343

0x332: Push((int) 1)
0x333: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x335: Push((int) 4)
0x336: @ rand(Stack[-3], Stack[-1])
0x337: Pop(1)
0x338: Push((int) 1)
0x339: Pop(1); Push(Stack[-3] + Stack[-1]);
0x33a: @ Sleep(Stack[-1], Stack[-2])
0x33b: Pop(1)
0x33c: Pop(0); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: GOTO 0x34e

0x33f: GOTO 0x343

0x340: Push(Stack[-6])
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: GOTO 0x34e

0x343: PushEmpty(bool)
0x344: Call2 0x351

0x345: Pop(0)
0x346: Pop(1); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x34e

0x349: @ ResetAAS()
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x34d: GOTO 0x310

0x34e: @ ResetAAS()
0x34f: Pop(0)
0x350: Return(); Pop(14)

0x351: Stack[-1] = (bool) 1
0x352: Return(); Pop(0)

0x353: @ StopAnimation()
0x354: Pop(0)
0x355: @ StopGroup0()
0x356: Pop(0)
0x357: Return(); Pop(0)

0x358: PushEmpty(bool, bool)
0x359: @ IsLoaded(Stack[-1])
0x35a: Pop(0)
0x35b: Stack[-3] = Stack[-1]
0x35c: Return(); Pop(2)

0x35d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x35e: @@ GetPosition(Stack[-8])
0x35f: Pop(0)
0x360: @@ GetEyesHeight(Stack[-9])
0x361: Pop(0)
0x362: Push(CvectorIndex(Stack[-8], 1))
0x363: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x364: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x365: @ GetPosition(Stack[-7])
0x366: Pop(0)
0x367: @ GetEyesHeight(Stack[-9])
0x368: Pop(0)
0x369: Push(CvectorIndex(Stack[-7], 1))
0x36a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x36b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x36c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x36d: Push(CvectorIndex(Stack[-6], 1))
0x36e: Stack[-1] = (int) 0
0x36f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x370: Pop(0); Push(Stack[-6] | Stack[-6]);
0x371: Pop(1); Push(Sqrt(Stack[-1]))
0x372: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x373: Stack[-5] = -Stack[-6]; Pop(0);
0x374: Pop(0); Push(Stack[-6] * Stack[-19]);
0x375: PushEmpty(cvector, cvector)
0x376: Push(CVector(0.0, 1.0, 0.0))
0x377: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x378: Call2 0x479

0x379: Pop(1)
0x37a: Push((int) 25)
0x37b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37d: Push(CVector(0.0, 10.0, 0.0))
0x37e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x37f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x380: @ IsOverrideActive(Stack[-2])
0x381: Pop(0)
0x382: Push(Stack[-2])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-21] = (bool) 0
0x385: Return(); Pop(18)

0x386: @ StopWorld()
0x387: Pop(0)
0x388: Push((bool) 1)
0x389: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x38a: Pop(1)
0x38b: Push(CvectorIndex(Stack[-4], 0))
0x38c: Push(CvectorIndex(Stack[-5], 2))
0x38d: @ Rotate(Stack[-2], Stack[-1])
0x38e: Pop(2)
0x38f: PushEmpty(bool)
0x390: Call2 0x499

0x391: Pop(0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x39c

0x394: Push("head")
0x395: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x396: Pop(1)
0x397: Push(Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: Push("head")
0x39a: @ LookAsyncCamera(Stack[-1])
0x39b: Pop(1)
0x39c: @ CameraWaitForPlayFinish()
0x39d: Pop(0)
0x39e: @ ResumeWorld()
0x39f: Pop(0)
0x3a0: Stack[-21] = (bool) 1
0x3a1: Return(); Pop(18)

0x3a2: PushEmpty(bool, bool)
0x3a3: Push((bool) 1)
0x3a4: @ CameraSwitchToNormal(Stack[-1])
0x3a5: Pop(1)
0x3a6: PushEmpty(bool)
0x3a7: Call2 0x499

0x3a8: Pop(0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: GOTO 0x3b3

0x3ab: Push("head")
0x3ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ad: Pop(1)
0x3ae: Push(Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b0: Push("head")
0x3b1: @ UnlookAsync(Stack[-1])
0x3b2: Pop(1)
0x3b3: Return(); Pop(2)

0x3b4: PushEmpty(int, int, int, int)
0x3b5: Push("voice_common")
0x3b6: @ GetVariable(Stack[-1], Stack[-3])
0x3b7: Pop(1)
0x3b8: Push(Stack[-2])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-1] = Stack[-7]
0x3bc: Call2 0x3ee

0x3bd: Pop(1)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c0: PushEmpty(bool, object)
0x3c1: Stack[-1] = Stack[-7]
0x3c2: Call2 0x413

0x3c3: Pop(1)
0x3c4: Pop(1); Push((bool) Stack[-1] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-6] = (bool) 0
0x3c7: Return(); Pop(4)

0x3c8: Push((int) 2)
0x3c9: @ irand(Stack[-2], Stack[-1])
0x3ca: Pop(1)
0x3cb: Push(Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cd: Push("voice_common")
0x3ce: Push((int) 1)
0x3cf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3d0: Push((int) 3)
0x3d1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3d2: @ SetVariable(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: GOTO 0x3d9

0x3d5: Push("voice_common")
0x3d6: Push((int) 0)
0x3d7: @ SetVariable(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: GOTO 0x3ec

0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[-7]
0x3dc: Call2 0x413

0x3dd: Pop(1)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[-7]
0x3e2: Call2 0x3ee

0x3e3: Pop(1)
0x3e4: Pop(1); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-6] = (bool) 0
0x3e7: Return(); Pop(4)

0x3e8: Push("voice_common")
0x3e9: Push((int) 1)
0x3ea: @ SetVariable(Stack[-2], Stack[-1])
0x3eb: Pop(2)
0x3ec: Stack[-6] = (bool) 1
0x3ed: Return(); Pop(4)

0x3ee: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ef: Stack[-5] = "c"
0x3f0: Stack[-4] = (int) 0
0x3f1: Push((int) 1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f3: Push((int) 1)
0x3f4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f6: @@ HasProperty(Stack[-1], Stack[-4])
0x3f7: Pop(1)
0x3f8: Pop(0); Push((bool) Stack[-3] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x3fe

0x3fb: Push((int) 1)
0x3fc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3fd: GOTO 0x3f1

0x3fe: Pop(0); Push((bool) Stack[-4] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-12] = (bool) 0
0x401: Return(); Pop(10)

0x402: Stack[-2] = (int) 0
0x403: Push((int) 1)
0x404: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: @ irand(Stack[-2], Stack[-4])
0x407: Pop(0)
0x408: Push((int) 1)
0x409: Pop(1); Push(Stack[-3] + Stack[-1]);
0x40a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40b: @@ GetProperty(Stack[-1], Stack[-2])
0x40c: Pop(1)
0x40d: PushEmpty(bool, string)
0x40e: Stack[-1] = Stack[-3]
0x40f: Call2 0x45d

0x410: Stack[-14] = Stack[-2]
0x411: Pop(2)
0x412: Return(); Pop(10)

0x413: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x414: Push("d")
0x415: PushEmpty(int)
0x416: Call2 0x488

0x417: Pop(0)
0x418: Pop(2); Push(Stack[-2] + Stack[-1]);
0x419: Push("m")
0x41a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x41b: Stack[-4] = (int) 0
0x41c: Push((int) 1)
0x41d: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41e: Push((int) 1)
0x41f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x420: Pop(1); Push(Stack[-6] + Stack[-1]);
0x421: @@ HasProperty(Stack[-1], Stack[-4])
0x422: Pop(1)
0x423: Pop(0); Push((bool) Stack[-3] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x429

0x426: Push((int) 1)
0x427: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x428: GOTO 0x41c

0x429: Pop(0); Push((bool) Stack[-4] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-12] = (bool) 0
0x42c: Return(); Pop(10)

0x42d: Stack[-2] = (int) 0
0x42e: Push((int) 1)
0x42f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x431: @ irand(Stack[-2], Stack[-4])
0x432: Pop(0)
0x433: Push((int) 1)
0x434: Pop(1); Push(Stack[-3] + Stack[-1]);
0x435: Pop(1); Push(Stack[-6] + Stack[-1]);
0x436: @@ GetProperty(Stack[-1], Stack[-2])
0x437: Pop(1)
0x438: PushEmpty(bool, string)
0x439: Stack[-1] = Stack[-3]
0x43a: Call2 0x45d

0x43b: Stack[-14] = Stack[-2]
0x43c: Pop(2)
0x43d: Return(); Pop(10)

0x43e: PushEmpty(bool, float, float, bool, float, float)
0x43f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x440: Pop(0)
0x441: Push(Stack[-3])
0x442: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x443: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x444: Pop(0)
0x445: Push((bool) 0)
0x446: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(1)
0x448: GOTO 0x44d

0x449: Push("Can't find lsh animation : ")
0x44a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x44b: @ Trace(Stack[-1])
0x44c: Pop(1)
0x44d: Return(); Pop(6)

0x44e: PushEmpty(bool, float, float, bool, float, float)
0x44f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x450: Pop(0)
0x451: Push(Stack[-3])
0x452: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x453: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x454: Pop(0)
0x455: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x456: Pop(0)
0x457: GOTO 0x45c

0x458: Push("Can't find lsh animation : ")
0x459: Pop(1); Push(Stack[-1] + Stack[-9]);
0x45a: @ Trace(Stack[-1])
0x45b: Pop(1)
0x45c: Return(); Pop(6)

0x45d: PushEmpty(bool, bool)
0x45e: PushEmpty(bool)
0x45f: Call2 0x499

0x460: Pop(0)
0x461: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x462: @ lshHasSpeech(Stack[-1], Stack[-3])
0x463: Pop(0)
0x464: Push(Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x466: @ lshPlaySpeech(Stack[-3])
0x467: Pop(0)
0x468: Stack[-4] = (bool) 1
0x469: Return(); Pop(2)

0x46a: Stack[-4] = (bool) 0
0x46b: Return(); Pop(2)

0x46c: PushEmpty(bool)
0x46d: Call2 0x499

0x46e: Pop(0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: @ lshStopSpeech()
0x471: Pop(0)
0x472: Return(); Pop(0)

0x473: PushEmpty(object, object)
0x474: @ self(Stack[-1])
0x475: Pop(0)
0x476: Stack[-3] = Stack[-1]
0x477: Return(); Pop(2)

0x478: Stack[-1] = 0
0x479: PushEmpty(float, float)
0x47a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x47b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x47c: Push((float)0.0)
0x47d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x480: Return(); Pop(2)

0x481: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x482: Return(); Pop(2)

0x483: PushEmpty(int, int)
0x484: @ GetVariable(Stack[-3], Stack[-1])
0x485: Pop(0)
0x486: Stack[-4] = Stack[-1]
0x487: Return(); Pop(2)

0x488: PushEmpty(float, float)
0x489: @ GetGameTime(Stack[-1])
0x48a: Pop(0)
0x48b: Push((int) 1)
0x48c: PushEmpty(int)
0x48d: Push((int) 24)
0x48e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x48f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x490: Return(); Pop(2)

0x491: Stack[-1] = (int) 515551
0x492: Return(); Pop(0)

0x493: Stack[-1] = (int) 502876
0x494: Return(); Pop(0)

0x495: Stack[-1] = "ui/NPC_Rubin.png"
0x496: Return(); Pop(0)

0x497: Stack[-1] = "ui/NPC_Rubin_b.png"
0x498: Return(); Pop(0)

0x499: Stack[-1] = (bool) 1
0x49a: Return(); Pop(0)

0x49b: PushEmpty(string, string)
0x49c: Stack[-1] = "idle"
0x49d: Push(Stack[-3])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4a0: Stack[-4] = Stack[-1]
0x4a1: Return(); Pop(2)

0x4a2: PushEmpty(int, bool, int, bool)
0x4a3: Stack[-2] = (int) 0
0x4a4: Push("all")
0x4a5: PushEmpty(string, int)
0x4a6: Stack[-1] = Stack[-5]
0x4a7: Call2 0x49b

0x4a8: Pop(1)
0x4a9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(2)
0x4ab: Pop(0); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: GOTO 0x4b1

0x4ae: Push((int) 1)
0x4af: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4b0: GOTO 0x4a4

0x4b1: Stack[-5] = Stack[-2]
0x4b2: Return(); Pop(4)

0x4b3: PushEmpty()
0x4b4: Push("oob4Rubin1")
0x4b5: Push((int) 1)
0x4b6: @ SetVariable(Stack[-2], Stack[-1])
0x4b7: Pop(2)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty()
0x4ba: Push("b4q01")
0x4bb: Push((int) 1000)
0x4bc: @ SetVariable(Stack[-2], Stack[-1])
0x4bd: Pop(2)
0x4be: PushEmpty()
0x4bf: Call2 0x4e0

0x4c0: Pop(0)
0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: Push("oob4Rubin2")
0x4c4: Push((int) 1)
0x4c5: @ SetVariable(Stack[-2], Stack[-1])
0x4c6: Pop(2)
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(int, string)
0x4ca: Stack[-1] = "oob4Rubin1"
0x4cb: Call2 0x483

0x4cc: Pop(1)
0x4cd: Push((int) 0)
0x4ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-2] = (bool) 1
0x4d1: Return(); Pop(0)

0x4d2: Stack[-2] = (bool) 0
0x4d3: Return(); Pop(0)

0x4d4: PushEmpty()
0x4d5: PushEmpty(int, string)
0x4d6: Stack[-1] = "oob4Rubin2"
0x4d7: Call2 0x483

0x4d8: Pop(1)
0x4d9: Push((int) 0)
0x4da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-2] = (bool) 1
0x4dd: Return(); Pop(0)

0x4de: Stack[-2] = (bool) 0
0x4df: Return(); Pop(0)

0x4e0: PushEmpty(object, object)
0x4e1: Push((int) 219)
0x4e2: Push((int) 1)
0x4e3: Push((int) 518597)
0x4e4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e5: Pop(3)
0x4e6: PushEmpty(bool, object, int)
0x4e7: Stack[-2] = Stack[-4]
0x4e8: Stack[-1] = (int) 216
0x4e9: Call2 0x4fa

0x4ea: Pop(3)
0x4eb: Return(); Pop(2)

0x4ec: Stack[-1] = 0
0x4ed: PushEmpty(object, object)
0x4ee: @ GetDiaryRoot(Stack[-1])
0x4ef: Pop(0)
0x4f0: Pop(0); Push((bool) Stack[-1] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f2: Push("Can't retrieve diary root")
0x4f3: @ Trace(Stack[-1])
0x4f4: Pop(1)
0x4f5: Stack[-3] = (bool) 0
0x4f6: Return(); Pop(2)

0x4f7: Stack[-3] = Stack[-1]
0x4f8: Return(); Pop(2)

0x4f9: Stack[-1] = 0
0x4fa: PushEmpty(object, object, int, object, object, int)
0x4fb: PushEmpty(object)
0x4fc: Call2 0x4ed

0x4fd: Stack[-4] = Stack[-1]
0x4fe: Pop(1)
0x4ff: @@ Find(Stack[-7], Stack[-2])
0x500: Pop(0)
0x501: Pop(0); Push((bool) Stack[-2] == 0)
0x502: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x503: Push("Can't find diary parent with id: ")
0x504: Pop(1); Push(Stack[-1] + Stack[-8]);
0x505: @ Trace(Stack[-1])
0x506: Pop(1)
0x507: Stack[-9] = (bool) 0
0x508: Return(); Pop(6)

0x509: @@ AddChild(Stack[-8])
0x50a: Pop(0)
0x50b: Push((int) 7)
0x50c: @ SendWorldWndMessage(Stack[-1])
0x50d: Pop(1)
0x50e: @@ GetCategory(Stack[-1])
0x50f: Pop(0)
0x510: @ SetDiarySection(Stack[-1])
0x511: Pop(0)
0x512: Stack[-9] = (bool) 0
0x513: Return(); Pop(6)

0x514: Stack[-2] = 0
0x515: Stack[-3] = 0
0x516: PushEmpty(int, int)
0x517: Push("branch")
0x518: @ GetVariable(Stack[-1], Stack[-2])
0x519: Pop(1)
0x51a: Push((int) 0)
0x51b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51d: Stack[-3] = (int) 1
0x51e: Return(); Pop(2)

0x51f: GOTO 0x525

0x520: Push((int) 1)
0x521: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-3] = (int) 2
0x524: Return(); Pop(2)

0x525: Stack[-3] = (int) 3
0x526: Return(); Pop(2)

