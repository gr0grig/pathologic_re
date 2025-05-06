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
	Declaim
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Shyness
	Gasp
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	k4q02
	k4q02MarkGotoTheater
	pt_map_theater
	AddMark
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Mark.png
	ui/NPC_Mark_b.png

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
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1f1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1e9 Vars = (object)
		EVENT_26 Op = 0x1f5 Vars = (string)
		EVENT_6 Op = 0x211 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x223

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x40a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x408

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x40c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x40e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3f7

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
0x31: Call2 0x339

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x27a

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
0x48: Call2 0x268

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x383

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Declaim"
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 525762)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 529224)
0x66: Push((int) 43014)
0x67: Push((int) 30677)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 529229)
0x6b: Push((int) 43754)
0x6c: Push((int) 30682)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 525766)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 525767)
0x7a: Push((int) -1)
0x7b: Push((int) 27079)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 529227)
0x7f: Push((int) -1)
0x80: Push((int) 30680)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x410

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x304

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x410

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x314

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x332

0xbf: Pop(0)
0xc0: Push((int) 27077)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x35c

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x373

0xcc: Pop(2)
0xcd: Push((int) 43034)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x35c

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x373

0xd9: Pop(2)
0xda: Push((int) 27074)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x383

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Declaim"
0xe4: Call2 0xa4

0xe5: Pop(1)
0xe6: Push((int) 525762)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 529224)
0xec: Push((int) 43014)
0xed: Push((int) 30677)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 529229)
0xf1: Push((int) 43754)
0xf2: Push((int) 30682)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa4

0xf9: Pop(1)
0xfa: Push((int) 525766)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 525767)
0x100: Push((int) -1)
0x101: Push((int) 27079)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 529227)
0x105: Push((int) -1)
0x106: Push((int) 30680)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 43754)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Declaim"
0x10f: Call2 0xa4

0x110: Pop(1)
0x111: Push((int) 541585)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 541586)
0x117: Push((int) 30678)
0x118: Push((int) 43755)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 541587)
0x11c: Push((int) 43016)
0x11d: Push((int) 43757)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 43014)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Declaim"
0x126: Call2 0xa4

0x127: Pop(1)
0x128: Push((int) 540934)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 540935)
0x12e: Push((int) 43016)
0x12f: Push((int) 43015)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 540938)
0x133: Push((int) 43019)
0x134: Push((int) 43018)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 43019)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Shyness"
0x13d: Call2 0xa4

0x13e: Pop(1)
0x13f: Push((int) 540939)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 540940)
0x145: Push((int) 43016)
0x146: Push((int) 43020)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 43016)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Gasp"
0x14f: Call2 0xa4

0x150: Pop(1)
0x151: Push((int) 540936)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 540937)
0x157: Push((int) 43022)
0x158: Push((int) 43017)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 540943)
0x15c: Push((int) 43022)
0x15d: Push((int) 43024)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 43022)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call2 0xa4

0x167: Pop(1)
0x168: Push((int) 540941)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 540942)
0x16e: Push((int) 30678)
0x16f: Push((int) 43023)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 540944)
0x173: Push((int) 43027)
0x174: Push((int) 43026)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 43027)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xa4

0x17e: Pop(1)
0x17f: Push((int) 540945)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 540946)
0x185: Push((int) 43029)
0x186: Push((int) 43028)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 43029)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral"
0x18f: Call2 0xa4

0x190: Pop(1)
0x191: Push((int) 540947)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 540948)
0x197: Push((int) 30678)
0x198: Push((int) 43030)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 30678)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xa4

0x1a2: Pop(1)
0x1a3: Push((int) 529225)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 529226)
0x1a9: Push((int) 30681)
0x1aa: Push((int) 30679)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 540949)
0x1ae: Push((int) 30681)
0x1af: Push((int) 43032)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 30681)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Shyness"
0x1b8: Call2 0xa4

