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
	Untrust
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Fear
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Julia.png
	ui/NPC_Julia_b.png
	b11q01KnowWhoKilled
	b11q01VictimChoosed
	b11q01KillJulia
	volonteers_burah
	disease
	julia
	Julia is diseased
	oob11Julia1
	b11q01
	quest_b11_01
	open_well_exit
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
	StopGroup0 (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x234
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe3 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x245 Vars = ()
		EVENT_5 Op = 0x248 Vars = ()
		EVENT_0 Op = 0x24b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x273

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3bf

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3bd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3c1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x44e

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
0x31: Call2 0x387

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2c8

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
0x48: Call2 0x2b7

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
0x56: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x3f4

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x400

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x3e3

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Untrust"
0x6d: Call2 0xcd

0x6e: Pop(1)
0x6f: Push((int) 522023)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 523350)
0x75: Push((int) 24567)
0x76: Push((int) 24566)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0xaf

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x3f4

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xcd

0x83: Pop(1)
0x84: Push((int) 522028)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 522029)
0x8a: Push((int) -1)
0x8b: Push((int) 23199)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 522030)
0x8f: Push((int) -1)
0x90: Push((int) 23200)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xaf

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xcd

0x97: Pop(1)
0x98: Push((int) 522031)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 522032)
0x9e: Push((int) -1)
0x9f: Push((int) 23202)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x40c

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 523383)
0xa8: Push((int) -1)
0xa9: Push((int) 24601)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: GOTO 0xaf

0xad: Return(); Pop(0)

0xae: GOTO 0x55

0xaf: PushEmpty(bool)
0xb0: Call2 0x3c5

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb3: @ lshWaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: PushEmpty(string)
0xb9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xba: Call2 0x352

0xbb: Pop(1)
0xbc: GOTO 0xb3

0xbd: GOTO 0xcc

0xbe: Push("all")
0xbf: Push("idle")
0xc0: @ PlayAnimation(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: @ WaitForAnimEnd()
0xc3: Pop(0)
0xc4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xcc

0xc7: Push("all")
0xc8: Push("idle")
0xc9: @ PlayAnimation(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: GOTO 0xc2

0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: PushEmpty(bool)
0xcf: Call2 0x3c5

0xd0: Pop(0)
0xd1: Pop(1); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(0)

0xd7: PushEmpty(string, bool)
0xd8: Stack[-2] = Stack[-3]
0xd9: Push("")
0xda: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: Stack[-1] = (bool) 0
0xdd: GOTO 0xdf

0xde: Stack[-1] = (bool) 1
0xdf: Call2 0x362

0xe0: Pop(2)
0xe1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Push((int) 1)
0xe5: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x380

0xe8: Pop(0)
0xe9: Push((int) 23196)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x3d0

0xf0: Pop(2)
0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x3e9

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3c7

0xfa: Pop(2)
0xfb: Push((int) 23199)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x3d0

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x3e9

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x3c7

0x10c: Pop(2)
0x10d: Push((int) 23193)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x110: PushEmpty(bool)
0x111: Stack[-1] = (bool) 0
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x3f4

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Call2 0x400

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11d: Stack[-1] = (bool) 1
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x3e3

0x123: Pop(2)
0x124: PushEmpty(string)
0x125: Stack[-1] = "Untrust"
0x126: Call2 0xcd

0x127: Pop(1)
0x128: Push((int) 522023)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 523350)
0x12e: Push((int) 24567)
0x12f: Push((int) 24566)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x3f4

0x136: Pop(1)
0x137: Pop(1); Push((bool) Stack[-1] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xcd

0x13c: Pop(1)
0x13d: Push((int) 522028)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 522029)
0x143: Push((int) -1)
0x144: Push((int) 23199)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 522030)
0x148: Push((int) -1)
0x149: Push((int) 23200)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral"
0x14f: Call2 0xcd

0x150: Pop(1)
0x151: Push((int) 522031)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 522032)
0x157: Push((int) -1)
0x158: Push((int) 23202)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x40c

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: Push((int) 523383)
0x161: Push((int) -1)
0x162: Push((int) 24601)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 24567)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Untrust"
0x16b: Call2 0xcd

