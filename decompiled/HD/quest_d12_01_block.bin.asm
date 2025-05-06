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
	d12q01BurahInSobor
	d12q01KlaraInSobor
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

RunOp = 0x235
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x239 Vars = (object)
		EVENT_26 Op = 0x245 Vars = (string)
		EVENT_6 Op = 0x261 Vars = ()


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
0xe: Call2 0x47f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x47d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x481

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x483

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x46c

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
0x31: Call2 0x389

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2ca

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
0x48: Call2 0x2b8

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
0x59: Call2 0x3eb

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xb9

0x60: Pop(1)
0x61: Push((int) 535541)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: Push((int) 535542)
0x67: Push((int) 37226)
0x68: Push((int) 37225)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 540019)
0x6c: Push((int) 41991)
0x6d: Push((int) 41990)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3f7

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 535545)
0x76: Push((int) 42317)
0x77: Push((int) 37228)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x403

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 535559)
0x80: Push((int) 37243)
0x81: Push((int) 37242)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 540276)
0x85: Push((int) 42323)
0x86: Push((int) 42256)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x9b

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral"
0x8c: Call2 0xb9

0x8d: Pop(1)
0x8e: Push((int) 535564)
0x8f: @@ SetMessage(Stack[-1])
0x90: Pop(1)
0x91: @@ ClearReplies()
0x92: Pop(0)
0x93: Push((int) 535565)
0x94: Push((int) -1)
0x95: Push((int) 37248)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: GOTO 0x9b

0x99: Return(); Pop(0)

0x9a: GOTO 0x55

0x9b: PushEmpty(bool)
0x9c: Call2 0x485

0x9d: Pop(0)
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: @ lshWaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: PushEmpty(string)
0xa5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa6: Call2 0x354

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
0xbb: Call2 0x485

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
0xcb: Call2 0x364

0xcc: Pop(2)
0xcd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: Push((int) 1)
0xd1: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0xd2: PushEmpty()
0xd3: Call2 0x382

0xd4: Pop(0)
0xd5: Push((int) 37241)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x3be

0xdc: Pop(2)
0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3dc

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x3ca

0xe6: Pop(2)
0xe7: Push((int) 37236)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x3b8

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3e6

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x3ca

0xf8: Pop(2)
0xf9: Push((int) 37246)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3c4

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3e1

0x105: Pop(2)
0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x3ca

0x10a: Pop(2)
0x10b: Push((int) 42258)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x3d1

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x3ca

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3d7

0x11c: Pop(2)
0x11d: Push((int) 37224)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x3eb

0x123: Pop(1)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0xb9

0x129: Pop(1)
0x12a: Push((int) 535541)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 535542)
0x130: Push((int) 37226)
0x131: Push((int) 37225)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 540019)
0x135: Push((int) 41991)
0x136: Push((int) 41990)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x3f7

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 535545)
0x13f: Push((int) 42317)
0x140: Push((int) 37228)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x403

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 535559)
0x149: Push((int) 37243)
0x14a: Push((int) 37242)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 540276)
0x14e: Push((int) 42323)
0x14f: Push((int) 42256)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0xb9

0x156: Pop(1)
0x157: Push((int) 535564)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 535565)
0x15d: Push((int) -1)
0x15e: Push((int) 37248)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 42323)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0xb9

0x168: Pop(1)
0x169: Push((int) 540340)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 540278)
0x16f: Push((int) -1)
0x170: Push((int) 42258)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 37243)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0xb9

0x17a: Pop(1)
0x17b: Push((int) 535560)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 535561)
0x181: Push((int) 37245)
0x182: Push((int) 37244)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 37245)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Doubt"
0x18b: Call2 0xb9

0x18c: Pop(1)
0x18d: Push((int) 535562)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 535563)
0x193: Push((int) -1)
0x194: Push((int) 37246)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 42317)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xb9

0x19e: Pop(1)
0x19f: Push((int) 540334)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 540336)
0x1a5: Push((int) 42320)
0x1a6: Push((int) 42319)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 42320)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Doubt"
0x1af: Call2 0xb9

0x1b0: Pop(1)
0x1b1: Push((int) 540337)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 535553)
0x1b7: Push((int) -1)
0x1b8: Push((int) 37236)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 41991)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0xb9

0x1c2: Pop(1)
0x1c3: Push((int) 540020)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 540021)
0x1c9: Push((int) 41993)
0x1ca: Push((int) 41992)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 41993)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral"
0x1d3: Call2 0xb9

0x1d4: Pop(1)
0x1d5: Push((int) 540022)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 540023)
0x1db: Push((int) 41995)
0x1dc: Push((int) 41994)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 41995)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral"
0x1e5: Call2 0xb9

