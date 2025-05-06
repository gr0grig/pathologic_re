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

RunOp = 0x26c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xed Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x27d Vars = ()
		EVENT_5 Op = 0x280 Vars = ()
		EVENT_0 Op = 0x283 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2ab

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3fb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x486

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
0x31: Call2 0x3bf

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x300

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
0x48: Call2 0x2ef

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
0x5b: Call2 0x42c

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x438

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x41b

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
0x7c: Call2 0x42c

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
0xa4: Call2 0x444

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 522015)
0xa8: Push((int) -1)
0xa9: Push((int) 23185)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x444

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
0xba: Call2 0x3fd

0xbb: Pop(0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbd: @ lshWaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: PushEmpty(string)
0xc3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc4: Call2 0x38a

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
0xd9: Call2 0x3fd

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
0xe9: Call2 0x39a

0xea: Pop(2)
0xeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: Push((int) 1)
0xef: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x3b8

0xf2: Pop(0)
0xf3: Push((int) 23190)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x408

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x421

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x3ff

0x104: Pop(2)
0x105: Push((int) 23187)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x408

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x421

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3ff

0x116: Pop(2)
0x117: Push((int) 23182)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 0
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x42c

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x438

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x41b

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
0x13f: Call2 0x42c

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
0x167: Call2 0x444

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522015)
0x16b: Push((int) -1)
0x16c: Push((int) 23185)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x444

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
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

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
0x190: Return(); Pop(0)

0x191: Push((int) 24669)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x194: Push((int) 24674)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Tiredness"
0x199: Call2 0xd7

0x19a: Pop(1)
0x19b: Push((int) 523449)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 523459)
0x1a1: Push((int) 24686)
0x1a2: Push((int) 24685)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 24686)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Tiredness"
0x1ab: Call2 0xd7

0x1ac: Pop(1)
0x1ad: Push((int) 523460)
0x1ae: @@ SetMessage(Stack[-1])
0x1af: Pop(1)
0x1b0: @@ ClearReplies()
0x1b1: Pop(0)
0x1b2: Push((int) 523450)
0x1b3: Push((int) 24663)
0x1b4: Push((int) 24675)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 24671)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Tiredness"
0x1bd: Call2 0xd7

0x1be: Pop(1)
0x1bf: Push((int) 523447)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 523457)
0x1c5: Push((int) 24684)
0x1c6: Push((int) 24683)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 24684)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Tiredness"
0x1cf: Call2 0xd7

0x1d0: Pop(1)
0x1d1: Push((int) 523458)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 523461)
0x1d7: Push((int) 24688)
0x1d8: Push((int) 24687)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 24688)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Tiredness"
0x1e1: Call2 0xd7

0x1e2: Pop(1)
0x1e3: Push((int) 523462)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 523448)
0x1e9: Push((int) 24663)
0x1ea: Push((int) 24672)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 24659)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Tiredness"
0x1f3: Call2 0xd7

0x1f4: Pop(1)
0x1f5: Push((int) 523438)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 523439)
0x1fb: Push((int) 24651)
0x1fc: Push((int) 24660)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 523440)
0x200: Push((int) 24663)
0x201: Push((int) 24662)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 24663)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Tiredness"
0x20a: Call2 0xd7

0x20b: Pop(1)
0x20c: Push((int) 523441)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 523442)
0x212: Push((int) 24651)
0x213: Push((int) 24664)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 523443)
0x217: Push((int) 24651)
0x218: Push((int) 24666)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 24647)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Tiredness"
0x221: Call2 0xd7

0x222: Pop(1)
0x223: Push((int) 523426)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 523427)
0x229: Push((int) 24649)
0x22a: Push((int) 24648)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 24649)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Tiredness"
0x233: Call2 0xd7

0x234: Pop(1)
0x235: Push((int) 523428)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 523429)
0x23b: Push((int) 24651)
0x23c: Push((int) 24650)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 24651)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Tiredness"
0x245: Call2 0xd7

0x246: Pop(1)
0x247: Push((int) 523430)
0x248: @@ SetMessage(Stack[-1])
0x249: Pop(1)
0x24a: @@ ClearReplies()
0x24b: Pop(0)
0x24c: Push((int) 522020)
0x24d: Push((int) -1)
0x24e: Push((int) 23190)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Push((int) 523434)
0x252: Push((int) -1)
0x253: Push((int) 24655)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x258: PushEmpty(bool)
0x259: Call2 0x3fd

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: @ lshStopAnimation()
0x25d: Pop(0)
0x25e: GOTO 0x261

