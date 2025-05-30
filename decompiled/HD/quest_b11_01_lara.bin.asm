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
	Tiredness
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Lara.png
	ui/NPC_Lara_b.png
	b11q01KnowWhoKilled
	b11q01VictimChoosed
	b11q01KillLara
	volonteers_burah
	disease
	lara
	Lara is diseased
	oob11Lara1
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

RunOp = 0x285
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xed Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x296 Vars = ()
		EVENT_5 Op = 0x299 Vars = ()
		EVENT_0 Op = 0x29c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2c4

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x412

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x410

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x414

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x416

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4a1

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
0x31: Call2 0x3da

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x31b

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
0x48: Call2 0x309

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
0x56: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x447

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x453

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x436

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Tiredness"
0x6d: Call2 0xd7

0x6e: Pop(1)
0x6f: Push((int) 522012)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 523423)
0x75: Push((int) 24645)
0x76: Push((int) 24644)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0xb9

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x447

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xd7

0x83: Pop(1)
0x84: Push((int) 522016)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 522017)
0x8a: Push((int) -1)
0x8b: Push((int) 23187)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 522018)
0x8f: Push((int) -1)
0x90: Push((int) 23188)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xb9

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xd7

0x97: Pop(1)
0x98: Push((int) 522014)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 523455)
0x9e: Push((int) -1)
0x9f: Push((int) 24681)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x45f

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 522015)
0xa8: Push((int) -1)
0xa9: Push((int) 23185)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x45f

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: Push((int) 523456)
0xb2: Push((int) -1)
0xb3: Push((int) 24682)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: GOTO 0xb9

0xb7: Return(); Pop(0)

0xb8: GOTO 0x55

0xb9: PushEmpty(bool)
0xba: Call2 0x418

0xbb: Pop(0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbd: @ lshWaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: PushEmpty(string)
0xc3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc4: Call2 0x3a5

0xc5: Pop(1)
0xc6: GOTO 0xbd

0xc7: GOTO 0xd6

0xc8: Push("all")
0xc9: Push("idle")
0xca: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: @ WaitForAnimEnd()
0xcd: Pop(0)
0xce: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: GOTO 0xd6

0xd1: Push("all")
0xd2: Push("idle")
0xd3: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: GOTO 0xcc

0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: PushEmpty(bool)
0xd9: Call2 0x418

0xda: Pop(0)
0xdb: Pop(1); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Return(); Pop(0)

0xde: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Return(); Pop(0)

0xe1: PushEmpty(string, bool)
0xe2: Stack[-2] = Stack[-3]
0xe3: Push("")
0xe4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe6: Stack[-1] = (bool) 0
0xe7: GOTO 0xe9

0xe8: Stack[-1] = (bool) 1
0xe9: Call2 0x3b5

0xea: Pop(2)
0xeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: Push((int) 1)
0xef: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x3d3

0xf2: Pop(0)
0xf3: Push((int) 23190)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x423

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x43c

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x41a

0x104: Pop(2)
0x105: Push((int) 23187)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x423

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x43c

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x41a

0x116: Pop(2)
0x117: Push((int) 23182)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 0
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x447

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x453

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x436

0x12d: Pop(2)
0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Tiredness"
0x130: Call2 0xd7

0x131: Pop(1)
0x132: Push((int) 522012)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 523423)
0x138: Push((int) 24645)
0x139: Push((int) 24644)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x447

0x140: Pop(1)
0x141: Pop(1); Push((bool) Stack[-1] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xd7

0x146: Pop(1)
0x147: Push((int) 522016)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 522017)
0x14d: Push((int) -1)
0x14e: Push((int) 23187)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 522018)
0x152: Push((int) -1)
0x153: Push((int) 23188)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xd7

0x15a: Pop(1)
0x15b: Push((int) 522014)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 523455)
0x161: Push((int) -1)
0x162: Push((int) 24681)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x45f

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522015)
0x16b: Push((int) -1)
0x16c: Push((int) 23185)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x45f

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: Push((int) 523456)
0x175: Push((int) -1)
0x176: Push((int) 24682)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 24645)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Tiredness"
0x17f: Call2 0xd7