0x1e6: Pop(1)
0x1e7: Push((int) 540024)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 540025)
0x1ed: Push((int) 37238)
0x1ee: Push((int) 41996)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 37238)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral"
0x1f7: Call2 0xb9

0x1f8: Pop(1)
0x1f9: Push((int) 535555)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 535556)
0x1ff: Push((int) 37240)
0x200: Push((int) 37239)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 37240)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Neutral"
0x209: Call2 0xb9

0x20a: Pop(1)
0x20b: Push((int) 535557)
0x20c: @@ SetMessage(Stack[-1])
0x20d: Pop(1)
0x20e: @@ ClearReplies()
0x20f: Pop(0)
0x210: Push((int) 535558)
0x211: Push((int) -1)
0x212: Push((int) 37241)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 37226)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral"
0x21b: Call2 0xb9

0x21c: Pop(1)
0x21d: Push((int) 535543)
0x21e: @@ SetMessage(Stack[-1])
0x21f: Pop(1)
0x220: @@ ClearReplies()
0x221: Pop(0)
0x222: Push((int) 535544)
0x223: Push((int) -1)
0x224: Push((int) 37227)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x229: PushEmpty(bool)
0x22a: Call2 0x485

0x22b: Pop(0)
0x22c: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22d: @ lshStopAnimation()
0x22e: Pop(0)
0x22f: GOTO 0x232

0x230: @ StopAnimation()
0x231: Pop(0)
0x232: Return(); Pop(0)

0x233: GOTO 0xd0

0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: Call2 0x241

0x237: Pop(0)
0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: PushEmpty(int, object)
0x23b: Stack[-1] = Stack[-3]
0x23c: Push(-2, 1); TaskCall(0)
0x23d: Call2 0x0

0x23e: Pop(-2, 1); TaskReturn
0x23f: Pop(2)
0x240: Return(); Pop(0)

0x241: @ Hold()
0x242: Pop(0)
0x243: GOTO 0x241

0x244: Return(); Pop(0)