0x16c: Pop(1)
0x16d: Push((int) 523351)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 523352)
0x173: Push((int) 24569)
0x174: Push((int) 24568)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Push((int) 523360)
0x178: Push((int) 24577)
0x179: Push((int) 24576)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 24586)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x180: Push((int) 24591)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Untrust"
0x185: Call2 0xcd

0x186: Pop(1)
0x187: Push((int) 523374)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 523375)
0x18d: Push((int) 24582)
0x18e: Push((int) 24592)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 24588)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Untrust"
0x197: Call2 0xcd

0x198: Pop(1)
0x199: Push((int) 523372)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 523373)
0x19f: Push((int) 24582)
0x1a0: Push((int) 24589)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 24577)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Fear"
0x1a9: Call2 0xcd

0x1aa: Pop(1)
0x1ab: Push((int) 523361)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 523362)
0x1b1: Push((int) 24579)
0x1b2: Push((int) 24578)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 24579)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Fear"
0x1bb: Call2 0xcd

0x1bc: Pop(1)
0x1bd: Push((int) 523363)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 523364)
0x1c3: Push((int) 24573)
0x1c4: Push((int) 24580)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Push((int) 523365)
0x1c8: Push((int) 24582)
0x1c9: Push((int) 24581)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 24582)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Fear"
0x1d2: Call2 0xcd

0x1d3: Pop(1)
0x1d4: Push((int) 523366)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 523367)
0x1da: Push((int) 24573)
0x1db: Push((int) 24583)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Push((int) 523368)
0x1df: Push((int) 24573)
0x1e0: Push((int) 24584)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 24569)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Fear"
0x1e9: Call2 0xcd

0x1ea: Pop(1)
0x1eb: Push((int) 523353)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 523354)
0x1f1: Push((int) 24571)
0x1f2: Push((int) 24570)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 24571)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Fear"
0x1fb: Call2 0xcd

0x1fc: Pop(1)
0x1fd: Push((int) 523355)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 523356)
0x203: Push((int) 24573)
0x204: Push((int) 24572)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 24573)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Fear"
0x20d: Call2 0xcd

0x20e: Pop(1)
0x20f: Push((int) 523357)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 522026)
0x215: Push((int) -1)
0x216: Push((int) 23196)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 523359)
0x21a: Push((int) -1)
0x21b: Push((int) 24575)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x220: PushEmpty(bool)
0x221: Call2 0x3c5

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: @ lshStopAnimation()
0x225: Pop(0)
0x226: GOTO 0x229

0x227: @ StopAnimation()
0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: GOTO 0xe4

0x22b: Return(); Pop(0)

0x22c: PushEmpty()
0x22d: PushEmpty(int, object)
0x22e: Stack[-1] = Stack[-3]
0x22f: Push(-2, 1); TaskCall(0)
0x230: Call2 0x0

0x231: Pop(-2, 1); TaskReturn
0x232: Pop(2)
0x233: Return(); Pop(0)

0x234: PushEmpty(bool)
0x235: Call2 0x26e

0x236: Pop(0)
0x237: Pop(1); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: @ Hold()
0x23a: Pop(0)
0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call2 0x352

0x23e: Pop(1)
0x23f: @ lshWaitForAnimEnd()
0x240: Pop(0)
0x241: GOTO 0x23b

0x242: @ Hold()
0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: @ Hold()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: @ StopGroup0()
0x249: Pop(0)
0x24a: Return(); Pop(0)

0x24b: PushEmpty(bool, bool)
0x24c: @ IsOverrideActive(Stack[-1])
0x24d: Pop(0)
0x24e: Pop(0); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x250: EventDisable(0)
0x251: PushEmpty(bool, object)
0x252: Stack[-1] = Stack[-5]
0x253: Call2 0x265

0x254: Pop(2)
0x255: EventEnable(0)
0x256: PushEmpty(object)
0x257: Stack[-1] = Stack[-4]
0x258: Call2 0x22c

0x259: Pop(1)
0x25a: Return(); Pop(2)

0x25b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x25c: @ GetPosition(Stack[-3])
0x25d: Pop(0)
0x25e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x25f: Push(CvectorIndex(Stack[-2], 0))
0x260: Push(CvectorIndex(Stack[-3], 2))
0x261: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x262: Pop(2)
0x263: Stack[-8] = Stack[-1]
0x264: Return(); Pop(6)