0x1b9: Pop(1)
0x1ba: Push((int) 529228)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 525763)
0x1c0: Push((int) 27076)
0x1c1: Push((int) 27075)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 27076)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Shyness"
0x1ca: Call2 0xa4

0x1cb: Pop(1)
0x1cc: Push((int) 525764)
0x1cd: @@ SetMessage(Stack[-1])
0x1ce: Pop(1)
0x1cf: @@ ClearReplies()
0x1d0: Pop(0)
0x1d1: Push((int) 525765)
0x1d2: Push((int) -1)
0x1d3: Push((int) 27077)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Push((int) 540950)
0x1d7: Push((int) -1)
0x1d8: Push((int) 43034)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1dd: PushEmpty(bool)
0x1de: Call2 0x410

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e1: @ lshStopAnimation()
0x1e2: Pop(0)
0x1e3: GOTO 0x1e6

0x1e4: @ StopAnimation()
0x1e5: Pop(0)
0x1e6: Return(); Pop(0)

0x1e7: GOTO 0xbb

0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: PushEmpty(int, object)
0x1eb: Stack[-1] = Stack[-3]
0x1ec: Push(-2, 1); TaskCall(0)
0x1ed: Call2 0x0

0x1ee: Pop(-2, 1); TaskReturn
0x1ef: Pop(2)
0x1f0: Return(); Pop(0)

0x1f1: @ Hold()
0x1f2: Pop(0)
0x1f3: GOTO 0x1f1