0x245: PushEmpty(bool, bool)
0x246: Push("cleanup")
0x247: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x249: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24a: @ IsLoaded(Stack[-1])
0x24b: Pop(0)
0x24c: PushEmpty(bool)
0x24d: Stack[-1] = (bool) 0
0x24e: Pop(0); Push((bool) Stack[-2] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x271

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x256: PushEmpty(object)
0x257: Call2 0x389

0x258: Pop(0)
0x259: @ RemoveActor(Stack[-1])
0x25a: Pop(1)
0x25b: GOTO 0x260

0x25c: Push("restore")
0x25d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x260: Return(); Pop(2)

0x261: PushEmpty(bool)
0x262: Stack[-1] = (bool) 0
0x263: Push( Stack[0 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x271

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: PushEmpty(object)
0x26c: Call2 0x389

0x26d: Pop(0)
0x26e: @ RemoveActor(Stack[-1])
0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: Stack[-1] = (bool) 1
0x272: Return(); Pop(0)

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
0x28e: Call2 0x38f

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
0x29e: Push((bool) 1)
0x29f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2a0: Pop(1)
0x2a1: Push(CvectorIndex(Stack[-4], 0))
0x2a2: Push(CvectorIndex(Stack[-5], 2))
0x2a3: @ Rotate(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x485

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2b2

0x2aa: Push("head")
0x2ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ac: Pop(1)
0x2ad: Push(Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: Push("head")
0x2b0: @ LookAsyncCamera(Stack[-1])
0x2b1: Pop(1)
0x2b2: @ CameraWaitForPlayFinish()
0x2b3: Pop(0)
0x2b4: @ ResumeWorld()
0x2b5: Pop(0)
0x2b6: Stack[-21] = (bool) 1
0x2b7: Return(); Pop(18)

0x2b8: PushEmpty(bool, bool)
0x2b9: Push((bool) 1)
0x2ba: @ CameraSwitchToNormal(Stack[-1])
0x2bb: Pop(1)
0x2bc: PushEmpty(bool)
0x2bd: Call2 0x485

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c9

0x2c1: Push("head")
0x2c2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c3: Pop(1)
0x2c4: Push(Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c6: Push("head")
0x2c7: @ UnlookAsync(Stack[-1])
0x2c8: Pop(1)
0x2c9: Return(); Pop(2)

0x2ca: PushEmpty(int, int, int, int)
0x2cb: Push("voice_common")
0x2cc: @ GetVariable(Stack[-1], Stack[-3])
0x2cd: Pop(1)
0x2ce: Push(Stack[-2])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[-7]
0x2d2: Call2 0x304

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[-7]
0x2d8: Call2 0x329

0x2d9: Pop(1)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-6] = (bool) 0
0x2dd: Return(); Pop(4)

0x2de: Push((int) 2)
0x2df: @ irand(Stack[-2], Stack[-1])
0x2e0: Pop(1)
0x2e1: Push(Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e3: Push("voice_common")
0x2e4: Push((int) 1)
0x2e5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e6: Push((int) 3)
0x2e7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e8: @ SetVariable(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: GOTO 0x2ef

0x2eb: Push("voice_common")
0x2ec: Push((int) 0)
0x2ed: @ SetVariable(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: GOTO 0x302

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[-7]
0x2f2: Call2 0x329

0x2f3: Pop(1)
0x2f4: Pop(1); Push((bool) Stack[-1] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[-7]
0x2f8: Call2 0x304

0x2f9: Pop(1)
0x2fa: Pop(1); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-6] = (bool) 0
0x2fd: Return(); Pop(4)

0x2fe: Push("voice_common")
0x2ff: Push((int) 1)
0x300: @ SetVariable(Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: Stack[-6] = (bool) 1
0x303: Return(); Pop(4)

0x304: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x305: Stack[-5] = "c"
0x306: Stack[-4] = (int) 0
0x307: Push((int) 1)
0x308: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x309: Push((int) 1)
0x30a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30c: @@ HasProperty(Stack[-1], Stack[-4])
0x30d: Pop(1)
0x30e: Pop(0); Push((bool) Stack[-3] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x314

0x311: Push((int) 1)
0x312: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x313: GOTO 0x307

0x314: Pop(0); Push((bool) Stack[-4] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-12] = (bool) 0
0x317: Return(); Pop(10)

0x318: Stack[-2] = (int) 0
0x319: Push((int) 1)
0x31a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: @ irand(Stack[-2], Stack[-4])
0x31d: Pop(0)
0x31e: Push((int) 1)
0x31f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x320: Pop(1); Push(Stack[-6] + Stack[-1]);
0x321: @@ GetProperty(Stack[-1], Stack[-2])
0x322: Pop(1)
0x323: PushEmpty(bool, string)
0x324: Stack[-1] = Stack[-3]
0x325: Call2 0x373

0x326: Stack[-14] = Stack[-2]
0x327: Pop(2)
0x328: Return(); Pop(10)

0x329: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x32a: Push("d")
0x32b: PushEmpty(int)
0x32c: Call2 0x3af

0x32d: Pop(0)
0x32e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32f: Push("m")
0x330: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x331: Stack[-4] = (int) 0
0x332: Push((int) 1)
0x333: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x334: Push((int) 1)
0x335: Pop(1); Push(Stack[-5] + Stack[-1]);
0x336: Pop(1); Push(Stack[-6] + Stack[-1]);
0x337: @@ HasProperty(Stack[-1], Stack[-4])
0x338: Pop(1)
0x339: Pop(0); Push((bool) Stack[-3] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x33f

0x33c: Push((int) 1)
0x33d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x33e: GOTO 0x332

0x33f: Pop(0); Push((bool) Stack[-4] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x341: Stack[-12] = (bool) 0
0x342: Return(); Pop(10)

0x343: Stack[-2] = (int) 0
0x344: Push((int) 1)
0x345: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: @ irand(Stack[-2], Stack[-4])
0x348: Pop(0)
0x349: Push((int) 1)
0x34a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x34b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34c: @@ GetProperty(Stack[-1], Stack[-2])
0x34d: Pop(1)
0x34e: PushEmpty(bool, string)
0x34f: Stack[-1] = Stack[-3]
0x350: Call2 0x373

0x351: Stack[-14] = Stack[-2]
0x352: Pop(2)
0x353: Return(); Pop(10)

0x354: PushEmpty(bool, float, float, bool, float, float)
0x355: @ lshHasAnimation(Stack[-3], Stack[-7])
0x356: Pop(0)
0x357: Push(Stack[-3])
0x358: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x359: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x35a: Pop(0)
0x35b: Push((bool) 0)
0x35c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(1)
0x35e: GOTO 0x363

0x35f: Push("Can't find lsh animation : ")
0x360: Pop(1); Push(Stack[-1] + Stack[-8]);
0x361: @ Trace(Stack[-1])
0x362: Pop(1)
0x363: Return(); Pop(6)

0x364: PushEmpty(bool, float, float, bool, float, float)
0x365: @ lshHasAnimation(Stack[-3], Stack[-8])
0x366: Pop(0)
0x367: Push(Stack[-3])
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x36a: Pop(0)
0x36b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x36c: Pop(0)
0x36d: GOTO 0x372

0x36e: Push("Can't find lsh animation : ")
0x36f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x370: @ Trace(Stack[-1])
0x371: Pop(1)
0x372: Return(); Pop(6)

0x373: PushEmpty(bool, bool)
0x374: PushEmpty(bool)
0x375: Call2 0x485

0x376: Pop(0)
0x377: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x378: @ lshHasSpeech(Stack[-1], Stack[-3])
0x379: Pop(0)
0x37a: Push(Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37c: @ lshPlaySpeech(Stack[-3])
0x37d: Pop(0)
0x37e: Stack[-4] = (bool) 1
0x37f: Return(); Pop(2)

0x380: Stack[-4] = (bool) 0
0x381: Return(); Pop(2)

0x382: PushEmpty(bool)
0x383: Call2 0x485

0x384: Pop(0)
0x385: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x386: @ lshStopSpeech()
0x387: Pop(0)
0x388: Return(); Pop(0)

0x389: PushEmpty(object, object)
0x38a: @ self(Stack[-1])
0x38b: Pop(0)
0x38c: Stack[-3] = Stack[-1]
0x38d: Return(); Pop(2)

0x38e: Stack[-1] = 0
0x38f: PushEmpty(float, float)
0x390: Pop(0); Push(Stack[-3] | Stack[-3]);
0x391: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x392: Push((float)0.0)
0x393: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x396: Return(); Pop(2)

0x397: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x398: Return(); Pop(2)

0x399: PushEmpty(int, int)
0x39a: @ GetVariable(Stack[-3], Stack[-1])
0x39b: Pop(0)
0x39c: Stack[-4] = Stack[-1]
0x39d: Return(); Pop(2)

0x39e: PushEmpty(object, object)
0x39f: @ FindActor(Stack[-1], Stack[-4])
0x3a0: Pop(0)
0x3a1: Pop(0); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a3: Push("Door ")
0x3a4: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3a5: Push(" not found")
0x3a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a7: @ Trace(Stack[-1])
0x3a8: Pop(1)
0x3a9: GOTO 0x3ad

0x3aa: Push("locked")
0x3ab: @@ SetProperty(Stack[-1], Stack[-4])
0x3ac: Pop(1)
0x3ad: Return(); Pop(2)

0x3ae: Stack[-1] = 0
0x3af: PushEmpty(float, float)
0x3b0: @ GetGameTime(Stack[-1])
0x3b1: Pop(0)
0x3b2: Push((int) 1)
0x3b3: PushEmpty(int)
0x3b4: Push((int) 24)
0x3b5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3b6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3b7: Return(); Pop(2)

0x3b8: PushEmpty()
0x3b9: Push("game_final")
0x3ba: Push((int) 1)
0x3bb: @ SetVariable(Stack[-2], Stack[-1])
0x3bc: Pop(2)
0x3bd: Return(); Pop(0)

0x3be: PushEmpty()
0x3bf: Push("game_final")
0x3c0: Push((int) 2)
0x3c1: @ SetVariable(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: Push("game_final")
0x3c6: Push((int) 3)
0x3c7: @ SetVariable(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty()
0x3cb: PushEmpty(string, bool)
0x3cc: Stack[-2] = "isobor@door1"
0x3cd: Stack[-1] = (bool) 0
0x3ce: Call2 0x39e

0x3cf: Pop(2)
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: Push("game_final")
0x3d3: Push((int) 4)
0x3d4: @ SetVariable(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: PushEmpty()
0x3d9: Call2 0x40f

0x3da: Pop(0)
0x3db: Return(); Pop(0)

0x3dc: PushEmpty()
0x3dd: PushEmpty()
0x3de: Call2 0x436

0x3df: Pop(0)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: PushEmpty()
0x3e3: Call2 0x41c

0x3e4: Pop(0)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: PushEmpty()
0x3e8: Call2 0x429

0x3e9: Pop(0)
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty(int, string)
0x3ed: Stack[-1] = "game_final"
0x3ee: Call2 0x399

0x3ef: Pop(1)
0x3f0: Push((int) 0)
0x3f1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-2] = (bool) 1
0x3f4: Return(); Pop(0)

0x3f5: Stack[-2] = (bool) 0
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(int, string)
0x3f9: Stack[-1] = "d12q01BurahInSobor"
0x3fa: Call2 0x399

0x3fb: Pop(1)
0x3fc: Push((int) 0)
0x3fd: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-2] = (bool) 1
0x400: Return(); Pop(0)

0x401: Stack[-2] = (bool) 0
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(int, string)
0x405: Stack[-1] = "d12q01KlaraInSobor"
0x406: Call2 0x399

0x407: Pop(1)
0x408: Push((int) 0)
0x409: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-2] = (bool) 1
0x40c: Return(); Pop(0)

0x40d: Stack[-2] = (bool) 0
0x40e: Return(); Pop(0)

0x40f: PushEmpty(object, object)
0x410: Push((int) 773)
0x411: Push((int) 1)
0x412: Push((int) 540274)
0x413: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: PushEmpty(bool, object, int)
0x416: Stack[-2] = Stack[-4]
0x417: Stack[-1] = (int) 699
0x418: Call2 0x450

0x419: Pop(3)
0x41a: Return(); Pop(2)

0x41b: Stack[-1] = 0
0x41c: PushEmpty(object, object)
0x41d: Push((int) 704)
0x41e: Push((int) 1)
0x41f: Push((int) 535687)
0x420: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: PushEmpty(bool, object, int)
0x423: Stack[-2] = Stack[-4]
0x424: Stack[-1] = (int) 699
0x425: Call2 0x450

0x426: Pop(3)
0x427: Return(); Pop(2)

0x428: Stack[-1] = 0
0x429: PushEmpty(object, object)
0x42a: Push((int) 702)
0x42b: Push((int) 1)
0x42c: Push((int) 535685)
0x42d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: PushEmpty(bool, object, int)
0x430: Stack[-2] = Stack[-4]
0x431: Stack[-1] = (int) 699
0x432: Call2 0x450

0x433: Pop(3)
0x434: Return(); Pop(2)

0x435: Stack[-1] = 0
0x436: PushEmpty(object, object)
0x437: Push((int) 703)
0x438: Push((int) 1)
0x439: Push((int) 535686)
0x43a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: PushEmpty(bool, object, int)
0x43d: Stack[-2] = Stack[-4]
0x43e: Stack[-1] = (int) 699
0x43f: Call2 0x450

0x440: Pop(3)
0x441: Return(); Pop(2)

0x442: Stack[-1] = 0
0x443: PushEmpty(object, object)
0x444: @ GetDiaryRoot(Stack[-1])
0x445: Pop(0)
0x446: Pop(0); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x448: Push("Can't retrieve diary root")
0x449: @ Trace(Stack[-1])
0x44a: Pop(1)
0x44b: Stack[-3] = (bool) 0
0x44c: Return(); Pop(2)

0x44d: Stack[-3] = Stack[-1]
0x44e: Return(); Pop(2)

0x44f: Stack[-1] = 0
0x450: PushEmpty(object, object, int, object, object, int)
0x451: PushEmpty(object)
0x452: Call2 0x443

0x453: Stack[-4] = Stack[-1]
0x454: Pop(1)
0x455: @@ Find(Stack[-7], Stack[-2])
0x456: Pop(0)
0x457: Pop(0); Push((bool) Stack[-2] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x459: Push("Can't find diary parent with id: ")
0x45a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45b: @ Trace(Stack[-1])
0x45c: Pop(1)
0x45d: Stack[-9] = (bool) 0
0x45e: Return(); Pop(6)

0x45f: @@ AddChild(Stack[-8])
0x460: Pop(0)
0x461: Push((int) 7)
0x462: @ SendWorldWndMessage(Stack[-1])
0x463: Pop(1)
0x464: @@ GetCategory(Stack[-1])
0x465: Pop(0)
0x466: @ SetDiarySection(Stack[-1])
0x467: Pop(0)
0x468: Stack[-9] = (bool) 0
0x469: Return(); Pop(6)

0x46a: Stack[-2] = 0
0x46b: Stack[-3] = 0
0x46c: PushEmpty(int, int)
0x46d: Push("branch")
0x46e: @ GetVariable(Stack[-1], Stack[-2])
0x46f: Pop(1)
0x470: Push((int) 0)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x473: Stack[-3] = (int) 1
0x474: Return(); Pop(2)

0x475: GOTO 0x47b

0x476: Push((int) 1)
0x477: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-3] = (int) 2
0x47a: Return(); Pop(2)

0x47b: Stack[-3] = (int) 3
0x47c: Return(); Pop(2)

0x47d: Stack[-1] = (int) 515532
0x47e: Return(); Pop(0)

0x47f: Stack[-1] = (int) 514840
0x480: Return(); Pop(0)

0x481: Stack[-1] = "ui/NPC_Block.png"
0x482: Return(); Pop(0)

0x483: Stack[-1] = "ui/NPC_Block_b.png"
0x484: Return(); Pop(0)

0x485: Stack[-1] = (bool) 1
0x486: Return(); Pop(0)