0x180: Pop(1)
0x181: Push((int) 523424)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 523425)
0x187: Push((int) 24647)
0x188: Push((int) 24646)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 523435)
0x18c: Push((int) 24659)
0x18d: Push((int) 24656)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Push((int) 523444)
0x191: Push((int) 24669)
0x192: Push((int) 24668)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 24669)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Tiredness"
0x19b: Call2 0xd7

0x19c: Pop(1)
0x19d: Push((int) 523445)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: Push((int) 523446)
0x1a3: Push((int) 24671)
0x1a4: Push((int) 24670)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Push((int) 541844)
0x1a8: Push((int) 24674)
0x1a9: Push((int) 44062)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 24674)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Tiredness"
0x1b2: Call2 0xd7

0x1b3: Pop(1)
0x1b4: Push((int) 523449)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 523459)
0x1ba: Push((int) 24686)
0x1bb: Push((int) 24685)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 24686)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Tiredness"
0x1c4: Call2 0xd7

0x1c5: Pop(1)
0x1c6: Push((int) 523460)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 523450)
0x1cc: Push((int) 24663)
0x1cd: Push((int) 24675)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 24671)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Tiredness"
0x1d6: Call2 0xd7

0x1d7: Pop(1)
0x1d8: Push((int) 523447)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 523457)
0x1de: Push((int) 24684)
0x1df: Push((int) 24683)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 24684)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Tiredness"
0x1e8: Call2 0xd7

0x1e9: Pop(1)
0x1ea: Push((int) 523458)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 523461)
0x1f0: Push((int) 24688)
0x1f1: Push((int) 24687)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 24688)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Tiredness"
0x1fa: Call2 0xd7

0x1fb: Pop(1)
0x1fc: Push((int) 523462)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: Push((int) 523448)
0x202: Push((int) 24663)
0x203: Push((int) 24672)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 24659)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Tiredness"
0x20c: Call2 0xd7

0x20d: Pop(1)
0x20e: Push((int) 523438)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 523439)
0x214: Push((int) 24651)
0x215: Push((int) 24660)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 523440)
0x219: Push((int) 24663)
0x21a: Push((int) 24662)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 24663)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Tiredness"
0x223: Call2 0xd7

0x224: Pop(1)
0x225: Push((int) 523441)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 523442)
0x22b: Push((int) 24651)
0x22c: Push((int) 24664)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 523443)
0x230: Push((int) 24651)
0x231: Push((int) 24666)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 24647)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Tiredness"
0x23a: Call2 0xd7

0x23b: Pop(1)
0x23c: Push((int) 523426)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 523427)
0x242: Push((int) 24649)
0x243: Push((int) 24648)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 24649)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Tiredness"
0x24c: Call2 0xd7

0x24d: Pop(1)
0x24e: Push((int) 523428)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 523429)
0x254: Push((int) 24651)
0x255: Push((int) 24650)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Push((int) 24651)
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Tiredness"
0x25e: Call2 0xd7

0x25f: Pop(1)
0x260: Push((int) 523430)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 522020)
0x266: Push((int) -1)
0x267: Push((int) 23190)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 523434)
0x26b: Push((int) -1)
0x26c: Push((int) 24655)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x271: PushEmpty(bool)
0x272: Call2 0x418

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x275: @ lshStopAnimation()
0x276: Pop(0)
0x277: GOTO 0x27a

0x278: @ StopAnimation()
0x279: Pop(0)
0x27a: Return(); Pop(0)

0x27b: GOTO 0xee

0x27c: Return(); Pop(0)

0x27d: PushEmpty()
0x27e: PushEmpty(int, object)
0x27f: Stack[-1] = Stack[-3]
0x280: Push(-2, 1); TaskCall(0)
0x281: Call2 0x0

0x282: Pop(-2, 1); TaskReturn
0x283: Pop(2)
0x284: Return(); Pop(0)

0x285: PushEmpty(bool)
0x286: Call2 0x2bf

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: @ Hold()
0x28b: Pop(0)
0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral"
0x28e: Call2 0x3a5

0x28f: Pop(1)
0x290: @ lshWaitForAnimEnd()
0x291: Pop(0)
0x292: GOTO 0x28c

0x293: @ Hold()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: @ Hold()
0x297: Pop(0)
0x298: Return(); Pop(0)

0x299: @ StopGroup0()
0x29a: Pop(0)
0x29b: Return(); Pop(0)

