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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Doubt
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	game_final
	isobor@door1
	b12q01DankoInSobor
	b12q01KlaraInSobor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Block.png
	ui/NPC_Block_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x25e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x262 Vars = (object)
		EVENT_26 Op = 0x26e Vars = (string)
		EVENT_6 Op = 0x28a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x29c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4a8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4a6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4aa

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4ac

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x495

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
0x31: Call2 0x3b2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2f3

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
0x48: Call2 0x2e1

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
0x56: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x414

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xb9

0x60: Pop(1)
0x61: Push((int) 522855)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: Push((int) 523022)
0x67: Push((int) 24216)
0x68: Push((int) 24215)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 522876)
0x6c: Push((int) 33440)
0x6d: Push((int) 24060)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x420

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 540014)
0x76: Push((int) 41986)
0x77: Push((int) 41985)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x42c

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 522878)
0x80: Push((int) 33448)
0x81: Push((int) 24064)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 540279)
0x85: Push((int) 42260)
0x86: Push((int) 42259)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x9b

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral"
0x8c: Call2 0xb9

0x8d: Pop(1)
0x8e: Push((int) 523170)
0x8f: @@ SetMessage(Stack[-1])
0x90: Pop(1)
0x91: @@ ClearReplies()
0x92: Pop(0)
0x93: Push((int) 523172)
0x94: Push((int) -1)
0x95: Push((int) 24374)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x55

0x9b: PushEmpty(bool)
0x9c: Call2 0x4ae

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call2 0x37d

0xa7: Pop(1)
0xa8: GOTO 0x9f

0xa9: GOTO 0xb8

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: Push("all")
0xb4: Push("idle")
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: GOTO 0xae

0xb8: Return(); Pop(0)

0xb9: PushEmpty()
0xba: PushEmpty(bool)
0xbb: Call2 0x4ae

0xbc: Pop(0)
0xbd: Pop(1); Push((bool) Stack[-1] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(0)

0xc3: PushEmpty(string, bool)
0xc4: Stack[-2] = Stack[-3]
0xc5: Push("")
0xc6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: Stack[-1] = (bool) 0
0xc9: GOTO 0xcb

0xca: Stack[-1] = (bool) 1
0xcb: Call2 0x38d

0xcc: Pop(2)
0xcd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: Push((int) 1)
0xd1: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0xd2: PushEmpty()
0xd3: Call2 0x3ab

0xd4: Pop(0)
0xd5: Push((int) 24053)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x3e1

0xdc: Pop(2)
0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3f3

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x404

0xe6: Pop(2)
0xe7: Push((int) 41989)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x3e7

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3f3

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x3fa

0xf8: Pop(2)
0xf9: Push((int) 24059)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3ed

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3f3

0x105: Pop(2)
0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3ff

0x10a: Pop(2)
0x10b: Push((int) 42261)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x409

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x3f3

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x40f

0x11c: Pop(2)
0x11d: Push((int) 24039)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x414

0x123: Pop(1)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0xb9

0x129: Pop(1)
0x12a: Push((int) 522855)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 523022)
0x130: Push((int) 24216)
0x131: Push((int) 24215)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 522876)
0x135: Push((int) 33440)
0x136: Push((int) 24060)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x420

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 540014)
0x13f: Push((int) 41986)
0x140: Push((int) 41985)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x42c

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 522878)
0x149: Push((int) 33448)
0x14a: Push((int) 24064)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 540279)
0x14e: Push((int) 42260)
0x14f: Push((int) 42259)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0xb9

0x156: Pop(1)
0x157: Push((int) 523170)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 523172)
0x15d: Push((int) -1)
0x15e: Push((int) 24374)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 42260)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0xb9

0x168: Pop(1)
0x169: Push((int) 540280)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 540281)
0x16f: Push((int) -1)
0x170: Push((int) 42261)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 33448)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0xb9

0x17a: Pop(1)
0x17b: Push((int) 532048)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 532049)
0x181: Push((int) 24055)
0x182: Push((int) 33449)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 24055)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Doubt"
0x18b: Call2 0xb9

0x18c: Pop(1)
0x18d: Push((int) 522871)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 522875)
0x193: Push((int) -1)
0x194: Push((int) 24059)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 41986)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xb9