0x265: PushEmpty(cvector, cvector)
0x266: @@ GetPosition(Stack[-1])
0x267: Pop(0)
0x268: PushEmpty(bool, cvector)
0x269: Stack[-1] = Stack[-3]
0x26a: Call2 0x25b

0x26b: Stack[-6] = Stack[-2]
0x26c: Pop(2)
0x26d: Return(); Pop(2)

0x26e: PushEmpty(bool, bool)
0x26f: @ IsLoaded(Stack[-1])
0x270: Pop(0)
0x271: Stack[-3] = Stack[-1]
0x272: Return(); Pop(2)

0x273: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x274: @@ GetPosition(Stack[-8])
0x275: Pop(0)
0x276: @@ GetEyesHeight(Stack[-9])
0x277: Pop(0)
0x278: Push(CvectorIndex(Stack[-8], 1))
0x279: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27b: @ GetPosition(Stack[-7])
0x27c: Pop(0)
0x27d: @ GetEyesHeight(Stack[-9])
0x27e: Pop(0)
0x27f: Push(CvectorIndex(Stack[-7], 1))
0x280: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x281: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x282: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x283: Push(CvectorIndex(Stack[-6], 1))
0x284: Stack[-1] = (int) 0
0x285: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x286: Pop(0); Push(Stack[-6] | Stack[-6]);
0x287: Pop(1); Push(Sqrt(Stack[-1]))
0x288: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x289: Stack[-5] = -Stack[-6]; Pop(0);
0x28a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28b: PushEmpty(cvector, cvector)
0x28c: Push(CVector(0.0, 1.0, 0.0))
0x28d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x28e: Call2 0x38d

0x28f: Pop(1)
0x290: Push((int) 25)
0x291: Pop(2); Push(Stack[-2] * Stack[-1]);
0x292: Pop(2); Push(Stack[-2] + Stack[-1]);
0x293: Push(CVector(0.0, 10.0, 0.0))
0x294: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x295: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x296: @ IsOverrideActive(Stack[-2])
0x297: Pop(0)
0x298: Push(Stack[-2])
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-21] = (bool) 0
0x29b: Return(); Pop(18)

