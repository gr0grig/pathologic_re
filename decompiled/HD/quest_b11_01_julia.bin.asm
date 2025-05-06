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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x24d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe3 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x25e Vars = ()
		EVENT_5 Op = 0x261 Vars = ()
		EVENT_0 Op = 0x264 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3da

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3dc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3de

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x469

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
0x31: Call2 0x3a2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2e3

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
0x48: Call2 0x2d1

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
0x5b: Call2 0x40f

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x41b

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x3fe

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
0x7c: Call2 0x40f

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
0xa4: Call2 0x427

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
0xb0: Call2 0x3e0

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb3: @ lshWaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: PushEmpty(string)
0xb9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xba: Call2 0x36d

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
0xcf: Call2 0x3e0

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
0xdf: Call2 0x37d

0xe0: Pop(2)
0xe1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Push((int) 1)
0xe5: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x39b

0xe8: Pop(0)
0xe9: Push((int) 23196)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x3eb

0xf0: Pop(2)
0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x404

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3e2

0xfa: Pop(2)
0xfb: Push((int) 23199)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x3eb

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x404

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x3e2

0x10c: Pop(2)
0x10d: Push((int) 23193)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x110: PushEmpty(bool)
0x111: Stack[-1] = (bool) 0
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x40f

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Call2 0x41b

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11d: Stack[-1] = (bool) 1
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call2 0x3fe

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
0x135: Call2 0x40f

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
0x15d: Call2 0x427

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
0x168: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

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
0x17c: Push((int) 523369)
0x17d: Push((int) 24586)
0x17e: Push((int) 24585)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 24586)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Untrust"
0x187: Call2 0xcd

0x188: Pop(1)
0x189: Push((int) 523370)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: Push((int) 523371)
0x18f: Push((int) 24588)
0x190: Push((int) 24587)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 541842)
0x194: Push((int) 24591)
0x195: Push((int) 44060)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 24591)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Untrust"
0x19e: Call2 0xcd

0x19f: Pop(1)
0x1a0: Push((int) 523374)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 523375)
0x1a6: Push((int) 24582)
0x1a7: Push((int) 24592)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 24588)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Untrust"
0x1b0: Call2 0xcd

0x1b1: Pop(1)
0x1b2: Push((int) 523372)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 523373)
0x1b8: Push((int) 24582)
0x1b9: Push((int) 24589)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 24577)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Fear"
0x1c2: Call2 0xcd

0x1c3: Pop(1)
0x1c4: Push((int) 523361)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 523362)
0x1ca: Push((int) 24579)
0x1cb: Push((int) 24578)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 24579)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Fear"
0x1d4: Call2 0xcd

0x1d5: Pop(1)
0x1d6: Push((int) 523363)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 523364)
0x1dc: Push((int) 24573)
0x1dd: Push((int) 24580)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Push((int) 523365)
0x1e1: Push((int) 24582)
0x1e2: Push((int) 24581)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: Push((int) 24582)
0x1e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Fear"
0x1eb: Call2 0xcd

0x1ec: Pop(1)
0x1ed: Push((int) 523366)
0x1ee: @@ SetMessage(Stack[-1])
0x1ef: Pop(1)
0x1f0: @@ ClearReplies()
0x1f1: Pop(0)
0x1f2: Push((int) 523367)
0x1f3: Push((int) 24573)
0x1f4: Push((int) 24583)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Push((int) 523368)
0x1f8: Push((int) 24573)
0x1f9: Push((int) 24584)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 24569)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Fear"
0x202: Call2 0xcd

0x203: Pop(1)
0x204: Push((int) 523353)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 523354)
0x20a: Push((int) 24571)
0x20b: Push((int) 24570)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 24571)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Fear"
0x214: Call2 0xcd

0x215: Pop(1)
0x216: Push((int) 523355)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 523356)
0x21c: Push((int) 24573)
0x21d: Push((int) 24572)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 24573)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Fear"
0x226: Call2 0xcd

0x227: Pop(1)
0x228: Push((int) 523357)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 522026)
0x22e: Push((int) -1)
0x22f: Push((int) 23196)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 523359)
0x233: Push((int) -1)
0x234: Push((int) 24575)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x3e0

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0xe4

0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-1] = Stack[-3]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(2)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(bool)
0x24e: Call2 0x287

0x24f: Pop(0)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: @ Hold()
0x253: Pop(0)
0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral"
0x256: Call2 0x36d

0x257: Pop(1)
0x258: @ lshWaitForAnimEnd()
0x259: Pop(0)
0x25a: GOTO 0x254