0x29c: PushEmpty(bool, bool)
0x29d: @ IsOverrideActive(Stack[-1])
0x29e: Pop(0)
0x29f: Pop(0); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a1: EventDisable(0)
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[-5]
0x2a4: Call2 0x2b6

0x2a5: Pop(2)
0x2a6: EventEnable(0)
0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[-4]
0x2a9: Call2 0x27d

0x2aa: Pop(1)
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2ad: @ GetPosition(Stack[-3])
0x2ae: Pop(0)
0x2af: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2b0: Push(CvectorIndex(Stack[-2], 0))
0x2b1: Push(CvectorIndex(Stack[-3], 2))
0x2b2: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2b3: Pop(2)
0x2b4: Stack[-8] = Stack[-1]
0x2b5: Return(); Pop(6)

0x2b6: PushEmpty(cvector, cvector)
0x2b7: @@ GetPosition(Stack[-1])
0x2b8: Pop(0)
0x2b9: PushEmpty(bool, cvector)
0x2ba: Stack[-1] = Stack[-3]
0x2bb: Call2 0x2ac

0x2bc: Stack[-6] = Stack[-2]
0x2bd: Pop(2)
0x2be: Return(); Pop(2)

0x2bf: PushEmpty(bool, bool)
0x2c0: @ IsLoaded(Stack[-1])
0x2c1: Pop(0)
0x2c2: Stack[-3] = Stack[-1]
0x2c3: Return(); Pop(2)

0x2c4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c5: @@ GetPosition(Stack[-8])
0x2c6: Pop(0)
0x2c7: @@ GetEyesHeight(Stack[-9])
0x2c8: Pop(0)
0x2c9: Push(CvectorIndex(Stack[-8], 1))
0x2ca: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cb: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2cc: @ GetPosition(Stack[-7])
0x2cd: Pop(0)
0x2ce: @ GetEyesHeight(Stack[-9])
0x2cf: Pop(0)
0x2d0: Push(CvectorIndex(Stack[-7], 1))
0x2d1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2d3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d4: Push(CvectorIndex(Stack[-6], 1))
0x2d5: Stack[-1] = (int) 0
0x2d6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d8: Pop(1); Push(Sqrt(Stack[-1]))
0x2d9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2da: Stack[-5] = -Stack[-6]; Pop(0);
0x2db: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2dc: PushEmpty(cvector, cvector)
0x2dd: Push(CVector(0.0, 1.0, 0.0))
0x2de: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2df: Call2 0x3e0

0x2e0: Pop(1)
0x2e1: Push((int) 25)
0x2e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e4: Push(CVector(0.0, 10.0, 0.0))
0x2e5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e7: @ IsOverrideActive(Stack[-2])
0x2e8: Pop(0)
0x2e9: Push(Stack[-2])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-21] = (bool) 0
0x2ec: Return(); Pop(18)