0x29c: @ StopWorld()
0x29d: Pop(0)
0x29e: @ CameraTransit(Stack[-3], Stack[-5])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-4], 0))
0x2a1: Push(CvectorIndex(Stack[-5], 2))
0x2a2: @ Rotate(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: PushEmpty(bool)
0x2a5: Call2 0x3c5

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2b1

0x2a9: Push("head")
0x2aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ab: Pop(1)
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ae: Push("head")
0x2af: @ LookAsyncCamera(Stack[-1])
0x2b0: Pop(1)
0x2b1: @ CameraWaitForPlayFinish()
0x2b2: Pop(0)
0x2b3: @ ResumeWorld()
0x2b4: Pop(0)
0x2b5: Stack[-21] = (bool) 1
0x2b6: Return(); Pop(18)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ CameraSwitchToNormal()
0x2b9: Pop(0)
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x3c5

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c7

0x2bf: Push("head")
0x2c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push(Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c4: Push("head")
0x2c5: @ UnlookAsync(Stack[-1])
0x2c6: Pop(1)
0x2c7: Return(); Pop(2)

0x2c8: PushEmpty(int, int, int, int)
0x2c9: Push("voice_common")
0x2ca: @ GetVariable(Stack[-1], Stack[-3])
0x2cb: Pop(1)
0x2cc: Push(Stack[-2])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[-7]
0x2d0: Call2 0x302

0x2d1: Pop(1)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[-7]
0x2d6: Call2 0x327

0x2d7: Pop(1)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-6] = (bool) 0
0x2db: Return(); Pop(4)

0x2dc: Push((int) 2)
0x2dd: @ irand(Stack[-2], Stack[-1])
0x2de: Pop(1)
0x2df: Push(Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e1: Push("voice_common")
0x2e2: Push((int) 1)
0x2e3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e4: Push((int) 3)
0x2e5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e6: @ SetVariable(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: GOTO 0x2ed

0x2e9: Push("voice_common")
0x2ea: Push((int) 0)
0x2eb: @ SetVariable(Stack[-2], Stack[-1])
0x2ec: Pop(2)
0x2ed: GOTO 0x300

0x2ee: PushEmpty(bool, object)
0x2ef: Stack[-1] = Stack[-7]
0x2f0: Call2 0x327

0x2f1: Pop(1)
0x2f2: Pop(1); Push((bool) Stack[-1] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-1] = Stack[-7]
0x2f6: Call2 0x302

0x2f7: Pop(1)
0x2f8: Pop(1); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-6] = (bool) 0
0x2fb: Return(); Pop(4)

0x2fc: Push("voice_common")
0x2fd: Push((int) 1)
0x2fe: @ SetVariable(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Stack[-6] = (bool) 1
0x301: Return(); Pop(4)

0x302: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x303: Stack[-5] = "c"
0x304: Stack[-4] = (int) 0
0x305: Push((int) 1)
0x306: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x307: Push((int) 1)
0x308: Pop(1); Push(Stack[-5] + Stack[-1]);
0x309: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30a: @@ HasProperty(Stack[-1], Stack[-4])
0x30b: Pop(1)
0x30c: Pop(0); Push((bool) Stack[-3] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: GOTO 0x312

0x30f: Push((int) 1)
0x310: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x311: GOTO 0x305

0x312: Pop(0); Push((bool) Stack[-4] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-12] = (bool) 0
0x315: Return(); Pop(10)

0x316: Stack[-2] = (int) 0
0x317: Push((int) 1)
0x318: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: @ irand(Stack[-2], Stack[-4])
0x31b: Pop(0)
0x31c: Push((int) 1)
0x31d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31f: @@ GetProperty(Stack[-1], Stack[-2])
0x320: Pop(1)
0x321: PushEmpty(bool, string)
0x322: Stack[-1] = Stack[-3]
0x323: Call2 0x371

0x324: Stack[-14] = Stack[-2]
0x325: Pop(2)
0x326: Return(); Pop(10)

0x327: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x328: Push("d")
0x329: PushEmpty(int)
0x32a: Call2 0x3b4

0x32b: Pop(0)
0x32c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32d: Push("m")
0x32e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x32f: Stack[-4] = (int) 0
0x330: Push((int) 1)
0x331: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x332: Push((int) 1)
0x333: Pop(1); Push(Stack[-5] + Stack[-1]);
0x334: Pop(1); Push(Stack[-6] + Stack[-1]);
0x335: @@ HasProperty(Stack[-1], Stack[-4])
0x336: Pop(1)
0x337: Pop(0); Push((bool) Stack[-3] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33d

0x33a: Push((int) 1)
0x33b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x33c: GOTO 0x330

0x33d: Pop(0); Push((bool) Stack[-4] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-12] = (bool) 0
0x340: Return(); Pop(10)

0x341: Stack[-2] = (int) 0
0x342: Push((int) 1)
0x343: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: @ irand(Stack[-2], Stack[-4])
0x346: Pop(0)
0x347: Push((int) 1)
0x348: Pop(1); Push(Stack[-3] + Stack[-1]);
0x349: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34a: @@ GetProperty(Stack[-1], Stack[-2])
0x34b: Pop(1)
0x34c: PushEmpty(bool, string)
0x34d: Stack[-1] = Stack[-3]
0x34e: Call2 0x371

0x34f: Stack[-14] = Stack[-2]
0x350: Pop(2)
0x351: Return(); Pop(10)

0x352: PushEmpty(bool, float, float, bool, float, float)
0x353: @ lshHasAnimation(Stack[-3], Stack[-7])
0x354: Pop(0)
0x355: Push(Stack[-3])
0x356: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x357: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x358: Pop(0)
0x359: Push((bool) 0)
0x35a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: GOTO 0x361

0x35d: Push("Can't find lsh animation : ")
0x35e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x35f: @ Trace(Stack[-1])
0x360: Pop(1)
0x361: Return(); Pop(6)

0x362: PushEmpty(bool, float, float, bool, float, float)
0x363: @ lshHasAnimation(Stack[-3], Stack[-8])
0x364: Pop(0)
0x365: Push(Stack[-3])
0x366: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x367: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x368: Pop(0)
0x369: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x36a: Pop(0)
0x36b: GOTO 0x370

0x36c: Push("Can't find lsh animation : ")
0x36d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x36e: @ Trace(Stack[-1])
0x36f: Pop(1)
0x370: Return(); Pop(6)

0x371: PushEmpty(bool, bool)
0x372: PushEmpty(bool)
0x373: Call2 0x3c5

0x374: Pop(0)
0x375: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x376: @ lshHasSpeech(Stack[-1], Stack[-3])
0x377: Pop(0)
0x378: Push(Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37a: @ lshPlaySpeech(Stack[-3])
0x37b: Pop(0)
0x37c: Stack[-4] = (bool) 1
0x37d: Return(); Pop(2)

0x37e: Stack[-4] = (bool) 0
0x37f: Return(); Pop(2)

0x380: PushEmpty(bool)
0x381: Call2 0x3c5

0x382: Pop(0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: @ lshStopSpeech()
0x385: Pop(0)
0x386: Return(); Pop(0)

0x387: PushEmpty(object, object)
0x388: @ self(Stack[-1])
0x389: Pop(0)
0x38a: Stack[-3] = Stack[-1]
0x38b: Return(); Pop(2)

0x38c: Stack[-1] = 0
0x38d: PushEmpty(float, float)
0x38e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x38f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x390: Push((float)0.0)
0x391: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x394: Return(); Pop(2)

0x395: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x396: Return(); Pop(2)

0x397: PushEmpty(int, int)
0x398: @ GetVariable(Stack[-3], Stack[-1])
0x399: Pop(0)
0x39a: Stack[-4] = Stack[-1]
0x39b: Return(); Pop(2)

0x39c: PushEmpty(object, object)
0x39d: @ FindActor(Stack[-1], Stack[-4])
0x39e: Pop(0)
0x39f: Pop(0); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-5] = (bool) 0
0x3a2: Return(); Pop(2)

0x3a3: @ Trigger(Stack[-1], Stack[-3])
0x3a4: Pop(0)
0x3a5: Stack[-5] = (bool) 1
0x3a6: Return(); Pop(2)

0x3a7: Stack[-1] = 0
0x3a8: PushEmpty(object, object)
0x3a9: @ FindActor(Stack[-1], Stack[-5])
0x3aa: Pop(0)
0x3ab: Pop(0); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-6] = (bool) 0
0x3ae: Return(); Pop(2)

0x3af: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3b0: Pop(0)
0x3b1: Stack[-6] = (bool) 1
0x3b2: Return(); Pop(2)

0x3b3: Stack[-1] = 0
0x3b4: PushEmpty(float, float)
0x3b5: @ GetGameTime(Stack[-1])
0x3b6: Pop(0)
0x3b7: Push((int) 1)
0x3b8: PushEmpty(int)
0x3b9: Push((int) 24)
0x3ba: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3bb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3bc: Return(); Pop(2)

0x3bd: Stack[-1] = (int) 515537
0x3be: Return(); Pop(0)

0x3bf: Stack[-1] = (int) 502862
0x3c0: Return(); Pop(0)

0x3c1: Stack[-1] = "ui/NPC_Julia.png"
0x3c2: Return(); Pop(0)

0x3c3: Stack[-1] = "ui/NPC_Julia_b.png"
0x3c4: Return(); Pop(0)

0x3c5: Stack[-1] = (bool) 1
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: Push("b11q01KnowWhoKilled")
0x3c9: Push((int) 1)
0x3ca: @ SetVariable(Stack[-2], Stack[-1])
0x3cb: Pop(2)
0x3cc: PushEmpty()
0x3cd: Call2 0x418

0x3ce: Pop(0)
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty()
0x3d1: Push("b11q01VictimChoosed")
0x3d2: Push((int) 1)
0x3d3: @ SetVariable(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: Push("b11q01KillJulia")
0x3d6: Push((int) 1)
0x3d7: @ SetVariable(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: PushEmpty(bool, string, string, string)
0x3da: Stack[-3] = "volonteers_burah"
0x3db: Stack[-2] = "disease"
0x3dc: Stack[-1] = "julia"
0x3dd: Call2 0x3a8

0x3de: Pop(4)
0x3df: Push("Julia is diseased")
0x3e0: @ Trace(Stack[-1])
0x3e1: Pop(1)
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty()
0x3e4: Push("oob11Julia1")
0x3e5: Push((int) 1)
0x3e6: @ SetVariable(Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Push("b11q01")
0x3eb: Push((int) 2)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: PushEmpty(bool, string, string)
0x3ef: Stack[-2] = "quest_b11_01"
0x3f0: Stack[-1] = "open_well_exit"
0x3f1: Call2 0x39c

0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty()
0x3f5: PushEmpty(int, string)
0x3f6: Stack[-1] = "b11q01VictimChoosed"
0x3f7: Call2 0x397

0x3f8: Pop(1)
0x3f9: Push((int) 0)
0x3fa: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fc: Stack[-2] = (bool) 1
0x3fd: Return(); Pop(0)

0x3fe: Stack[-2] = (bool) 0
0x3ff: Return(); Pop(0)

0x400: PushEmpty()
0x401: PushEmpty(int, string)
0x402: Stack[-1] = "oob11Julia1"
0x403: Call2 0x397

0x404: Pop(1)
0x405: Push((int) 0)
0x406: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-2] = (bool) 1
0x409: Return(); Pop(0)

0x40a: Stack[-2] = (bool) 0
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(int, string)
0x40e: Stack[-1] = "b11q01KillJulia"
0x40f: Call2 0x397

0x410: Pop(1)
0x411: Push((int) 0)
0x412: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-2] = (bool) 1
0x415: Return(); Pop(0)

0x416: Stack[-2] = (bool) 0
0x417: Return(); Pop(0)

0x418: PushEmpty(object, object)
0x419: Push((int) 315)
0x41a: Push((int) 1)
0x41b: Push((int) 522057)
0x41c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: PushEmpty(bool, object, int)
0x41f: Stack[-2] = Stack[-4]
0x420: Stack[-1] = (int) 313
0x421: Call2 0x432

0x422: Pop(3)
0x423: Return(); Pop(2)

0x424: Stack[-1] = 0
0x425: PushEmpty(object, object)
0x426: @ GetDiaryRoot(Stack[-1])
0x427: Pop(0)
0x428: Pop(0); Push((bool) Stack[-1] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42a: Push("Can't retrieve diary root")
0x42b: @ Trace(Stack[-1])
0x42c: Pop(1)
0x42d: Stack[-3] = (bool) 0
0x42e: Return(); Pop(2)

0x42f: Stack[-3] = Stack[-1]
0x430: Return(); Pop(2)

0x431: Stack[-1] = 0
0x432: PushEmpty(object, object, int, object, object, int)
0x433: PushEmpty(object)
0x434: Call2 0x425

0x435: Stack[-4] = Stack[-1]
0x436: Pop(1)
0x437: @@ Find(Stack[-7], Stack[-2])
0x438: Pop(0)
0x439: Pop(0); Push((bool) Stack[-2] == 0)
0x43a: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43b: Push("Can't find diary parent with id: ")
0x43c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x43d: @ Trace(Stack[-1])
0x43e: Pop(1)
0x43f: Stack[-9] = (bool) 0
0x440: Return(); Pop(6)

0x441: @@ AddChild(Stack[-8])
0x442: Pop(0)
0x443: Push((int) 7)
0x444: @ SendWorldWndMessage(Stack[-1])
0x445: Pop(1)
0x446: @@ GetCategory(Stack[-1])
0x447: Pop(0)
0x448: @ SetDiarySection(Stack[-1])
0x449: Pop(0)
0x44a: Stack[-9] = (bool) 0
0x44b: Return(); Pop(6)

0x44c: Stack[-2] = 0
0x44d: Stack[-3] = 0
0x44e: PushEmpty(int, int)
0x44f: Push("branch")
0x450: @ GetVariable(Stack[-1], Stack[-2])
0x451: Pop(1)
0x452: Push((int) 0)
0x453: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x455: Stack[-3] = (int) 1
0x456: Return(); Pop(2)

0x457: GOTO 0x45d

0x458: Push((int) 1)
0x459: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-3] = (int) 2
0x45c: Return(); Pop(2)

0x45d: Stack[-3] = (int) 3
0x45e: Return(); Pop(2)