0x25f: @ StopAnimation()
0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: GOTO 0xee

0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: PushEmpty(int, object)
0x266: Stack[-1] = Stack[-3]
0x267: Push(-2, 1); TaskCall(0)
0x268: Call2 0x0

0x269: Pop(-2, 1); TaskReturn
0x26a: Pop(2)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(bool)
0x26d: Call2 0x2a6

0x26e: Pop(0)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: @ Hold()
0x272: Pop(0)
0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral"
0x275: Call2 0x38a

0x276: Pop(1)
0x277: @ lshWaitForAnimEnd()
0x278: Pop(0)
0x279: GOTO 0x273

0x27a: @ Hold()
0x27b: Pop(0)
0x27c: Return(); Pop(0)

0x27d: @ Hold()
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: @ StopGroup0()
0x281: Pop(0)
0x282: Return(); Pop(0)

0x283: PushEmpty(bool, bool)
0x284: @ IsOverrideActive(Stack[-1])
0x285: Pop(0)
0x286: Pop(0); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x288: EventDisable(0)
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[-5]
0x28b: Call2 0x29d

0x28c: Pop(2)
0x28d: EventEnable(0)
0x28e: PushEmpty(object)
0x28f: Stack[-1] = Stack[-4]
0x290: Call2 0x264

0x291: Pop(1)
0x292: Return(); Pop(2)

0x293: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x294: @ GetPosition(Stack[-3])
0x295: Pop(0)
0x296: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x297: Push(CvectorIndex(Stack[-2], 0))
0x298: Push(CvectorIndex(Stack[-3], 2))
0x299: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x29a: Pop(2)
0x29b: Stack[-8] = Stack[-1]
0x29c: Return(); Pop(6)

0x29d: PushEmpty(cvector, cvector)
0x29e: @@ GetPosition(Stack[-1])
0x29f: Pop(0)
0x2a0: PushEmpty(bool, cvector)
0x2a1: Stack[-1] = Stack[-3]
0x2a2: Call2 0x293

0x2a3: Stack[-6] = Stack[-2]
0x2a4: Pop(2)
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(bool, bool)
0x2a7: @ IsLoaded(Stack[-1])
0x2a8: Pop(0)
0x2a9: Stack[-3] = Stack[-1]
0x2aa: Return(); Pop(2)

0x2ab: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ac: @@ GetPosition(Stack[-8])
0x2ad: Pop(0)
0x2ae: @@ GetEyesHeight(Stack[-9])
0x2af: Pop(0)
0x2b0: Push(CvectorIndex(Stack[-8], 1))
0x2b1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b3: @ GetPosition(Stack[-7])
0x2b4: Pop(0)
0x2b5: @ GetEyesHeight(Stack[-9])
0x2b6: Pop(0)
0x2b7: Push(CvectorIndex(Stack[-7], 1))
0x2b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ba: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2bb: Push(CvectorIndex(Stack[-6], 1))
0x2bc: Stack[-1] = (int) 0
0x2bd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2be: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bf: Pop(1); Push(Sqrt(Stack[-1]))
0x2c0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2c1: Stack[-5] = -Stack[-6]; Pop(0);
0x2c2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c3: PushEmpty(cvector, cvector)
0x2c4: Push(CVector(0.0, 1.0, 0.0))
0x2c5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c6: Call2 0x3c5

0x2c7: Pop(1)
0x2c8: Push((int) 25)
0x2c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cb: Push(CVector(0.0, 10.0, 0.0))
0x2cc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2cd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ce: @ IsOverrideActive(Stack[-2])
0x2cf: Pop(0)
0x2d0: Push(Stack[-2])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-21] = (bool) 0
0x2d3: Return(); Pop(18)