0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(bool, bool)
0x1f6: Push("cleanup")
0x1f7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1fa: @ IsLoaded(Stack[-1])
0x1fb: Pop(0)
0x1fc: PushEmpty(bool)
0x1fd: Stack[-1] = (bool) 0
0x1fe: Pop(0); Push((bool) Stack[-2] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(bool)
0x201: Call2 0x221

0x202: Pop(0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(object)
0x207: Call2 0x339

0x208: Pop(0)
0x209: @ RemoveActor(Stack[-1])
0x20a: Pop(1)
0x20b: GOTO 0x210

0x20c: Push("restore")
0x20d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x210: Return(); Pop(2)

0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: Push( Stack[0 + Tasks[-1].StackPointer] )
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: PushEmpty(bool)
0x216: Call2 0x221

0x217: Pop(0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Stack[-1] = (bool) 1
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: PushEmpty(object)
0x21c: Call2 0x339

0x21d: Pop(0)
0x21e: @ RemoveActor(Stack[-1])
0x21f: Pop(1)
0x220: Return(); Pop(0)

0x221: Stack[-1] = (bool) 1
0x222: Return(); Pop(0)

0x223: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x224: @@ GetPosition(Stack[-8])
0x225: Pop(0)
0x226: @@ GetEyesHeight(Stack[-9])
0x227: Pop(0)
0x228: Push(CvectorIndex(Stack[-8], 1))
0x229: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x22b: @ GetPosition(Stack[-7])
0x22c: Pop(0)
0x22d: @ GetEyesHeight(Stack[-9])
0x22e: Pop(0)
0x22f: Push(CvectorIndex(Stack[-7], 1))
0x230: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x231: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x232: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x233: Push(CvectorIndex(Stack[-6], 1))
0x234: Stack[-1] = (int) 0
0x235: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x236: Pop(0); Push(Stack[-6] | Stack[-6]);
0x237: Pop(1); Push(Sqrt(Stack[-1]))
0x238: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x239: Stack[-5] = -Stack[-6]; Pop(0);
0x23a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x23b: PushEmpty(cvector, cvector)
0x23c: Push(CVector(0.0, 1.0, 0.0))
0x23d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x23e: Call2 0x33f

0x23f: Pop(1)
0x240: Push((int) 25)
0x241: Pop(2); Push(Stack[-2] * Stack[-1]);
0x242: Pop(2); Push(Stack[-2] + Stack[-1]);
0x243: Push(CVector(0.0, 10.0, 0.0))
0x244: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x245: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x246: @ IsOverrideActive(Stack[-2])
0x247: Pop(0)
0x248: Push(Stack[-2])
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: Stack[-21] = (bool) 0
0x24b: Return(); Pop(18)

0x24c: @ StopWorld()
0x24d: Pop(0)
0x24e: Push((bool) 1)
0x24f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x250: Pop(1)
0x251: Push(CvectorIndex(Stack[-4], 0))
0x252: Push(CvectorIndex(Stack[-5], 2))
0x253: @ Rotate(Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: PushEmpty(bool)
0x256: Call2 0x410

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x262

0x25a: Push("head")
0x25b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25c: Pop(1)
0x25d: Push(Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25f: Push("head")
0x260: @ LookAsyncCamera(Stack[-1])
0x261: Pop(1)
0x262: @ CameraWaitForPlayFinish()
0x263: Pop(0)
0x264: @ ResumeWorld()
0x265: Pop(0)
0x266: Stack[-21] = (bool) 1
0x267: Return(); Pop(18)

0x268: PushEmpty(bool, bool)
0x269: Push((bool) 1)
0x26a: @ CameraSwitchToNormal(Stack[-1])
0x26b: Pop(1)
0x26c: PushEmpty(bool)
0x26d: Call2 0x410

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x279

0x271: Push("head")
0x272: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x273: Pop(1)
0x274: Push(Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x276: Push("head")
0x277: @ UnlookAsync(Stack[-1])
0x278: Pop(1)
0x279: Return(); Pop(2)

0x27a: PushEmpty(int, int, int, int)
0x27b: Push("voice_common")
0x27c: @ GetVariable(Stack[-1], Stack[-3])
0x27d: Pop(1)
0x27e: Push(Stack[-2])
0x27f: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[-7]
0x282: Call2 0x2b4

0x283: Pop(1)
0x284: Pop(1); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[-7]
0x288: Call2 0x2d9

0x289: Pop(1)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-6] = (bool) 0
0x28d: Return(); Pop(4)

0x28e: Push((int) 2)
0x28f: @ irand(Stack[-2], Stack[-1])
0x290: Pop(1)
0x291: Push(Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x293: Push("voice_common")
0x294: Push((int) 1)
0x295: Pop(1); Push(Stack[-4] + Stack[-1]);
0x296: Push((int) 3)
0x297: Pop(2); Push(Stack[-2] % Stack[-1]);
0x298: @ SetVariable(Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: GOTO 0x29f

0x29b: Push("voice_common")
0x29c: Push((int) 0)
0x29d: @ SetVariable(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: GOTO 0x2b2

0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[-7]
0x2a2: Call2 0x2d9

0x2a3: Pop(1)
0x2a4: Pop(1); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a6: PushEmpty(bool, object)
0x2a7: Stack[-1] = Stack[-7]
0x2a8: Call2 0x2b4

0x2a9: Pop(1)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-6] = (bool) 0
0x2ad: Return(); Pop(4)

0x2ae: Push("voice_common")
0x2af: Push((int) 1)
0x2b0: @ SetVariable(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Stack[-6] = (bool) 1
0x2b3: Return(); Pop(4)

0x2b4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2b5: Stack[-5] = "c"
0x2b6: Stack[-4] = (int) 0
0x2b7: Push((int) 1)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b9: Push((int) 1)
0x2ba: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2bb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2bc: @@ HasProperty(Stack[-1], Stack[-4])
0x2bd: Pop(1)
0x2be: Pop(0); Push((bool) Stack[-3] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c4

0x2c1: Push((int) 1)
0x2c2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2c3: GOTO 0x2b7

0x2c4: Pop(0); Push((bool) Stack[-4] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-12] = (bool) 0
0x2c7: Return(); Pop(10)

0x2c8: Stack[-2] = (int) 0
0x2c9: Push((int) 1)
0x2ca: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: @ irand(Stack[-2], Stack[-4])
0x2cd: Pop(0)
0x2ce: Push((int) 1)
0x2cf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d1: @@ GetProperty(Stack[-1], Stack[-2])
0x2d2: Pop(1)
0x2d3: PushEmpty(bool, string)
0x2d4: Stack[-1] = Stack[-3]
0x2d5: Call2 0x323

0x2d6: Stack[-14] = Stack[-2]
0x2d7: Pop(2)
0x2d8: Return(); Pop(10)

0x2d9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2da: Push("d")
0x2db: PushEmpty(int)
0x2dc: Call2 0x353

0x2dd: Pop(0)
0x2de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2df: Push("m")
0x2e0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2e1: Stack[-4] = (int) 0
0x2e2: Push((int) 1)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e4: Push((int) 1)
0x2e5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e7: @@ HasProperty(Stack[-1], Stack[-4])
0x2e8: Pop(1)
0x2e9: Pop(0); Push((bool) Stack[-3] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: GOTO 0x2ef

0x2ec: Push((int) 1)
0x2ed: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ee: GOTO 0x2e2

0x2ef: Pop(0); Push((bool) Stack[-4] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-12] = (bool) 0
0x2f2: Return(); Pop(10)

0x2f3: Stack[-2] = (int) 0
0x2f4: Push((int) 1)
0x2f5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: @ irand(Stack[-2], Stack[-4])
0x2f8: Pop(0)
0x2f9: Push((int) 1)
0x2fa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2fc: @@ GetProperty(Stack[-1], Stack[-2])
0x2fd: Pop(1)
0x2fe: PushEmpty(bool, string)
0x2ff: Stack[-1] = Stack[-3]
0x300: Call2 0x323

0x301: Stack[-14] = Stack[-2]
0x302: Pop(2)
0x303: Return(); Pop(10)

0x304: PushEmpty(bool, float, float, bool, float, float)
0x305: @ lshHasAnimation(Stack[-3], Stack[-7])
0x306: Pop(0)
0x307: Push(Stack[-3])
0x308: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x309: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x30a: Pop(0)
0x30b: Push((bool) 0)
0x30c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(1)
0x30e: GOTO 0x313

0x30f: Push("Can't find lsh animation : ")
0x310: Pop(1); Push(Stack[-1] + Stack[-8]);
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: Return(); Pop(6)

0x314: PushEmpty(bool, float, float, bool, float, float)
0x315: @ lshHasAnimation(Stack[-3], Stack[-8])
0x316: Pop(0)
0x317: Push(Stack[-3])
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x31a: Pop(0)
0x31b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x31c: Pop(0)
0x31d: GOTO 0x322

0x31e: Push("Can't find lsh animation : ")
0x31f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x320: @ Trace(Stack[-1])
0x321: Pop(1)
0x322: Return(); Pop(6)

0x323: PushEmpty(bool, bool)
0x324: PushEmpty(bool)
0x325: Call2 0x410

0x326: Pop(0)
0x327: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x328: @ lshHasSpeech(Stack[-1], Stack[-3])
0x329: Pop(0)
0x32a: Push(Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32c: @ lshPlaySpeech(Stack[-3])
0x32d: Pop(0)
0x32e: Stack[-4] = (bool) 1
0x32f: Return(); Pop(2)

0x330: Stack[-4] = (bool) 0
0x331: Return(); Pop(2)

0x332: PushEmpty(bool)
0x333: Call2 0x410

0x334: Pop(0)
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: @ lshStopSpeech()
0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: PushEmpty(object, object)
0x33a: @ self(Stack[-1])
0x33b: Pop(0)
0x33c: Stack[-3] = Stack[-1]
0x33d: Return(); Pop(2)

0x33e: Stack[-1] = 0
0x33f: PushEmpty(float, float)
0x340: Pop(0); Push(Stack[-3] | Stack[-3]);
0x341: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x342: Push((float)0.0)
0x343: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x346: Return(); Pop(2)

0x347: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x348: Return(); Pop(2)

0x349: PushEmpty(int, int)
0x34a: @ GetVariable(Stack[-3], Stack[-1])
0x34b: Pop(0)
0x34c: Stack[-4] = Stack[-1]
0x34d: Return(); Pop(2)

0x34e: PushEmpty(float, float)
0x34f: @ GetGameTime(Stack[-1])
0x350: Pop(0)
0x351: Stack[-3] = Stack[-1]
0x352: Return(); Pop(2)

0x353: PushEmpty(float, float)
0x354: @ GetGameTime(Stack[-1])
0x355: Pop(0)
0x356: Push((int) 1)
0x357: PushEmpty(int)
0x358: Push((int) 24)
0x359: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x35a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x35b: Return(); Pop(2)

0x35c: PushEmpty(object, object)
0x35d: Push("k4q02")
0x35e: Push((int) 2)
0x35f: @ SetVariable(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: PushEmpty(object)
0x362: Call2 0x3c5

0x363: Stack[-2] = Stack[-1]
0x364: Pop(1)
0x365: Push("k4q02MarkGotoTheater")
0x366: Push("pt_map_theater")
0x367: Push((int) 0)
0x368: Push((int) 539602)
0x369: PushEmpty(float)
0x36a: Call2 0x34e

0x36b: Pop(0)
0x36c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(5)
0x36e: PushEmpty()
0x36f: Call2 0x38f

0x370: Pop(0)
0x371: Return(); Pop(2)

0x372: Stack[-1] = 0
0x373: PushEmpty()
0x374: PushEmpty(object, string, float)
0x375: PushEmpty(object)
0x376: Call2 0x3c5

0x377: Stack[-4] = Stack[-1]
0x378: Pop(1)
0x379: Stack[-2] = "pt_map_theater"
0x37a: Stack[-1] = (int) 2
0x37b: Call2 0x3d6

0x37c: Pop(3)
0x37d: PushEmpty(object)
0x37e: Call2 0x3c5

0x37f: Pop(0)
0x380: @@ ShowMap(Stack[-1])
0x381: Pop(1)
0x382: Return(); Pop(0)

0x383: PushEmpty()
0x384: PushEmpty(int, string)
0x385: Stack[-1] = "k4q02"
0x386: Call2 0x349

0x387: Pop(1)
0x388: Push((int) 1)
0x389: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38b: Stack[-2] = (bool) 1
0x38c: Return(); Pop(0)

0x38d: Stack[-2] = (bool) 0
0x38e: Return(); Pop(0)

0x38f: PushEmpty(object, object)
0x390: Push((int) 381)
0x391: Push((int) 2)
0x392: Push((int) 525787)
0x393: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: PushEmpty(bool, object, int)
0x396: Stack[-2] = Stack[-4]
0x397: Stack[-1] = (int) 378
0x398: Call2 0x3a9

0x399: Pop(3)
0x39a: Return(); Pop(2)

0x39b: Stack[-1] = 0
0x39c: PushEmpty(object, object)
0x39d: @ GetDiaryRoot(Stack[-1])
0x39e: Pop(0)
0x39f: Pop(0); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a1: Push("Can't retrieve diary root")
0x3a2: @ Trace(Stack[-1])
0x3a3: Pop(1)
0x3a4: Stack[-3] = (bool) 0
0x3a5: Return(); Pop(2)

0x3a6: Stack[-3] = Stack[-1]
0x3a7: Return(); Pop(2)

0x3a8: Stack[-1] = 0
0x3a9: PushEmpty(object, object, int, object, object, int)
0x3aa: PushEmpty(object)
0x3ab: Call2 0x39c

0x3ac: Stack[-4] = Stack[-1]
0x3ad: Pop(1)
0x3ae: @@ Find(Stack[-7], Stack[-2])
0x3af: Pop(0)
0x3b0: Pop(0); Push((bool) Stack[-2] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b2: Push("Can't find diary parent with id: ")
0x3b3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b4: @ Trace(Stack[-1])
0x3b5: Pop(1)
0x3b6: Stack[-9] = (bool) 0
0x3b7: Return(); Pop(6)

0x3b8: @@ AddChild(Stack[-8])
0x3b9: Pop(0)
0x3ba: Push((int) 7)
0x3bb: @ SendWorldWndMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ GetCategory(Stack[-1])
0x3be: Pop(0)
0x3bf: @ SetDiarySection(Stack[-1])
0x3c0: Pop(0)
0x3c1: Stack[-9] = (bool) 0
0x3c2: Return(); Pop(6)

0x3c3: Stack[-2] = 0
0x3c4: Stack[-3] = 0
0x3c5: PushEmpty(object, object, object, object)
0x3c6: @ GetMainOutdoorScene(Stack[-2])
0x3c7: Pop(0)
0x3c8: Pop(0); Push((bool) Stack[-2] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: Push("Can't find main outdoor scene")
0x3cb: @ Trace(Stack[-1])
0x3cc: Pop(1)
0x3cd: Stack[-1] = 0
0x3ce: Stack[-5] = Stack[-1]
0x3cf: Return(); Pop(4)

0x3d0: @@ GetMap(Stack[-1])
0x3d1: Pop(0)
0x3d2: Stack[-5] = Stack[-1]
0x3d3: Return(); Pop(4)

0x3d4: Stack[-1] = 0
0x3d5: Stack[-2] = 0
0x3d6: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3d7: @ GetMainOutdoorScene(Stack[-2])
0x3d8: Pop(0)
0x3d9: Pop(0); Push((bool) Stack[-2] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3db: Push("Can't find main outdoor scene")
0x3dc: @ Trace(Stack[-1])
0x3dd: Pop(1)
0x3de: Return(); Pop(8)

0x3df: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3e0: Pop(0)
0x3e1: Pop(0); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e3: Push("Warning: outdoor scene locator ")
0x3e4: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3e5: Push(" doesnt exist")
0x3e6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e7: @ Trace(Stack[-1])
0x3e8: Pop(1)
0x3e9: @@ GetMap(Stack[-11])
0x3ea: Pop(0)
0x3eb: Pop(0); Push((bool) Stack[-11] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ed: Push("Can't find map")
0x3ee: @ Trace(Stack[-1])
0x3ef: Pop(1)
0x3f0: Return(); Pop(8)

0x3f1: Push(CvectorIndex(Stack[-4], 0))
0x3f2: Push(CvectorIndex(Stack[-5], 2))
0x3f3: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x3f4: Pop(2)
0x3f5: Return(); Pop(8)

0x3f6: Stack[-2] = 0
0x3f7: PushEmpty(int, int)
0x3f8: Push("branch")
0x3f9: @ GetVariable(Stack[-1], Stack[-2])
0x3fa: Pop(1)
0x3fb: Push((int) 0)
0x3fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fe: Stack[-3] = (int) 1
0x3ff: Return(); Pop(2)

0x400: GOTO 0x406

0x401: Push((int) 1)
0x402: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-3] = (int) 2
0x405: Return(); Pop(2)

0x406: Stack[-3] = (int) 3
0x407: Return(); Pop(2)

0x408: Stack[-1] = (int) 515544
0x409: Return(); Pop(0)

0x40a: Stack[-1] = (int) 502869
0x40b: Return(); Pop(0)

0x40c: Stack[-1] = "ui/NPC_Mark.png"
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = "ui/NPC_Mark_b.png"
0x40f: Return(); Pop(0)

0x410: Stack[-1] = (bool) 1
0x411: Return(); Pop(0)