0x19e: Pop(1)
0x19f: Push((int) 540015)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 540016)
0x1a5: Push((int) 41988)
0x1a6: Push((int) 41987)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 41988)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Doubt"
0x1af: Call2 0xb9

0x1b0: Pop(1)
0x1b1: Push((int) 540017)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 540018)
0x1b7: Push((int) -1)
0x1b8: Push((int) 41989)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 33440)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0xb9

0x1c2: Pop(1)
0x1c3: Push((int) 532040)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 532041)
0x1c9: Push((int) 41997)
0x1ca: Push((int) 33441)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 41997)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Doubt"
0x1d3: Call2 0xb9

0x1d4: Pop(1)
0x1d5: Push((int) 540026)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 540027)
0x1db: Push((int) 33442)
0x1dc: Push((int) 41998)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 33442)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Doubt"
0x1e5: Call2 0xb9

0x1e6: Pop(1)
0x1e7: Push((int) 532042)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 532043)
0x1ed: Push((int) 33446)
0x1ee: Push((int) 33443)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 33446)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Doubt"
0x1f7: Call2 0xb9

0x1f8: Pop(1)
0x1f9: Push((int) 532046)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 532047)
0x1ff: Push((int) 24049)
0x200: Push((int) 33447)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Push((int) 540114)
0x204: Push((int) 42082)
0x205: Push((int) 42081)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 42082)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0xb9

0x20f: Pop(1)
0x210: Push((int) 540115)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 540116)
0x216: Push((int) 42084)
0x217: Push((int) 42083)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: Push((int) 42084)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Neutral"
0x220: Call2 0xb9

0x221: Pop(1)
0x222: Push((int) 540117)
0x223: @@ SetMessage(Stack[-1])
0x224: Pop(1)
0x225: @@ ClearReplies()
0x226: Pop(0)
0x227: Push((int) 540118)
0x228: Push((int) 24049)
0x229: Push((int) 42085)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 24049)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral"
0x232: Call2 0xb9

0x233: Pop(1)
0x234: Push((int) 522865)
0x235: @@ SetMessage(Stack[-1])
0x236: Pop(1)
0x237: @@ ClearReplies()
0x238: Pop(0)
0x239: Push((int) 522869)
0x23a: Push((int) -1)
0x23b: Push((int) 24053)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 24216)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral"
0x244: Call2 0xb9

0x245: Pop(1)
0x246: Push((int) 523023)
0x247: @@ SetMessage(Stack[-1])
0x248: Pop(1)
0x249: @@ ClearReplies()
0x24a: Pop(0)
0x24b: Push((int) 523024)
0x24c: Push((int) -1)
0x24d: Push((int) 24217)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x252: PushEmpty(bool)
0x253: Call2 0x4ae

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: @ lshStopAnimation()
0x257: Pop(0)
0x258: GOTO 0x25b

0x259: @ StopAnimation()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: GOTO 0xd0

0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: Call2 0x26a

0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: PushEmpty(int, object)
0x264: Stack[-1] = Stack[-3]
0x265: Push(-2, 1); TaskCall(0)
0x266: Call2 0x0

0x267: Pop(-2, 1); TaskReturn
0x268: Pop(2)
0x269: Return(); Pop(0)

0x26a: @ Hold()
0x26b: Pop(0)
0x26c: GOTO 0x26a

0x26d: Return(); Pop(0)

0x26e: PushEmpty(bool, bool)
0x26f: Push("cleanup")
0x270: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x272: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x273: @ IsLoaded(Stack[-1])
0x274: Pop(0)
0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Pop(0); Push((bool) Stack[-2] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(bool)
0x27a: Call2 0x29a

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object)
0x280: Call2 0x3b2

0x281: Pop(0)
0x282: @ RemoveActor(Stack[-1])
0x283: Pop(1)
0x284: GOTO 0x289

0x285: Push("restore")
0x286: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x289: Return(); Pop(2)

0x28a: PushEmpty(bool)
0x28b: Stack[-1] = (bool) 0
0x28c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(bool)
0x28f: Call2 0x29a

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: PushEmpty(object)
0x295: Call2 0x3b2