0x2d4: @ StopWorld()
0x2d5: Pop(0)
0x2d6: @ CameraTransit(Stack[-3], Stack[-5])
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-4], 0))
0x2d9: Push(CvectorIndex(Stack[-5], 2))
0x2da: @ Rotate(Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: PushEmpty(bool)
0x2dd: Call2 0x3fd

0x2de: Pop(0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: GOTO 0x2e9

0x2e1: Push("head")
0x2e2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e3: Pop(1)
0x2e4: Push(Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e6: Push("head")
0x2e7: @ LookAsyncCamera(Stack[-1])
0x2e8: Pop(1)
0x2e9: @ CameraWaitForPlayFinish()
0x2ea: Pop(0)
0x2eb: @ ResumeWorld()
0x2ec: Pop(0)
0x2ed: Stack[-21] = (bool) 1
0x2ee: Return(); Pop(18)

0x2ef: PushEmpty(bool, bool)
0x2f0: @ CameraSwitchToNormal()
0x2f1: Pop(0)
0x2f2: PushEmpty(bool)
0x2f3: Call2 0x3fd

0x2f4: Pop(0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2ff

0x2f7: Push("head")
0x2f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Push("head")
0x2fd: @ UnlookAsync(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(2)

0x300: PushEmpty(int, int, int, int)
0x301: Push("voice_common")
0x302: @ GetVariable(Stack[-1], Stack[-3])
0x303: Pop(1)
0x304: Push(Stack[-2])
0x305: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[-7]
0x308: Call2 0x33a

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30c: PushEmpty(bool, object)
0x30d: Stack[-1] = Stack[-7]
0x30e: Call2 0x35f

0x30f: Pop(1)
0x310: Pop(1); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-6] = (bool) 0
0x313: Return(); Pop(4)

0x314: Push((int) 2)
0x315: @ irand(Stack[-2], Stack[-1])
0x316: Pop(1)
0x317: Push(Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x319: Push("voice_common")
0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x31c: Push((int) 3)
0x31d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x31e: @ SetVariable(Stack[-2], Stack[-1])
0x31f: Pop(2)
0x320: GOTO 0x325

0x321: Push("voice_common")
0x322: Push((int) 0)
0x323: @ SetVariable(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: GOTO 0x338

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[-7]
0x328: Call2 0x35f

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[-7]
0x32e: Call2 0x33a

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-6] = (bool) 0
0x333: Return(); Pop(4)

0x334: Push("voice_common")
0x335: Push((int) 1)
0x336: @ SetVariable(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: Stack[-6] = (bool) 1
0x339: Return(); Pop(4)

0x33a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x33b: Stack[-5] = "c"
0x33c: Stack[-4] = (int) 0
0x33d: Push((int) 1)
0x33e: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x33f: Push((int) 1)
0x340: Pop(1); Push(Stack[-5] + Stack[-1]);
0x341: Pop(1); Push(Stack[-6] + Stack[-1]);
0x342: @@ HasProperty(Stack[-1], Stack[-4])
0x343: Pop(1)
0x344: Pop(0); Push((bool) Stack[-3] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x34a

0x347: Push((int) 1)
0x348: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x349: GOTO 0x33d

0x34a: Pop(0); Push((bool) Stack[-4] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-12] = (bool) 0
0x34d: Return(); Pop(10)

0x34e: Stack[-2] = (int) 0
0x34f: Push((int) 1)
0x350: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: @ irand(Stack[-2], Stack[-4])
0x353: Pop(0)
0x354: Push((int) 1)
0x355: Pop(1); Push(Stack[-3] + Stack[-1]);
0x356: Pop(1); Push(Stack[-6] + Stack[-1]);
0x357: @@ GetProperty(Stack[-1], Stack[-2])
0x358: Pop(1)
0x359: PushEmpty(bool, string)
0x35a: Stack[-1] = Stack[-3]
0x35b: Call2 0x3a9

0x35c: Stack[-14] = Stack[-2]
0x35d: Pop(2)
0x35e: Return(); Pop(10)

0x35f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x360: Push("d")
0x361: PushEmpty(int)
0x362: Call2 0x3ec

0x363: Pop(0)
0x364: Pop(2); Push(Stack[-2] + Stack[-1]);
0x365: Push("m")
0x366: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x367: Stack[-4] = (int) 0
0x368: Push((int) 1)
0x369: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36a: Push((int) 1)
0x36b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x36c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36d: @@ HasProperty(Stack[-1], Stack[-4])
0x36e: Pop(1)
0x36f: Pop(0); Push((bool) Stack[-3] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: GOTO 0x375

0x372: Push((int) 1)
0x373: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x374: GOTO 0x368

0x375: Pop(0); Push((bool) Stack[-4] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x377: Stack[-12] = (bool) 0
0x378: Return(); Pop(10)

0x379: Stack[-2] = (int) 0
0x37a: Push((int) 1)
0x37b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: @ irand(Stack[-2], Stack[-4])
0x37e: Pop(0)
0x37f: Push((int) 1)
0x380: Pop(1); Push(Stack[-3] + Stack[-1]);
0x381: Pop(1); Push(Stack[-6] + Stack[-1]);
0x382: @@ GetProperty(Stack[-1], Stack[-2])
0x383: Pop(1)
0x384: PushEmpty(bool, string)
0x385: Stack[-1] = Stack[-3]
0x386: Call2 0x3a9

0x387: Stack[-14] = Stack[-2]
0x388: Pop(2)
0x389: Return(); Pop(10)

0x38a: PushEmpty(bool, float, float, bool, float, float)
0x38b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x38c: Pop(0)
0x38d: Push(Stack[-3])
0x38e: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x390: Pop(0)
0x391: Push((bool) 0)
0x392: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(1)
0x394: GOTO 0x399

0x395: Push("Can't find lsh animation : ")
0x396: Pop(1); Push(Stack[-1] + Stack[-8]);
0x397: @ Trace(Stack[-1])
0x398: Pop(1)
0x399: Return(); Pop(6)

0x39a: PushEmpty(bool, float, float, bool, float, float)
0x39b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x39c: Pop(0)
0x39d: Push(Stack[-3])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3a0: Pop(0)
0x3a1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3a2: Pop(0)
0x3a3: GOTO 0x3a8

0x3a4: Push("Can't find lsh animation : ")
0x3a5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3a6: @ Trace(Stack[-1])
0x3a7: Pop(1)
0x3a8: Return(); Pop(6)

0x3a9: PushEmpty(bool, bool)
0x3aa: PushEmpty(bool)
0x3ab: Call2 0x3fd

0x3ac: Pop(0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3ae: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3af: Pop(0)
0x3b0: Push(Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b2: @ lshPlaySpeech(Stack[-3])
0x3b3: Pop(0)
0x3b4: Stack[-4] = (bool) 1
0x3b5: Return(); Pop(2)

0x3b6: Stack[-4] = (bool) 0
0x3b7: Return(); Pop(2)

0x3b8: PushEmpty(bool)
0x3b9: Call2 0x3fd

0x3ba: Pop(0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: @ lshStopSpeech()
0x3bd: Pop(0)
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(object, object)
0x3c0: @ self(Stack[-1])
0x3c1: Pop(0)
0x3c2: Stack[-3] = Stack[-1]
0x3c3: Return(); Pop(2)

0x3c4: Stack[-1] = 0
0x3c5: PushEmpty(float, float)
0x3c6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3c7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3c8: Push((float)0.0)
0x3c9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3cc: Return(); Pop(2)

0x3cd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(int, int)
0x3d0: @ GetVariable(Stack[-3], Stack[-1])
0x3d1: Pop(0)
0x3d2: Stack[-4] = Stack[-1]
0x3d3: Return(); Pop(2)

0x3d4: PushEmpty(object, object)
0x3d5: @ FindActor(Stack[-1], Stack[-4])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-5] = (bool) 0
0x3da: Return(); Pop(2)

0x3db: @ Trigger(Stack[-1], Stack[-3])
0x3dc: Pop(0)
0x3dd: Stack[-5] = (bool) 1
0x3de: Return(); Pop(2)

0x3df: Stack[-1] = 0
0x3e0: PushEmpty(object, object)
0x3e1: @ FindActor(Stack[-1], Stack[-5])
0x3e2: Pop(0)
0x3e3: Pop(0); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-6] = (bool) 0
0x3e6: Return(); Pop(2)

0x3e7: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3e8: Pop(0)
0x3e9: Stack[-6] = (bool) 1
0x3ea: Return(); Pop(2)

0x3eb: Stack[-1] = 0
0x3ec: PushEmpty(float, float)
0x3ed: @ GetGameTime(Stack[-1])
0x3ee: Pop(0)
0x3ef: Push((int) 1)
0x3f0: PushEmpty(int)
0x3f1: Push((int) 24)
0x3f2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3f3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3f4: Return(); Pop(2)

0x3f5: Stack[-1] = (int) 515541
0x3f6: Return(); Pop(0)

0x3f7: Stack[-1] = (int) 502866
0x3f8: Return(); Pop(0)

0x3f9: Stack[-1] = "ui/NPC_Lara.png"
0x3fa: Return(); Pop(0)

0x3fb: Stack[-1] = "ui/NPC_Lara_b.png"
0x3fc: Return(); Pop(0)

0x3fd: Stack[-1] = (bool) 1
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: Push("b11q01KnowWhoKilled")
0x401: Push((int) 1)
0x402: @ SetVariable(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: PushEmpty()
0x405: Call2 0x450

0x406: Pop(0)
0x407: Return(); Pop(0)

0x408: PushEmpty()
0x409: Push("b11q01VictimChoosed")
0x40a: Push((int) 1)
0x40b: @ SetVariable(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: Push("b11q01KillLara")
0x40e: Push((int) 1)
0x40f: @ SetVariable(Stack[-2], Stack[-1])
0x410: Pop(2)
0x411: PushEmpty(bool, string, string, string)
0x412: Stack[-3] = "volonteers_burah"
0x413: Stack[-2] = "disease"
0x414: Stack[-1] = "lara"
0x415: Call2 0x3e0

0x416: Pop(4)
0x417: Push("Lara is diseased")
0x418: @ Trace(Stack[-1])
0x419: Pop(1)
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: Push("oob11Lara1")
0x41d: Push((int) 1)
0x41e: @ SetVariable(Stack[-2], Stack[-1])
0x41f: Pop(2)
0x420: Return(); Pop(0)

0x421: PushEmpty()
0x422: Push("b11q01")
0x423: Push((int) 2)
0x424: @ SetVariable(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: PushEmpty(bool, string, string)
0x427: Stack[-2] = "quest_b11_01"
0x428: Stack[-1] = "open_well_exit"
0x429: Call2 0x3d4

0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: PushEmpty()
0x42d: PushEmpty(int, string)
0x42e: Stack[-1] = "b11q01VictimChoosed"
0x42f: Call2 0x3cf

0x430: Pop(1)
0x431: Push((int) 0)
0x432: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-2] = (bool) 1
0x435: Return(); Pop(0)

0x436: Stack[-2] = (bool) 0
0x437: Return(); Pop(0)

0x438: PushEmpty()
0x439: PushEmpty(int, string)
0x43a: Stack[-1] = "oob11Lara1"
0x43b: Call2 0x3cf

0x43c: Pop(1)
0x43d: Push((int) 0)
0x43e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-2] = (bool) 1
0x441: Return(); Pop(0)

0x442: Stack[-2] = (bool) 0
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: PushEmpty(int, string)
0x446: Stack[-1] = "b11q01KillLara"
0x447: Call2 0x3cf

0x448: Pop(1)
0x449: Push((int) 0)
0x44a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-2] = (bool) 1
0x44d: Return(); Pop(0)

0x44e: Stack[-2] = (bool) 0
0x44f: Return(); Pop(0)

0x450: PushEmpty(object, object)
0x451: Push((int) 315)
0x452: Push((int) 1)
0x453: Push((int) 522057)
0x454: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: PushEmpty(bool, object, int)
0x457: Stack[-2] = Stack[-4]
0x458: Stack[-1] = (int) 313
0x459: Call2 0x46a

0x45a: Pop(3)
0x45b: Return(); Pop(2)

0x45c: Stack[-1] = 0
0x45d: PushEmpty(object, object)
0x45e: @ GetDiaryRoot(Stack[-1])
0x45f: Pop(0)
0x460: Pop(0); Push((bool) Stack[-1] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x462: Push("Can't retrieve diary root")
0x463: @ Trace(Stack[-1])
0x464: Pop(1)
0x465: Stack[-3] = (bool) 0
0x466: Return(); Pop(2)

0x467: Stack[-3] = Stack[-1]
0x468: Return(); Pop(2)

0x469: Stack[-1] = 0
0x46a: PushEmpty(object, object, int, object, object, int)
0x46b: PushEmpty(object)
0x46c: Call2 0x45d

0x46d: Stack[-4] = Stack[-1]
0x46e: Pop(1)
0x46f: @@ Find(Stack[-7], Stack[-2])
0x470: Pop(0)
0x471: Pop(0); Push((bool) Stack[-2] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x473: Push("Can't find diary parent with id: ")
0x474: Pop(1); Push(Stack[-1] + Stack[-8]);
0x475: @ Trace(Stack[-1])
0x476: Pop(1)
0x477: Stack[-9] = (bool) 0
0x478: Return(); Pop(6)

0x479: @@ AddChild(Stack[-8])
0x47a: Pop(0)
0x47b: Push((int) 7)
0x47c: @ SendWorldWndMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ GetCategory(Stack[-1])
0x47f: Pop(0)
0x480: @ SetDiarySection(Stack[-1])
0x481: Pop(0)
0x482: Stack[-9] = (bool) 0
0x483: Return(); Pop(6)

0x484: Stack[-2] = 0
0x485: Stack[-3] = 0
0x486: PushEmpty(int, int)
0x487: Push("branch")
0x488: @ GetVariable(Stack[-1], Stack[-2])
0x489: Pop(1)
0x48a: Push((int) 0)
0x48b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48d: Stack[-3] = (int) 1
0x48e: Return(); Pop(2)

0x48f: GOTO 0x495

0x490: Push((int) 1)
0x491: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-3] = (int) 2
0x494: Return(); Pop(2)

0x495: Stack[-3] = (int) 3
0x496: Return(); Pop(2)