0x25b: @ Hold()
0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: @ Hold()
0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: @ StopGroup0()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty(bool, bool)
0x265: @ IsOverrideActive(Stack[-1])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x269: EventDisable(0)
0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[-5]
0x26c: Call2 0x27e

0x26d: Pop(2)
0x26e: EventEnable(0)
0x26f: PushEmpty(object)
0x270: Stack[-1] = Stack[-4]
0x271: Call2 0x245

0x272: Pop(1)
0x273: Return(); Pop(2)

0x274: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x275: @ GetPosition(Stack[-3])
0x276: Pop(0)
0x277: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x278: Push(CvectorIndex(Stack[-2], 0))
0x279: Push(CvectorIndex(Stack[-3], 2))
0x27a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x27b: Pop(2)
0x27c: Stack[-8] = Stack[-1]
0x27d: Return(); Pop(6)

0x27e: PushEmpty(cvector, cvector)
0x27f: @@ GetPosition(Stack[-1])
0x280: Pop(0)
0x281: PushEmpty(bool, cvector)
0x282: Stack[-1] = Stack[-3]
0x283: Call2 0x274

0x284: Stack[-6] = Stack[-2]
0x285: Pop(2)
0x286: Return(); Pop(2)

0x287: PushEmpty(bool, bool)
0x288: @ IsLoaded(Stack[-1])
0x289: Pop(0)
0x28a: Stack[-3] = Stack[-1]
0x28b: Return(); Pop(2)

0x28c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28d: @@ GetPosition(Stack[-8])
0x28e: Pop(0)
0x28f: @@ GetEyesHeight(Stack[-9])
0x290: Pop(0)
0x291: Push(CvectorIndex(Stack[-8], 1))
0x292: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x293: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x294: @ GetPosition(Stack[-7])
0x295: Pop(0)
0x296: @ GetEyesHeight(Stack[-9])
0x297: Pop(0)
0x298: Push(CvectorIndex(Stack[-7], 1))
0x299: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x29b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29c: Push(CvectorIndex(Stack[-6], 1))
0x29d: Stack[-1] = (int) 0
0x29e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a0: Pop(1); Push(Sqrt(Stack[-1]))
0x2a1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a2: Stack[-5] = -Stack[-6]; Pop(0);
0x2a3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a4: PushEmpty(cvector, cvector)
0x2a5: Push(CVector(0.0, 1.0, 0.0))
0x2a6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a7: Call2 0x3a8

0x2a8: Pop(1)
0x2a9: Push((int) 25)
0x2aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ac: Push(CVector(0.0, 10.0, 0.0))
0x2ad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2af: @ IsOverrideActive(Stack[-2])
0x2b0: Pop(0)
0x2b1: Push(Stack[-2])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-21] = (bool) 0
0x2b4: Return(); Pop(18)