0x296: Pop(0)
0x297: @ RemoveActor(Stack[-1])
0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: Stack[-1] = (bool) 1
0x29b: Return(); Pop(0)

0x29c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29d: @@ GetPosition(Stack[-8])
0x29e: Pop(0)
0x29f: @@ GetEyesHeight(Stack[-9])
0x2a0: Pop(0)
0x2a1: Push(CvectorIndex(Stack[-8], 1))
0x2a2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a4: @ GetPosition(Stack[-7])
0x2a5: Pop(0)
0x2a6: @ GetEyesHeight(Stack[-9])
0x2a7: Pop(0)
0x2a8: Push(CvectorIndex(Stack[-7], 1))
0x2a9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2aa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ab: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ac: Push(CvectorIndex(Stack[-6], 1))
0x2ad: Stack[-1] = (int) 0
0x2ae: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2af: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b0: Pop(1); Push(Sqrt(Stack[-1]))
0x2b1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b2: Stack[-5] = -Stack[-6]; Pop(0);
0x2b3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b4: PushEmpty(cvector, cvector)
0x2b5: Push(CVector(0.0, 1.0, 0.0))
0x2b6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b7: Call2 0x3b8

0x2b8: Pop(1)
0x2b9: Push((int) 25)
0x2ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bc: Push(CVector(0.0, 10.0, 0.0))
0x2bd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2be: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bf: @ IsOverrideActive(Stack[-2])
0x2c0: Pop(0)
0x2c1: Push(Stack[-2])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-21] = (bool) 0
0x2c4: Return(); Pop(18)