0x2ed: @ StopWorld()
0x2ee: Pop(0)
0x2ef: Push((bool) 1)
0x2f0: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2f1: Pop(1)
0x2f2: Push(CvectorIndex(Stack[-4], 0))
0x2f3: Push(CvectorIndex(Stack[-5], 2))
0x2f4: @ Rotate(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: PushEmpty(bool)
0x2f7: Call2 0x418

0x2f8: Pop(0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x303

0x2fb: Push("head")
0x2fc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fd: Pop(1)
0x2fe: Push(Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x300: Push("head")
0x301: @ LookAsyncCamera(Stack[-1])
0x302: Pop(1)
0x303: @ CameraWaitForPlayFinish()
0x304: Pop(0)
0x305: @ ResumeWorld()
0x306: Pop(0)
0x307: Stack[-21] = (bool) 1
0x308: Return(); Pop(18)

0x309: PushEmpty(bool, bool)
0x30a: Push((bool) 1)
0x30b: @ CameraSwitchToNormal(Stack[-1])
0x30c: Pop(1)
0x30d: PushEmpty(bool)
0x30e: Call2 0x418

0x30f: Pop(0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x31a

0x312: Push("head")
0x313: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x314: Pop(1)
0x315: Push(Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x317: Push("head")
0x318: @ UnlookAsync(Stack[-1])
0x319: Pop(1)
0x31a: Return(); Pop(2)

0x31b: PushEmpty(int, int, int, int)
0x31c: Push("voice_common")
0x31d: @ GetVariable(Stack[-1], Stack[-3])
0x31e: Pop(1)
0x31f: Push(Stack[-2])
0x320: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[-7]
0x323: Call2 0x355

0x324: Pop(1)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[-7]
0x329: Call2 0x37a

0x32a: Pop(1)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-6] = (bool) 0
0x32e: Return(); Pop(4)

0x32f: Push((int) 2)
0x330: @ irand(Stack[-2], Stack[-1])
0x331: Pop(1)
0x332: Push(Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x334: Push("voice_common")
0x335: Push((int) 1)
0x336: Pop(1); Push(Stack[-4] + Stack[-1]);
0x337: Push((int) 3)
0x338: Pop(2); Push(Stack[-2] % Stack[-1]);
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: GOTO 0x340

0x33c: Push("voice_common")
0x33d: Push((int) 0)
0x33e: @ SetVariable(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: GOTO 0x353

0x341: PushEmpty(bool, object)
0x342: Stack[-1] = Stack[-7]
0x343: Call2 0x37a

0x344: Pop(1)
0x345: Pop(1); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[-7]
0x349: Call2 0x355

0x34a: Pop(1)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-6] = (bool) 0
0x34e: Return(); Pop(4)

0x34f: Push("voice_common")
0x350: Push((int) 1)
0x351: @ SetVariable(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Stack[-6] = (bool) 1
0x354: Return(); Pop(4)

0x355: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x356: Stack[-5] = "c"
0x357: Stack[-4] = (int) 0
0x358: Push((int) 1)
0x359: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x35c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35d: @@ HasProperty(Stack[-1], Stack[-4])
0x35e: Pop(1)
0x35f: Pop(0); Push((bool) Stack[-3] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x365

0x362: Push((int) 1)
0x363: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x364: GOTO 0x358

0x365: Pop(0); Push((bool) Stack[-4] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-12] = (bool) 0
0x368: Return(); Pop(10)

0x369: Stack[-2] = (int) 0
0x36a: Push((int) 1)
0x36b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: @ irand(Stack[-2], Stack[-4])
0x36e: Pop(0)
0x36f: Push((int) 1)
0x370: Pop(1); Push(Stack[-3] + Stack[-1]);
0x371: Pop(1); Push(Stack[-6] + Stack[-1]);
0x372: @@ GetProperty(Stack[-1], Stack[-2])
0x373: Pop(1)
0x374: PushEmpty(bool, string)
0x375: Stack[-1] = Stack[-3]
0x376: Call2 0x3c4

0x377: Stack[-14] = Stack[-2]
0x378: Pop(2)
0x379: Return(); Pop(10)

0x37a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37b: Push("d")
0x37c: PushEmpty(int)
0x37d: Call2 0x407

0x37e: Pop(0)
0x37f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x380: Push("m")
0x381: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x382: Stack[-4] = (int) 0
0x383: Push((int) 1)
0x384: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x385: Push((int) 1)
0x386: Pop(1); Push(Stack[-5] + Stack[-1]);
0x387: Pop(1); Push(Stack[-6] + Stack[-1]);
0x388: @@ HasProperty(Stack[-1], Stack[-4])
0x389: Pop(1)
0x38a: Pop(0); Push((bool) Stack[-3] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x390

0x38d: Push((int) 1)
0x38e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x38f: GOTO 0x383

0x390: Pop(0); Push((bool) Stack[-4] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-12] = (bool) 0
0x393: Return(); Pop(10)

0x394: Stack[-2] = (int) 0
0x395: Push((int) 1)
0x396: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: @ irand(Stack[-2], Stack[-4])
0x399: Pop(0)
0x39a: Push((int) 1)
0x39b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x39c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39d: @@ GetProperty(Stack[-1], Stack[-2])
0x39e: Pop(1)
0x39f: PushEmpty(bool, string)
0x3a0: Stack[-1] = Stack[-3]
0x3a1: Call2 0x3c4

0x3a2: Stack[-14] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Return(); Pop(10)

0x3a5: PushEmpty(bool, float, float, bool, float, float)
0x3a6: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3a7: Pop(0)
0x3a8: Push(Stack[-3])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3aa: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ab: Pop(0)
0x3ac: Push((bool) 0)
0x3ad: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(1)
0x3af: GOTO 0x3b4

0x3b0: Push("Can't find lsh animation : ")
0x3b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b2: @ Trace(Stack[-1])
0x3b3: Pop(1)
0x3b4: Return(); Pop(6)

0x3b5: PushEmpty(bool, float, float, bool, float, float)
0x3b6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3b7: Pop(0)
0x3b8: Push(Stack[-3])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3ba: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3bb: Pop(0)
0x3bc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3bd: Pop(0)
0x3be: GOTO 0x3c3

0x3bf: Push("Can't find lsh animation : ")
0x3c0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3c1: @ Trace(Stack[-1])
0x3c2: Pop(1)
0x3c3: Return(); Pop(6)

0x3c4: PushEmpty(bool, bool)
0x3c5: PushEmpty(bool)
0x3c6: Call2 0x418

0x3c7: Pop(0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c9: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ca: Pop(0)
0x3cb: Push(Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cd: @ lshPlaySpeech(Stack[-3])
0x3ce: Pop(0)
0x3cf: Stack[-4] = (bool) 1
0x3d0: Return(); Pop(2)

0x3d1: Stack[-4] = (bool) 0
0x3d2: Return(); Pop(2)

0x3d3: PushEmpty(bool)
0x3d4: Call2 0x418

0x3d5: Pop(0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: @ lshStopSpeech()
0x3d8: Pop(0)
0x3d9: Return(); Pop(0)

0x3da: PushEmpty(object, object)
0x3db: @ self(Stack[-1])
0x3dc: Pop(0)
0x3dd: Stack[-3] = Stack[-1]
0x3de: Return(); Pop(2)

0x3df: Stack[-1] = 0
0x3e0: PushEmpty(float, float)
0x3e1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e3: Push((float)0.0)
0x3e4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3e7: Return(); Pop(2)

0x3e8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e9: Return(); Pop(2)

0x3ea: PushEmpty(int, int)
0x3eb: @ GetVariable(Stack[-3], Stack[-1])
0x3ec: Pop(0)
0x3ed: Stack[-4] = Stack[-1]
0x3ee: Return(); Pop(2)

0x3ef: PushEmpty(object, object)
0x3f0: @ FindActor(Stack[-1], Stack[-4])
0x3f1: Pop(0)
0x3f2: Pop(0); Push((bool) Stack[-1] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-5] = (bool) 0
0x3f5: Return(); Pop(2)

0x3f6: @ Trigger(Stack[-1], Stack[-3])
0x3f7: Pop(0)
0x3f8: Stack[-5] = (bool) 1
0x3f9: Return(); Pop(2)

0x3fa: Stack[-1] = 0
0x3fb: PushEmpty(object, object)
0x3fc: @ FindActor(Stack[-1], Stack[-5])
0x3fd: Pop(0)
0x3fe: Pop(0); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-6] = (bool) 0
0x401: Return(); Pop(2)

0x402: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x403: Pop(0)
0x404: Stack[-6] = (bool) 1
0x405: Return(); Pop(2)

0x406: Stack[-1] = 0
0x407: PushEmpty(float, float)
0x408: @ GetGameTime(Stack[-1])
0x409: Pop(0)
0x40a: Push((int) 1)
0x40b: PushEmpty(int)
0x40c: Push((int) 24)
0x40d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x40e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x40f: Return(); Pop(2)

0x410: Stack[-1] = (int) 515541
0x411: Return(); Pop(0)

0x412: Stack[-1] = (int) 502866
0x413: Return(); Pop(0)

0x414: Stack[-1] = "ui/NPC_Lara.png"
0x415: Return(); Pop(0)

0x416: Stack[-1] = "ui/NPC_Lara_b.png"
0x417: Return(); Pop(0)

0x418: Stack[-1] = (bool) 1
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Push("b11q01KnowWhoKilled")
0x41c: Push((int) 1)
0x41d: @ SetVariable(Stack[-2], Stack[-1])
0x41e: Pop(2)
0x41f: PushEmpty()
0x420: Call2 0x46b

0x421: Pop(0)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: Push("b11q01VictimChoosed")
0x425: Push((int) 1)
0x426: @ SetVariable(Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Push("b11q01KillLara")
0x429: Push((int) 1)
0x42a: @ SetVariable(Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: PushEmpty(bool, string, string, string)
0x42d: Stack[-3] = "volonteers_burah"
0x42e: Stack[-2] = "disease"
0x42f: Stack[-1] = "lara"
0x430: Call2 0x3fb

0x431: Pop(4)
0x432: Push("Lara is diseased")
0x433: @ Trace(Stack[-1])
0x434: Pop(1)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Push("oob11Lara1")
0x438: Push((int) 1)
0x439: @ SetVariable(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: Push("b11q01")
0x43e: Push((int) 2)
0x43f: @ SetVariable(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: PushEmpty(bool, string, string)
0x442: Stack[-2] = "quest_b11_01"
0x443: Stack[-1] = "open_well_exit"
0x444: Call2 0x3ef

0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty(int, string)
0x449: Stack[-1] = "b11q01VictimChoosed"
0x44a: Call2 0x3ea

0x44b: Pop(1)
0x44c: Push((int) 0)
0x44d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-2] = (bool) 1
0x450: Return(); Pop(0)

0x451: Stack[-2] = (bool) 0
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(int, string)
0x455: Stack[-1] = "oob11Lara1"
0x456: Call2 0x3ea

0x457: Pop(1)
0x458: Push((int) 0)
0x459: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-2] = (bool) 1
0x45c: Return(); Pop(0)

0x45d: Stack[-2] = (bool) 0
0x45e: Return(); Pop(0)

0x45f: PushEmpty()
0x460: PushEmpty(int, string)
0x461: Stack[-1] = "b11q01KillLara"
0x462: Call2 0x3ea

0x463: Pop(1)
0x464: Push((int) 0)
0x465: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-2] = (bool) 1
0x468: Return(); Pop(0)

0x469: Stack[-2] = (bool) 0
0x46a: Return(); Pop(0)

0x46b: PushEmpty(object, object)
0x46c: Push((int) 315)
0x46d: Push((int) 1)
0x46e: Push((int) 522057)
0x46f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: PushEmpty(bool, object, int)
0x472: Stack[-2] = Stack[-4]
0x473: Stack[-1] = (int) 313
0x474: Call2 0x485

0x475: Pop(3)
0x476: Return(); Pop(2)

0x477: Stack[-1] = 0
0x478: PushEmpty(object, object)
0x479: @ GetDiaryRoot(Stack[-1])
0x47a: Pop(0)
0x47b: Pop(0); Push((bool) Stack[-1] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x47d: Push("Can't retrieve diary root")
0x47e: @ Trace(Stack[-1])
0x47f: Pop(1)
0x480: Stack[-3] = (bool) 0
0x481: Return(); Pop(2)

0x482: Stack[-3] = Stack[-1]
0x483: Return(); Pop(2)

0x484: Stack[-1] = 0
0x485: PushEmpty(object, object, int, object, object, int)
0x486: PushEmpty(object)
0x487: Call2 0x478

0x488: Stack[-4] = Stack[-1]
0x489: Pop(1)
0x48a: @@ Find(Stack[-7], Stack[-2])
0x48b: Pop(0)
0x48c: Pop(0); Push((bool) Stack[-2] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x48e: Push("Can't find diary parent with id: ")
0x48f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x490: @ Trace(Stack[-1])
0x491: Pop(1)
0x492: Stack[-9] = (bool) 0
0x493: Return(); Pop(6)

0x494: @@ AddChild(Stack[-8])
0x495: Pop(0)
0x496: Push((int) 7)
0x497: @ SendWorldWndMessage(Stack[-1])
0x498: Pop(1)
0x499: @@ GetCategory(Stack[-1])
0x49a: Pop(0)
0x49b: @ SetDiarySection(Stack[-1])
0x49c: Pop(0)
0x49d: Stack[-9] = (bool) 0
0x49e: Return(); Pop(6)

0x49f: Stack[-2] = 0
0x4a0: Stack[-3] = 0
0x4a1: PushEmpty(int, int)
0x4a2: Push("branch")
0x4a3: @ GetVariable(Stack[-1], Stack[-2])
0x4a4: Pop(1)
0x4a5: Push((int) 0)
0x4a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a8: Stack[-3] = (int) 1
0x4a9: Return(); Pop(2)

0x4aa: GOTO 0x4b0

0x4ab: Push((int) 1)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-3] = (int) 2
0x4af: Return(); Pop(2)

0x4b0: Stack[-3] = (int) 3
0x4b1: Return(); Pop(2)