0x2b5: @ StopWorld()
0x2b6: Pop(0)
0x2b7: Push((bool) 1)
0x2b8: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2b9: Pop(1)
0x2ba: Push(CvectorIndex(Stack[-4], 0))
0x2bb: Push(CvectorIndex(Stack[-5], 2))
0x2bc: @ Rotate(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: PushEmpty(bool)
0x2bf: Call2 0x3e0

0x2c0: Pop(0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2cb

0x2c3: Push("head")
0x2c4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push(Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: Push("head")
0x2c9: @ LookAsyncCamera(Stack[-1])
0x2ca: Pop(1)
0x2cb: @ CameraWaitForPlayFinish()
0x2cc: Pop(0)
0x2cd: @ ResumeWorld()
0x2ce: Pop(0)
0x2cf: Stack[-21] = (bool) 1
0x2d0: Return(); Pop(18)

0x2d1: PushEmpty(bool, bool)
0x2d2: Push((bool) 1)
0x2d3: @ CameraSwitchToNormal(Stack[-1])
0x2d4: Pop(1)
0x2d5: PushEmpty(bool)
0x2d6: Call2 0x3e0

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: GOTO 0x2e2

0x2da: Push("head")
0x2db: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2dc: Pop(1)
0x2dd: Push(Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: Push("head")
0x2e0: @ UnlookAsync(Stack[-1])
0x2e1: Pop(1)
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(int, int, int, int)
0x2e4: Push("voice_common")
0x2e5: @ GetVariable(Stack[-1], Stack[-3])
0x2e6: Pop(1)
0x2e7: Push(Stack[-2])
0x2e8: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[-7]
0x2eb: Call2 0x31d

0x2ec: Pop(1)
0x2ed: Pop(1); Push((bool) Stack[-1] == 0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2ef: PushEmpty(bool, object)
0x2f0: Stack[-1] = Stack[-7]
0x2f1: Call2 0x342

0x2f2: Pop(1)
0x2f3: Pop(1); Push((bool) Stack[-1] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-6] = (bool) 0
0x2f6: Return(); Pop(4)

0x2f7: Push((int) 2)
0x2f8: @ irand(Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fc: Push("voice_common")
0x2fd: Push((int) 1)
0x2fe: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ff: Push((int) 3)
0x300: Pop(2); Push(Stack[-2] % Stack[-1]);
0x301: @ SetVariable(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: GOTO 0x308

0x304: Push("voice_common")
0x305: Push((int) 0)
0x306: @ SetVariable(Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: GOTO 0x31b

0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[-7]
0x30b: Call2 0x342

0x30c: Pop(1)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x30f: PushEmpty(bool, object)
0x310: Stack[-1] = Stack[-7]
0x311: Call2 0x31d

0x312: Pop(1)
0x313: Pop(1); Push((bool) Stack[-1] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-6] = (bool) 0
0x316: Return(); Pop(4)

0x317: Push("voice_common")
0x318: Push((int) 1)
0x319: @ SetVariable(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: Stack[-6] = (bool) 1
0x31c: Return(); Pop(4)

0x31d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x31e: Stack[-5] = "c"
0x31f: Stack[-4] = (int) 0
0x320: Push((int) 1)
0x321: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x322: Push((int) 1)
0x323: Pop(1); Push(Stack[-5] + Stack[-1]);
0x324: Pop(1); Push(Stack[-6] + Stack[-1]);
0x325: @@ HasProperty(Stack[-1], Stack[-4])
0x326: Pop(1)
0x327: Pop(0); Push((bool) Stack[-3] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x32d

0x32a: Push((int) 1)
0x32b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x32c: GOTO 0x320

0x32d: Pop(0); Push((bool) Stack[-4] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-12] = (bool) 0
0x330: Return(); Pop(10)

0x331: Stack[-2] = (int) 0
0x332: Push((int) 1)
0x333: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: @ irand(Stack[-2], Stack[-4])
0x336: Pop(0)
0x337: Push((int) 1)
0x338: Pop(1); Push(Stack[-3] + Stack[-1]);
0x339: Pop(1); Push(Stack[-6] + Stack[-1]);
0x33a: @@ GetProperty(Stack[-1], Stack[-2])
0x33b: Pop(1)
0x33c: PushEmpty(bool, string)
0x33d: Stack[-1] = Stack[-3]
0x33e: Call2 0x38c

0x33f: Stack[-14] = Stack[-2]
0x340: Pop(2)
0x341: Return(); Pop(10)

0x342: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x343: Push("d")
0x344: PushEmpty(int)
0x345: Call2 0x3cf

0x346: Pop(0)
0x347: Pop(2); Push(Stack[-2] + Stack[-1]);
0x348: Push("m")
0x349: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x34a: Stack[-4] = (int) 0
0x34b: Push((int) 1)
0x34c: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x34d: Push((int) 1)
0x34e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x34f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x350: @@ HasProperty(Stack[-1], Stack[-4])
0x351: Pop(1)
0x352: Pop(0); Push((bool) Stack[-3] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: GOTO 0x358

0x355: Push((int) 1)
0x356: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x357: GOTO 0x34b

0x358: Pop(0); Push((bool) Stack[-4] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-12] = (bool) 0
0x35b: Return(); Pop(10)

0x35c: Stack[-2] = (int) 0
0x35d: Push((int) 1)
0x35e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: @ irand(Stack[-2], Stack[-4])
0x361: Pop(0)
0x362: Push((int) 1)
0x363: Pop(1); Push(Stack[-3] + Stack[-1]);
0x364: Pop(1); Push(Stack[-6] + Stack[-1]);
0x365: @@ GetProperty(Stack[-1], Stack[-2])
0x366: Pop(1)
0x367: PushEmpty(bool, string)
0x368: Stack[-1] = Stack[-3]
0x369: Call2 0x38c

0x36a: Stack[-14] = Stack[-2]
0x36b: Pop(2)
0x36c: Return(); Pop(10)

0x36d: PushEmpty(bool, float, float, bool, float, float)
0x36e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x36f: Pop(0)
0x370: Push(Stack[-3])
0x371: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x372: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x373: Pop(0)
0x374: Push((bool) 0)
0x375: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(1)
0x377: GOTO 0x37c

0x378: Push("Can't find lsh animation : ")
0x379: Pop(1); Push(Stack[-1] + Stack[-8]);
0x37a: @ Trace(Stack[-1])
0x37b: Pop(1)
0x37c: Return(); Pop(6)

0x37d: PushEmpty(bool, float, float, bool, float, float)
0x37e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x37f: Pop(0)
0x380: Push(Stack[-3])
0x381: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x382: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x383: Pop(0)
0x384: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x385: Pop(0)
0x386: GOTO 0x38b

0x387: Push("Can't find lsh animation : ")
0x388: Pop(1); Push(Stack[-1] + Stack[-9]);
0x389: @ Trace(Stack[-1])
0x38a: Pop(1)
0x38b: Return(); Pop(6)

0x38c: PushEmpty(bool, bool)
0x38d: PushEmpty(bool)
0x38e: Call2 0x3e0

0x38f: Pop(0)
0x390: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x391: @ lshHasSpeech(Stack[-1], Stack[-3])
0x392: Pop(0)
0x393: Push(Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: @ lshPlaySpeech(Stack[-3])
0x396: Pop(0)
0x397: Stack[-4] = (bool) 1
0x398: Return(); Pop(2)

0x399: Stack[-4] = (bool) 0
0x39a: Return(); Pop(2)

0x39b: PushEmpty(bool)
0x39c: Call2 0x3e0

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: @ lshStopSpeech()
0x3a0: Pop(0)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(object, object)
0x3a3: @ self(Stack[-1])
0x3a4: Pop(0)
0x3a5: Stack[-3] = Stack[-1]
0x3a6: Return(); Pop(2)

0x3a7: Stack[-1] = 0
0x3a8: PushEmpty(float, float)
0x3a9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3aa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3ab: Push((float)0.0)
0x3ac: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3af: Return(); Pop(2)

0x3b0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3b1: Return(); Pop(2)

0x3b2: PushEmpty(int, int)
0x3b3: @ GetVariable(Stack[-3], Stack[-1])
0x3b4: Pop(0)
0x3b5: Stack[-4] = Stack[-1]
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(object, object)
0x3b8: @ FindActor(Stack[-1], Stack[-4])
0x3b9: Pop(0)
0x3ba: Pop(0); Push((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-5] = (bool) 0
0x3bd: Return(); Pop(2)

0x3be: @ Trigger(Stack[-1], Stack[-3])
0x3bf: Pop(0)
0x3c0: Stack[-5] = (bool) 1
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty(object, object)
0x3c4: @ FindActor(Stack[-1], Stack[-5])
0x3c5: Pop(0)
0x3c6: Pop(0); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-6] = (bool) 0
0x3c9: Return(); Pop(2)

0x3ca: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3cb: Pop(0)
0x3cc: Stack[-6] = (bool) 1
0x3cd: Return(); Pop(2)

0x3ce: Stack[-1] = 0
0x3cf: PushEmpty(float, float)
0x3d0: @ GetGameTime(Stack[-1])
0x3d1: Pop(0)
0x3d2: Push((int) 1)
0x3d3: PushEmpty(int)
0x3d4: Push((int) 24)
0x3d5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3d6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3d7: Return(); Pop(2)

0x3d8: Stack[-1] = (int) 515537
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = (int) 502862
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = "ui/NPC_Julia.png"
0x3dd: Return(); Pop(0)

0x3de: Stack[-1] = "ui/NPC_Julia_b.png"
0x3df: Return(); Pop(0)

0x3e0: Stack[-1] = (bool) 1
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty()
0x3e3: Push("b11q01KnowWhoKilled")
0x3e4: Push((int) 1)
0x3e5: @ SetVariable(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: PushEmpty()
0x3e8: Call2 0x433

0x3e9: Pop(0)
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: Push("b11q01VictimChoosed")
0x3ed: Push((int) 1)
0x3ee: @ SetVariable(Stack[-2], Stack[-1])
0x3ef: Pop(2)
0x3f0: Push("b11q01KillJulia")
0x3f1: Push((int) 1)
0x3f2: @ SetVariable(Stack[-2], Stack[-1])
0x3f3: Pop(2)
0x3f4: PushEmpty(bool, string, string, string)
0x3f5: Stack[-3] = "volonteers_burah"
0x3f6: Stack[-2] = "disease"
0x3f7: Stack[-1] = "julia"
0x3f8: Call2 0x3c3

0x3f9: Pop(4)
0x3fa: Push("Julia is diseased")
0x3fb: @ Trace(Stack[-1])
0x3fc: Pop(1)
0x3fd: Return(); Pop(0)

0x3fe: PushEmpty()
0x3ff: Push("oob11Julia1")
0x400: Push((int) 1)
0x401: @ SetVariable(Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: Return(); Pop(0)

0x404: PushEmpty()
0x405: Push("b11q01")
0x406: Push((int) 2)
0x407: @ SetVariable(Stack[-2], Stack[-1])
0x408: Pop(2)
0x409: PushEmpty(bool, string, string)
0x40a: Stack[-2] = "quest_b11_01"
0x40b: Stack[-1] = "open_well_exit"
0x40c: Call2 0x3b7

0x40d: Pop(3)
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: PushEmpty(int, string)
0x411: Stack[-1] = "b11q01VictimChoosed"
0x412: Call2 0x3b2

0x413: Pop(1)
0x414: Push((int) 0)
0x415: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-2] = (bool) 1
0x418: Return(); Pop(0)

0x419: Stack[-2] = (bool) 0
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: PushEmpty(int, string)
0x41d: Stack[-1] = "oob11Julia1"
0x41e: Call2 0x3b2

0x41f: Pop(1)
0x420: Push((int) 0)
0x421: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-2] = (bool) 1
0x424: Return(); Pop(0)

0x425: Stack[-2] = (bool) 0
0x426: Return(); Pop(0)

0x427: PushEmpty()
0x428: PushEmpty(int, string)
0x429: Stack[-1] = "b11q01KillJulia"
0x42a: Call2 0x3b2

0x42b: Pop(1)
0x42c: Push((int) 0)
0x42d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-2] = (bool) 1
0x430: Return(); Pop(0)

0x431: Stack[-2] = (bool) 0
0x432: Return(); Pop(0)

0x433: PushEmpty(object, object)
0x434: Push((int) 315)
0x435: Push((int) 1)
0x436: Push((int) 522057)
0x437: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: PushEmpty(bool, object, int)
0x43a: Stack[-2] = Stack[-4]
0x43b: Stack[-1] = (int) 313
0x43c: Call2 0x44d

0x43d: Pop(3)
0x43e: Return(); Pop(2)

0x43f: Stack[-1] = 0
0x440: PushEmpty(object, object)
0x441: @ GetDiaryRoot(Stack[-1])
0x442: Pop(0)
0x443: Pop(0); Push((bool) Stack[-1] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x445: Push("Can't retrieve diary root")
0x446: @ Trace(Stack[-1])
0x447: Pop(1)
0x448: Stack[-3] = (bool) 0
0x449: Return(); Pop(2)

0x44a: Stack[-3] = Stack[-1]
0x44b: Return(); Pop(2)

0x44c: Stack[-1] = 0
0x44d: PushEmpty(object, object, int, object, object, int)
0x44e: PushEmpty(object)
0x44f: Call2 0x440

0x450: Stack[-4] = Stack[-1]
0x451: Pop(1)
0x452: @@ Find(Stack[-7], Stack[-2])
0x453: Pop(0)
0x454: Pop(0); Push((bool) Stack[-2] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x456: Push("Can't find diary parent with id: ")
0x457: Pop(1); Push(Stack[-1] + Stack[-8]);
0x458: @ Trace(Stack[-1])
0x459: Pop(1)
0x45a: Stack[-9] = (bool) 0
0x45b: Return(); Pop(6)

0x45c: @@ AddChild(Stack[-8])
0x45d: Pop(0)
0x45e: Push((int) 7)
0x45f: @ SendWorldWndMessage(Stack[-1])
0x460: Pop(1)
0x461: @@ GetCategory(Stack[-1])
0x462: Pop(0)
0x463: @ SetDiarySection(Stack[-1])
0x464: Pop(0)
0x465: Stack[-9] = (bool) 0
0x466: Return(); Pop(6)

0x467: Stack[-2] = 0
0x468: Stack[-3] = 0
0x469: PushEmpty(int, int)
0x46a: Push("branch")
0x46b: @ GetVariable(Stack[-1], Stack[-2])
0x46c: Pop(1)
0x46d: Push((int) 0)
0x46e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x470: Stack[-3] = (int) 1
0x471: Return(); Pop(2)

0x472: GOTO 0x478

0x473: Push((int) 1)
0x474: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-3] = (int) 2
0x477: Return(); Pop(2)

0x478: Stack[-3] = (int) 3
0x479: Return(); Pop(2)

