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
	Strength
	Sympathy
	Fear
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
	oob12KapellaSobor1
	game_final
	branch
	ui/NPC_Kapella.png
	ui/NPC_Kapella_b.png

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
	GetGameTime (1 args)

RunOp = 0x1f8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1fc Vars = (object)
		EVENT_26 Op = 0x204 Vars = (string)
		EVENT_6 Op = 0x220 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x232

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x395

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x393

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x397

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x399

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x382

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
0x31: Call2 0x346

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x287

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
0x48: Call2 0x276

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
0x56: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x36a

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xa5

0x60: Pop(1)
0x61: Push((int) 522180)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x376

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 523135)
0x6c: Push((int) 24336)
0x6d: Push((int) 24335)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 522181)
0x71: Push((int) -1)
0x72: Push((int) 23348)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0x87

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call2 0xa5

0x79: Pop(1)
0x7a: Push((int) 523165)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: Push((int) 523166)
0x80: Push((int) -1)
0x81: Push((int) 24368)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x55

0x87: PushEmpty(bool)
0x88: Call2 0x39b

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x311

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all")
0x97: Push("idle")
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x39b

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-2] = Stack[-3]
0xb1: Push("")
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x321

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x33f

0xc0: Pop(0)
0xc1: Push((int) 24335)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x364

0xc8: Pop(2)
0xc9: Push((int) 23347)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x36a

0xcf: Pop(1)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call2 0xa5

0xd5: Pop(1)
0xd6: Push((int) 522180)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x376

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe0: Push((int) 523135)
0xe1: Push((int) 24336)
0xe2: Push((int) 24335)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 522181)
0xe6: Push((int) -1)
0xe7: Push((int) 23348)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call2 0xa5

0xee: Pop(1)
0xef: Push((int) 523165)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: Push((int) 523166)
0xf5: Push((int) -1)
0xf6: Push((int) 24368)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 24336)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Strength"
0xff: Call2 0xa5

0x100: Pop(1)
0x101: Push((int) 523136)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 523137)
0x107: Push((int) 24338)
0x108: Push((int) 24337)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Push((int) 540123)
0x10c: Push((int) 42093)
0x10d: Push((int) 42092)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: Push((int) 42093)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Strength"
0x116: Call2 0xa5

0x117: Pop(1)
0x118: Push((int) 540124)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 540125)
0x11e: Push((int) 42095)
0x11f: Push((int) 42094)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 540128)
0x123: Push((int) 42095)
0x124: Push((int) 42097)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 42095)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Strength"
0x12d: Call2 0xa5

0x12e: Pop(1)
0x12f: Push((int) 540126)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 540127)
0x135: Push((int) 24338)
0x136: Push((int) 42096)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 24338)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Sympathy"
0x13f: Call2 0xa5

0x140: Pop(1)
0x141: Push((int) 523138)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 523139)
0x147: Push((int) 24340)
0x148: Push((int) 24339)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 523149)
0x14c: Push((int) 24350)
0x14d: Push((int) 24349)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 24350)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call2 0xa5

0x157: Pop(1)
0x158: Push((int) 523150)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 523151)
0x15e: Push((int) -1)
0x15f: Push((int) 24351)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Push((int) 523152)
0x163: Push((int) 24340)
0x164: Push((int) 24352)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 24340)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Sympathy"
0x16d: Call2 0xa5

0x16e: Pop(1)
0x16f: Push((int) 523140)
0x170: @@ SetMessage(Stack[-1])
0x171: Pop(1)
0x172: @@ ClearReplies()
0x173: Pop(0)
0x174: Push((int) 523141)
0x175: Push((int) 24342)
0x176: Push((int) 24341)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Push((int) 523153)
0x17a: Push((int) 24355)
0x17b: Push((int) 24354)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 24355)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Sympathy"
0x184: Call2 0xa5

0x185: Pop(1)
0x186: Push((int) 523154)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: Push((int) 523155)
0x18c: Push((int) 24357)
0x18d: Push((int) 24356)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 24357)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Strength"
0x196: Call2 0xa5

0x197: Pop(1)
0x198: Push((int) 523156)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 523157)
0x19e: Push((int) 24342)
0x19f: Push((int) 24358)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 24342)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Sympathy"
0x1a8: Call2 0xa5

0x1a9: Pop(1)
0x1aa: Push((int) 523142)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 523143)
0x1b0: Push((int) 24344)
0x1b1: Push((int) 24343)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 24344)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Sympathy"
0x1ba: Call2 0xa5

0x1bb: Pop(1)
0x1bc: Push((int) 523144)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 523145)
0x1c2: Push((int) 24346)
0x1c3: Push((int) 24345)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 24346)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Sympathy"
0x1cc: Call2 0xa5