0x2c5: @ StopWorld()
0x2c6: Pop(0)
0x2c7: Push((bool) 1)
0x2c8: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2c9: Pop(1)
0x2ca: Push(CvectorIndex(Stack[-4], 0))
0x2cb: Push(CvectorIndex(Stack[-5], 2))
0x2cc: @ Rotate(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x4ae

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2db

0x2d3: Push("head")
0x2d4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d5: Pop(1)
0x2d6: Push(Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d8: Push("head")
0x2d9: @ LookAsyncCamera(Stack[-1])
0x2da: Pop(1)
0x2db: @ CameraWaitForPlayFinish()
0x2dc: Pop(0)
0x2dd: @ ResumeWorld()
0x2de: Pop(0)
0x2df: Stack[-21] = (bool) 1
0x2e0: Return(); Pop(18)

0x2e1: PushEmpty(bool, bool)
0x2e2: Push((bool) 1)
0x2e3: @ CameraSwitchToNormal(Stack[-1])
0x2e4: Pop(1)
0x2e5: PushEmpty(bool)
0x2e6: Call2 0x4ae

0x2e7: Pop(0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x2f2

0x2ea: Push("head")
0x2eb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ec: Pop(1)
0x2ed: Push(Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ef: Push("head")
0x2f0: @ UnlookAsync(Stack[-1])
0x2f1: Pop(1)
0x2f2: Return(); Pop(2)

0x2f3: PushEmpty(int, int, int, int)
0x2f4: Push("voice_common")
0x2f5: @ GetVariable(Stack[-1], Stack[-3])
0x2f6: Pop(1)
0x2f7: Push(Stack[-2])
0x2f8: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x2f9: PushEmpty(bool, object)
0x2fa: Stack[-1] = Stack[-7]
0x2fb: Call2 0x32d

0x2fc: Pop(1)
0x2fd: Pop(1); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2ff: PushEmpty(bool, object)
0x300: Stack[-1] = Stack[-7]
0x301: Call2 0x352

0x302: Pop(1)
0x303: Pop(1); Push((bool) Stack[-1] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-6] = (bool) 0
0x306: Return(); Pop(4)

0x307: Push((int) 2)
0x308: @ irand(Stack[-2], Stack[-1])
0x309: Pop(1)
0x30a: Push(Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30c: Push("voice_common")
0x30d: Push((int) 1)
0x30e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x30f: Push((int) 3)
0x310: Pop(2); Push(Stack[-2] % Stack[-1]);
0x311: @ SetVariable(Stack[-2], Stack[-1])
0x312: Pop(2)
0x313: GOTO 0x318

0x314: Push("voice_common")
0x315: Push((int) 0)
0x316: @ SetVariable(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: GOTO 0x32b

0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[-7]
0x31b: Call2 0x352

0x31c: Pop(1)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31f: PushEmpty(bool, object)
0x320: Stack[-1] = Stack[-7]
0x321: Call2 0x32d

0x322: Pop(1)
0x323: Pop(1); Push((bool) Stack[-1] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-6] = (bool) 0
0x326: Return(); Pop(4)

0x327: Push("voice_common")
0x328: Push((int) 1)
0x329: @ SetVariable(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: Stack[-6] = (bool) 1
0x32c: Return(); Pop(4)

0x32d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x32e: Stack[-5] = "c"
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
0x34e: Call2 0x39c

0x34f: Stack[-14] = Stack[-2]
0x350: Pop(2)
0x351: Return(); Pop(10)

0x352: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x353: Push("d")
0x354: PushEmpty(int)
0x355: Call2 0x3d8

0x356: Pop(0)
0x357: Pop(2); Push(Stack[-2] + Stack[-1]);
0x358: Push("m")
0x359: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x35a: Stack[-4] = (int) 0
0x35b: Push((int) 1)
0x35c: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x35d: Push((int) 1)
0x35e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x35f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x360: @@ HasProperty(Stack[-1], Stack[-4])
0x361: Pop(1)
0x362: Pop(0); Push((bool) Stack[-3] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: GOTO 0x368

0x365: Push((int) 1)
0x366: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x367: GOTO 0x35b

0x368: Pop(0); Push((bool) Stack[-4] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-12] = (bool) 0
0x36b: Return(); Pop(10)

0x36c: Stack[-2] = (int) 0
0x36d: Push((int) 1)
0x36e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: @ irand(Stack[-2], Stack[-4])
0x371: Pop(0)
0x372: Push((int) 1)
0x373: Pop(1); Push(Stack[-3] + Stack[-1]);
0x374: Pop(1); Push(Stack[-6] + Stack[-1]);
0x375: @@ GetProperty(Stack[-1], Stack[-2])
0x376: Pop(1)
0x377: PushEmpty(bool, string)
0x378: Stack[-1] = Stack[-3]
0x379: Call2 0x39c

0x37a: Stack[-14] = Stack[-2]
0x37b: Pop(2)
0x37c: Return(); Pop(10)

0x37d: PushEmpty(bool, float, float, bool, float, float)
0x37e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x37f: Pop(0)
0x380: Push(Stack[-3])
0x381: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x382: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x383: Pop(0)
0x384: Push((bool) 0)
0x385: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(1)
0x387: GOTO 0x38c

0x388: Push("Can't find lsh animation : ")
0x389: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38a: @ Trace(Stack[-1])
0x38b: Pop(1)
0x38c: Return(); Pop(6)

0x38d: PushEmpty(bool, float, float, bool, float, float)
0x38e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x38f: Pop(0)
0x390: Push(Stack[-3])
0x391: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x392: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x393: Pop(0)
0x394: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x395: Pop(0)
0x396: GOTO 0x39b

0x397: Push("Can't find lsh animation : ")
0x398: Pop(1); Push(Stack[-1] + Stack[-9]);
0x399: @ Trace(Stack[-1])
0x39a: Pop(1)
0x39b: Return(); Pop(6)

0x39c: PushEmpty(bool, bool)
0x39d: PushEmpty(bool)
0x39e: Call2 0x4ae

0x39f: Pop(0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3a2: Pop(0)
0x3a3: Push(Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a5: @ lshPlaySpeech(Stack[-3])
0x3a6: Pop(0)
0x3a7: Stack[-4] = (bool) 1
0x3a8: Return(); Pop(2)

0x3a9: Stack[-4] = (bool) 0
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty(bool)
0x3ac: Call2 0x4ae

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: @ lshStopSpeech()
0x3b0: Pop(0)
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty(object, object)
0x3b3: @ self(Stack[-1])
0x3b4: Pop(0)
0x3b5: Stack[-3] = Stack[-1]
0x3b6: Return(); Pop(2)

0x3b7: Stack[-1] = 0
0x3b8: PushEmpty(float, float)
0x3b9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3ba: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3bb: Push((float)0.0)
0x3bc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3bf: Return(); Pop(2)

0x3c0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3c1: Return(); Pop(2)

0x3c2: PushEmpty(int, int)
0x3c3: @ GetVariable(Stack[-3], Stack[-1])
0x3c4: Pop(0)
0x3c5: Stack[-4] = Stack[-1]
0x3c6: Return(); Pop(2)

0x3c7: PushEmpty(object, object)
0x3c8: @ FindActor(Stack[-1], Stack[-4])
0x3c9: Pop(0)
0x3ca: Pop(0); Push((bool) Stack[-1] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cc: Push("Door ")
0x3cd: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3ce: Push(" not found")
0x3cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d0: @ Trace(Stack[-1])
0x3d1: Pop(1)
0x3d2: GOTO 0x3d6

0x3d3: Push("locked")
0x3d4: @@ SetProperty(Stack[-1], Stack[-4])
0x3d5: Pop(1)
0x3d6: Return(); Pop(2)

0x3d7: Stack[-1] = 0
0x3d8: PushEmpty(float, float)
0x3d9: @ GetGameTime(Stack[-1])
0x3da: Pop(0)
0x3db: Push((int) 1)
0x3dc: PushEmpty(int)
0x3dd: Push((int) 24)
0x3de: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3df: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3e0: Return(); Pop(2)

0x3e1: PushEmpty()
0x3e2: Push("game_final")
0x3e3: Push((int) 1)
0x3e4: @ SetVariable(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty()
0x3e8: Push("game_final")
0x3e9: Push((int) 2)
0x3ea: @ SetVariable(Stack[-2], Stack[-1])
0x3eb: Pop(2)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: Push("game_final")
0x3ef: Push((int) 3)
0x3f0: @ SetVariable(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty()
0x3f4: PushEmpty(string, bool)
0x3f5: Stack[-2] = "isobor@door1"
0x3f6: Stack[-1] = (bool) 0
0x3f7: Call2 0x3c7

0x3f8: Pop(2)
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty()
0x3fb: PushEmpty()
0x3fc: Call2 0x45f

0x3fd: Pop(0)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty()
0x401: Call2 0x445

0x402: Pop(0)
0x403: Return(); Pop(0)

0x404: PushEmpty()
0x405: PushEmpty()
0x406: Call2 0x452

0x407: Pop(0)
0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: Push("game_final")
0x40b: Push((int) 4)
0x40c: @ SetVariable(Stack[-2], Stack[-1])
0x40d: Pop(2)
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: PushEmpty()
0x411: Call2 0x438

0x412: Pop(0)
0x413: Return(); Pop(0)

0x414: PushEmpty()
0x415: PushEmpty(int, string)
0x416: Stack[-1] = "game_final"
0x417: Call2 0x3c2

0x418: Pop(1)
0x419: Push((int) 0)
0x41a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-2] = (bool) 1
0x41d: Return(); Pop(0)

0x41e: Stack[-2] = (bool) 0
0x41f: Return(); Pop(0)

0x420: PushEmpty()
0x421: PushEmpty(int, string)
0x422: Stack[-1] = "b12q01DankoInSobor"
0x423: Call2 0x3c2

0x424: Pop(1)
0x425: Push((int) 0)
0x426: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x428: Stack[-2] = (bool) 1
0x429: Return(); Pop(0)

0x42a: Stack[-2] = (bool) 0
0x42b: Return(); Pop(0)

0x42c: PushEmpty()
0x42d: PushEmpty(int, string)
0x42e: Stack[-1] = "b12q01KlaraInSobor"
0x42f: Call2 0x3c2

0x430: Pop(1)
0x431: Push((int) 0)
0x432: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-2] = (bool) 1
0x435: Return(); Pop(0)

0x436: Stack[-2] = (bool) 0
0x437: Return(); Pop(0)

0x438: PushEmpty(object, object)
0x439: Push((int) 772)
0x43a: Push((int) 1)
0x43b: Push((int) 540273)
0x43c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: PushEmpty(bool, object, int)
0x43f: Stack[-2] = Stack[-4]
0x440: Stack[-1] = (int) 613
0x441: Call2 0x479

0x442: Pop(3)
0x443: Return(); Pop(2)

0x444: Stack[-1] = 0
0x445: PushEmpty(object, object)
0x446: Push((int) 618)
0x447: Push((int) 1)
0x448: Push((int) 532007)
0x449: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: PushEmpty(bool, object, int)
0x44c: Stack[-2] = Stack[-4]
0x44d: Stack[-1] = (int) 613
0x44e: Call2 0x479

0x44f: Pop(3)
0x450: Return(); Pop(2)

0x451: Stack[-1] = 0
0x452: PushEmpty(object, object)
0x453: Push((int) 616)
0x454: Push((int) 1)
0x455: Push((int) 532005)
0x456: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: PushEmpty(bool, object, int)
0x459: Stack[-2] = Stack[-4]
0x45a: Stack[-1] = (int) 613
0x45b: Call2 0x479

0x45c: Pop(3)
0x45d: Return(); Pop(2)

0x45e: Stack[-1] = 0
0x45f: PushEmpty(object, object)
0x460: Push((int) 617)
0x461: Push((int) 1)
0x462: Push((int) 532006)
0x463: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: PushEmpty(bool, object, int)
0x466: Stack[-2] = Stack[-4]
0x467: Stack[-1] = (int) 613
0x468: Call2 0x479

0x469: Pop(3)
0x46a: Return(); Pop(2)

0x46b: Stack[-1] = 0
0x46c: PushEmpty(object, object)
0x46d: @ GetDiaryRoot(Stack[-1])
0x46e: Pop(0)
0x46f: Pop(0); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x471: Push("Can't retrieve diary root")
0x472: @ Trace(Stack[-1])
0x473: Pop(1)
0x474: Stack[-3] = (bool) 0
0x475: Return(); Pop(2)

0x476: Stack[-3] = Stack[-1]
0x477: Return(); Pop(2)

0x478: Stack[-1] = 0
0x479: PushEmpty(object, object, int, object, object, int)
0x47a: PushEmpty(object)
0x47b: Call2 0x46c

0x47c: Stack[-4] = Stack[-1]
0x47d: Pop(1)
0x47e: @@ Find(Stack[-7], Stack[-2])
0x47f: Pop(0)
0x480: Pop(0); Push((bool) Stack[-2] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x482: Push("Can't find diary parent with id: ")
0x483: Pop(1); Push(Stack[-1] + Stack[-8]);
0x484: @ Trace(Stack[-1])
0x485: Pop(1)
0x486: Stack[-9] = (bool) 0
0x487: Return(); Pop(6)

0x488: @@ AddChild(Stack[-8])
0x489: Pop(0)
0x48a: Push((int) 7)
0x48b: @ SendWorldWndMessage(Stack[-1])
0x48c: Pop(1)
0x48d: @@ GetCategory(Stack[-1])
0x48e: Pop(0)
0x48f: @ SetDiarySection(Stack[-1])
0x490: Pop(0)
0x491: Stack[-9] = (bool) 0
0x492: Return(); Pop(6)

0x493: Stack[-2] = 0
0x494: Stack[-3] = 0
0x495: PushEmpty(int, int)
0x496: Push("branch")
0x497: @ GetVariable(Stack[-1], Stack[-2])
0x498: Pop(1)
0x499: Push((int) 0)
0x49a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49c: Stack[-3] = (int) 1
0x49d: Return(); Pop(2)

0x49e: GOTO 0x4a4

0x49f: Push((int) 1)
0x4a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-3] = (int) 2
0x4a3: Return(); Pop(2)

0x4a4: Stack[-3] = (int) 3
0x4a5: Return(); Pop(2)

0x4a6: Stack[-1] = (int) 515532
0x4a7: Return(); Pop(0)

0x4a8: Stack[-1] = (int) 514840
0x4a9: Return(); Pop(0)

0x4aa: Stack[-1] = "ui/NPC_Block.png"
0x4ab: Return(); Pop(0)

0x4ac: Stack[-1] = "ui/NPC_Block_b.png"
0x4ad: Return(); Pop(0)

0x4ae: Stack[-1] = (bool) 1
0x4af: Return(); Pop(0)