0x1cd: Pop(1)
0x1ce: Push((int) 523146)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 523147)
0x1d4: Push((int) 24348)
0x1d5: Push((int) 24347)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 24348)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Fear"
0x1de: Call2 0xa5

0x1df: Pop(1)
0x1e0: Push((int) 523148)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 523158)
0x1e6: Push((int) -1)
0x1e7: Push((int) 24360)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ec: PushEmpty(bool)
0x1ed: Call2 0x39b

0x1ee: Pop(0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f0: @ lshStopAnimation()
0x1f1: Pop(0)
0x1f2: GOTO 0x1f5

0x1f3: @ StopAnimation()
0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: GOTO 0xbc

0x1f7: Return(); Pop(0)

0x1f8: @ Hold()
0x1f9: Pop(0)
0x1fa: GOTO 0x1f8

0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: PushEmpty(int, object)
0x1fe: Stack[-1] = Stack[-3]
0x1ff: Push(-2, 1); TaskCall(0)
0x200: Call2 0x0

0x201: Pop(-2, 1); TaskReturn
0x202: Pop(2)
0x203: Return(); Pop(0)

0x204: PushEmpty(bool, bool)
0x205: Push("cleanup")
0x206: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x208: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x209: @ IsLoaded(Stack[-1])
0x20a: Pop(0)
0x20b: PushEmpty(bool)
0x20c: Stack[-1] = (bool) 0
0x20d: Pop(0); Push((bool) Stack[-2] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20f: PushEmpty(bool)
0x210: Call2 0x230

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Stack[-1] = (bool) 1
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: PushEmpty(object)
0x216: Call2 0x346

0x217: Pop(0)
0x218: @ RemoveActor(Stack[-1])
0x219: Pop(1)
0x21a: GOTO 0x21f

0x21b: Push("restore")
0x21c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x21f: Return(); Pop(2)

0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: Push( Stack[0 + Tasks[-1].StackPointer] )
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x230

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: PushEmpty(object)
0x22b: Call2 0x346

0x22c: Pop(0)
0x22d: @ RemoveActor(Stack[-1])
0x22e: Pop(1)
0x22f: Return(); Pop(0)

0x230: Stack[-1] = (bool) 1
0x231: Return(); Pop(0)

0x232: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x233: @@ GetPosition(Stack[-8])
0x234: Pop(0)
0x235: @@ GetEyesHeight(Stack[-9])
0x236: Pop(0)
0x237: Push(CvectorIndex(Stack[-8], 1))
0x238: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x239: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x23a: @ GetPosition(Stack[-7])
0x23b: Pop(0)
0x23c: @ GetEyesHeight(Stack[-9])
0x23d: Pop(0)
0x23e: Push(CvectorIndex(Stack[-7], 1))
0x23f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x240: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x241: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x242: Push(CvectorIndex(Stack[-6], 1))
0x243: Stack[-1] = (int) 0
0x244: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x245: Pop(0); Push(Stack[-6] | Stack[-6]);
0x246: Pop(1); Push(Sqrt(Stack[-1]))
0x247: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x248: Stack[-5] = -Stack[-6]; Pop(0);
0x249: Pop(0); Push(Stack[-6] * Stack[-19]);
0x24a: PushEmpty(cvector, cvector)
0x24b: Push(CVector(0.0, 1.0, 0.0))
0x24c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x24d: Call2 0x34c

0x24e: Pop(1)
0x24f: Push((int) 25)
0x250: Pop(2); Push(Stack[-2] * Stack[-1]);
0x251: Pop(2); Push(Stack[-2] + Stack[-1]);
0x252: Push(CVector(0.0, 10.0, 0.0))
0x253: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x254: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x255: @ IsOverrideActive(Stack[-2])
0x256: Pop(0)
0x257: Push(Stack[-2])
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-21] = (bool) 0
0x25a: Return(); Pop(18)

0x25b: @ StopWorld()
0x25c: Pop(0)
0x25d: @ CameraTransit(Stack[-3], Stack[-5])
0x25e: Pop(0)
0x25f: Push(CvectorIndex(Stack[-4], 0))
0x260: Push(CvectorIndex(Stack[-5], 2))
0x261: @ Rotate(Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: PushEmpty(bool)
0x264: Call2 0x39b

0x265: Pop(0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x270

0x268: Push("head")
0x269: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26a: Pop(1)
0x26b: Push(Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26d: Push("head")
0x26e: @ LookAsyncCamera(Stack[-1])
0x26f: Pop(1)
0x270: @ CameraWaitForPlayFinish()
0x271: Pop(0)
0x272: @ ResumeWorld()
0x273: Pop(0)
0x274: Stack[-21] = (bool) 1
0x275: Return(); Pop(18)

0x276: PushEmpty(bool, bool)
0x277: @ CameraSwitchToNormal()
0x278: Pop(0)
0x279: PushEmpty(bool)
0x27a: Call2 0x39b

0x27b: Pop(0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x286

0x27e: Push("head")
0x27f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x280: Pop(1)
0x281: Push(Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x283: Push("head")
0x284: @ UnlookAsync(Stack[-1])
0x285: Pop(1)
0x286: Return(); Pop(2)

0x287: PushEmpty(int, int, int, int)
0x288: Push("voice_common")
0x289: @ GetVariable(Stack[-1], Stack[-3])
0x28a: Pop(1)
0x28b: Push(Stack[-2])
0x28c: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[-7]
0x28f: Call2 0x2c1

0x290: Pop(1)
0x291: Pop(1); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[-7]
0x295: Call2 0x2e6

0x296: Pop(1)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-6] = (bool) 0
0x29a: Return(); Pop(4)

0x29b: Push((int) 2)
0x29c: @ irand(Stack[-2], Stack[-1])
0x29d: Pop(1)
0x29e: Push(Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a0: Push("voice_common")
0x2a1: Push((int) 1)
0x2a2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2a3: Push((int) 3)
0x2a4: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2a5: @ SetVariable(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: GOTO 0x2ac

0x2a8: Push("voice_common")
0x2a9: Push((int) 0)
0x2aa: @ SetVariable(Stack[-2], Stack[-1])
0x2ab: Pop(2)
0x2ac: GOTO 0x2bf

0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[-7]
0x2af: Call2 0x2e6

0x2b0: Pop(1)
0x2b1: Pop(1); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[-7]
0x2b5: Call2 0x2c1

0x2b6: Pop(1)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-6] = (bool) 0
0x2ba: Return(); Pop(4)

0x2bb: Push("voice_common")
0x2bc: Push((int) 1)
0x2bd: @ SetVariable(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: Stack[-6] = (bool) 1
0x2c0: Return(); Pop(4)

0x2c1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c2: Stack[-5] = "c"
0x2c3: Stack[-4] = (int) 0
0x2c4: Push((int) 1)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c6: Push((int) 1)
0x2c7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2c8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c9: @@ HasProperty(Stack[-1], Stack[-4])
0x2ca: Pop(1)
0x2cb: Pop(0); Push((bool) Stack[-3] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d1

0x2ce: Push((int) 1)
0x2cf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d0: GOTO 0x2c4

0x2d1: Pop(0); Push((bool) Stack[-4] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d3: Stack[-12] = (bool) 0
0x2d4: Return(); Pop(10)

0x2d5: Stack[-2] = (int) 0
0x2d6: Push((int) 1)
0x2d7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: @ irand(Stack[-2], Stack[-4])
0x2da: Pop(0)
0x2db: Push((int) 1)
0x2dc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2dd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2de: @@ GetProperty(Stack[-1], Stack[-2])
0x2df: Pop(1)
0x2e0: PushEmpty(bool, string)
0x2e1: Stack[-1] = Stack[-3]
0x2e2: Call2 0x330

0x2e3: Stack[-14] = Stack[-2]
0x2e4: Pop(2)
0x2e5: Return(); Pop(10)

0x2e6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2e7: Push("d")
0x2e8: PushEmpty(int)
0x2e9: Call2 0x35b

0x2ea: Pop(0)
0x2eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ec: Push("m")
0x2ed: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2ee: Stack[-4] = (int) 0
0x2ef: Push((int) 1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f1: Push((int) 1)
0x2f2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f4: @@ HasProperty(Stack[-1], Stack[-4])
0x2f5: Pop(1)
0x2f6: Pop(0); Push((bool) Stack[-3] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: GOTO 0x2fc

0x2f9: Push((int) 1)
0x2fa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2fb: GOTO 0x2ef

0x2fc: Pop(0); Push((bool) Stack[-4] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-12] = (bool) 0
0x2ff: Return(); Pop(10)

0x300: Stack[-2] = (int) 0
0x301: Push((int) 1)
0x302: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: @ irand(Stack[-2], Stack[-4])
0x305: Pop(0)
0x306: Push((int) 1)
0x307: Pop(1); Push(Stack[-3] + Stack[-1]);
0x308: Pop(1); Push(Stack[-6] + Stack[-1]);
0x309: @@ GetProperty(Stack[-1], Stack[-2])
0x30a: Pop(1)
0x30b: PushEmpty(bool, string)
0x30c: Stack[-1] = Stack[-3]
0x30d: Call2 0x330

0x30e: Stack[-14] = Stack[-2]
0x30f: Pop(2)
0x310: Return(); Pop(10)

0x311: PushEmpty(bool, float, float, bool, float, float)
0x312: @ lshHasAnimation(Stack[-3], Stack[-7])
0x313: Pop(0)
0x314: Push(Stack[-3])
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x317: Pop(0)
0x318: Push((bool) 0)
0x319: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(1)
0x31b: GOTO 0x320

0x31c: Push("Can't find lsh animation : ")
0x31d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31e: @ Trace(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(6)

0x321: PushEmpty(bool, float, float, bool, float, float)
0x322: @ lshHasAnimation(Stack[-3], Stack[-8])
0x323: Pop(0)
0x324: Push(Stack[-3])
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x327: Pop(0)
0x328: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x329: Pop(0)
0x32a: GOTO 0x32f

0x32b: Push("Can't find lsh animation : ")
0x32c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x32d: @ Trace(Stack[-1])
0x32e: Pop(1)
0x32f: Return(); Pop(6)

0x330: PushEmpty(bool, bool)
0x331: PushEmpty(bool)
0x332: Call2 0x39b

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x335: @ lshHasSpeech(Stack[-1], Stack[-3])
0x336: Pop(0)
0x337: Push(Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x339: @ lshPlaySpeech(Stack[-3])
0x33a: Pop(0)
0x33b: Stack[-4] = (bool) 1
0x33c: Return(); Pop(2)

0x33d: Stack[-4] = (bool) 0
0x33e: Return(); Pop(2)

0x33f: PushEmpty(bool)
0x340: Call2 0x39b

0x341: Pop(0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: @ lshStopSpeech()
0x344: Pop(0)
0x345: Return(); Pop(0)

0x346: PushEmpty(object, object)
0x347: @ self(Stack[-1])
0x348: Pop(0)
0x349: Stack[-3] = Stack[-1]
0x34a: Return(); Pop(2)

0x34b: Stack[-1] = 0
0x34c: PushEmpty(float, float)
0x34d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x34f: Push((float)0.0)
0x350: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x353: Return(); Pop(2)

0x354: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x355: Return(); Pop(2)

0x356: PushEmpty(int, int)
0x357: @ GetVariable(Stack[-3], Stack[-1])
0x358: Pop(0)
0x359: Stack[-4] = Stack[-1]
0x35a: Return(); Pop(2)

0x35b: PushEmpty(float, float)
0x35c: @ GetGameTime(Stack[-1])
0x35d: Pop(0)
0x35e: Push((int) 1)
0x35f: PushEmpty(int)
0x360: Push((int) 24)
0x361: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x362: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x363: Return(); Pop(2)

0x364: PushEmpty()
0x365: Push("oob12KapellaSobor1")
0x366: Push((int) 1)
0x367: @ SetVariable(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: Return(); Pop(0)

0x36a: PushEmpty()
0x36b: PushEmpty(int, string)
0x36c: Stack[-1] = "game_final"
0x36d: Call2 0x356

0x36e: Pop(1)
0x36f: Push((int) 0)
0x370: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-2] = (bool) 1
0x373: Return(); Pop(0)

0x374: Stack[-2] = (bool) 0
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: PushEmpty(int, string)
0x378: Stack[-1] = "oob12KapellaSobor1"
0x379: Call2 0x356

0x37a: Pop(1)
0x37b: Push((int) 0)
0x37c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-2] = (bool) 1
0x37f: Return(); Pop(0)

0x380: Stack[-2] = (bool) 0
0x381: Return(); Pop(0)

0x382: PushEmpty(int, int)
0x383: Push("branch")
0x384: @ GetVariable(Stack[-1], Stack[-2])
0x385: Pop(1)
0x386: Push((int) 0)
0x387: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x389: Stack[-3] = (int) 1
0x38a: Return(); Pop(2)

0x38b: GOTO 0x391

0x38c: Push((int) 1)
0x38d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-3] = (int) 2
0x390: Return(); Pop(2)

0x391: Stack[-3] = (int) 3
0x392: Return(); Pop(2)

0x393: Stack[-1] = (int) 515538
0x394: Return(); Pop(0)

0x395: Stack[-1] = (int) 502863
0x396: Return(); Pop(0)

0x397: Stack[-1] = "ui/NPC_Kapella.png"
0x398: Return(); Pop(0)

0x399: Stack[-1] = "ui/NPC_Kapella_b.png"
0x39a: Return(); Pop(0)

0x39b: Stack[-1] = (bool) 1
0x39c: Return(); Pop(0)

