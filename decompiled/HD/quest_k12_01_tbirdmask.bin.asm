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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	itheater@door1
	ook12TBirdmask1
	ook12TBirdmask2
	k12DankoVisit
	k12BurahVisit
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x3f9
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x3ff Vars = (object)
		EVENT_26 Op = 0x430 Vars = (string)
		EVENT_6 Op = 0x438 Vars = ()
		EVENT_7 Op = 0x479 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x501

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x61d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x61b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x61f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x621

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x60a

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x546

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x5c7

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xa2

0x58: Pop(1)
0x59: Push((int) 541007)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x5e6

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 541347)
0x64: Push((int) 43494)
0x65: Push((int) 43493)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: PushEmpty(bool)
0x69: Stack[-1] = (bool) 0
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x5f2

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x5e6

0x72: Pop(1)
0x73: Pop(1); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 542740)
0x78: Push((int) 45157)
0x79: Push((int) 45156)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 541034)
0x7d: Push((int) -1)
0x7e: Push((int) 43128)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x623

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x558

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x623

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x568

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x582

0xbd: Pop(0)
0xbe: Push((int) 43493)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x5ce

0xc5: Pop(2)
0xc6: Push((int) 45156)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x5d4

0xcd: Pop(2)
0xce: Push((int) 43100)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x5c7

0xd5: Pop(2)
0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0xa2

0xd9: Pop(1)
0xda: Push((int) 541007)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0x5e6

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 541347)
0xe5: Push((int) 43494)
0xe6: Push((int) 43493)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: PushEmpty(bool)
0xea: Stack[-1] = (bool) 0
0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0x5f2

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf0: PushEmpty(bool, object)
0xf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Call2 0x5e6

0xf3: Pop(1)
0xf4: Pop(1); Push((bool) Stack[-1] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Stack[-1] = (bool) 1
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 542740)
0xf9: Push((int) 45157)
0xfa: Push((int) 45156)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 541034)
0xfe: Push((int) -1)
0xff: Push((int) 43128)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 45157)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 542741)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 542742)
0x110: Push((int) 45163)
0x111: Push((int) 45158)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 542743)
0x115: Push((int) 45160)
0x116: Push((int) 45159)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 45160)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 542744)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 542745)
0x127: Push((int) 45169)
0x128: Push((int) 45161)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 542746)
0x12c: Push((int) -1)
0x12d: Push((int) 45162)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 45163)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call2 0xa2

0x137: Pop(1)
0x138: Push((int) 542747)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 542748)
0x13e: Push((int) 45166)
0x13f: Push((int) 45165)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 542751)
0x143: Push((int) 45169)
0x144: Push((int) 45168)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 45166)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xa2

0x14e: Pop(1)
0x14f: Push((int) 542749)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 542750)
0x155: Push((int) 45169)
0x156: Push((int) 45167)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 45169)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xa2

0x160: Pop(1)
0x161: Push((int) 542752)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 542753)
0x167: Push((int) 45173)
0x168: Push((int) 45172)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 45173)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral"
0x171: Call2 0xa2

0x172: Pop(1)
0x173: Push((int) 542754)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 542755)
0x179: Push((int) 45177)
0x17a: Push((int) 45174)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Push((int) 542756)
0x17e: Push((int) 45178)
0x17f: Push((int) 45175)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 542757)
0x183: Push((int) -1)
0x184: Push((int) 45176)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 45178)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0xa2

0x18e: Pop(1)
0x18f: Push((int) 542759)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 542760)
0x195: Push((int) -1)
0x196: Push((int) 45179)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Push((int) 542761)
0x19a: Push((int) 45177)
0x19b: Push((int) 45180)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 45177)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call2 0xa2

0x1a5: Pop(1)
0x1a6: Push((int) 542758)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 542762)
0x1ac: Push((int) -1)
0x1ad: Push((int) 45182)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 43494)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call2 0xa2

0x1b7: Pop(1)
0x1b8: Push((int) 541348)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 541349)
0x1be: Push((int) 43496)
0x1bf: Push((int) 43495)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 43496)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Neutral"
0x1c8: Call2 0xa2

0x1c9: Pop(1)
0x1ca: Push((int) 541350)
0x1cb: @@ SetMessage(Stack[-1])
0x1cc: Pop(1)
0x1cd: @@ ClearReplies()
0x1ce: Pop(0)
0x1cf: Push((int) 541351)
0x1d0: Push((int) 43498)
0x1d1: Push((int) 43497)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Push((int) 541356)
0x1d5: Push((int) 43503)
0x1d6: Push((int) 43502)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 43503)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral"
0x1df: Call2 0xa2

0x1e0: Pop(1)
0x1e1: Push((int) 541357)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 541358)
0x1e7: Push((int) 43505)
0x1e8: Push((int) 43504)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 541361)
0x1ec: Push((int) 43508)
0x1ed: Push((int) 43507)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 43508)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral"
0x1f6: Call2 0xa2

0x1f7: Pop(1)
0x1f8: Push((int) 541362)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 541363)
0x1fe: Push((int) 43498)
0x1ff: Push((int) 43509)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 43505)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0xa2

0x209: Pop(1)
0x20a: Push((int) 541359)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 541360)
0x210: Push((int) 43498)
0x211: Push((int) 43506)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Return(); Pop(0)

0x215: Push((int) 43498)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x218: PushEmpty(string)
0x219: Stack[-1] = "Neutral"
0x21a: Call2 0xa2

0x21b: Pop(1)
0x21c: Push((int) 541352)
0x21d: @@ SetMessage(Stack[-1])
0x21e: Pop(1)
0x21f: @@ ClearReplies()
0x220: Pop(0)
0x221: Push((int) 541353)
0x222: Push((int) 43500)
0x223: Push((int) 43499)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Push((int) 541364)
0x227: Push((int) -1)
0x228: Push((int) 43510)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Push((int) 43500)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral"
0x231: Call2 0xa2

0x232: Pop(1)
0x233: Push((int) 541354)
0x234: @@ SetMessage(Stack[-1])
0x235: Pop(1)
0x236: @@ ClearReplies()
0x237: Pop(0)
0x238: Push((int) 541355)
0x239: Push((int) 43513)
0x23a: Push((int) 43501)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Push((int) 541368)
0x23e: Push((int) 43517)
0x23f: Push((int) 43516)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 43517)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call2 0xa2

0x249: Pop(1)
0x24a: Push((int) 541369)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 541370)
0x250: Push((int) 43515)
0x251: Push((int) 43518)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Push((int) 541373)
0x255: Push((int) 43523)
0x256: Push((int) 43522)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Push((int) 542700)
0x25a: Push((int) 45109)
0x25b: Push((int) 45108)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Push((int) 45109)
0x260: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x262: PushEmpty(string)
0x263: Stack[-1] = "Neutral"
0x264: Call2 0xa2

0x265: Pop(1)
0x266: Push((int) 542701)
0x267: @@ SetMessage(Stack[-1])
0x268: Pop(1)
0x269: @@ ClearReplies()
0x26a: Pop(0)
0x26b: Push((int) 542702)
0x26c: Push((int) 45111)
0x26d: Push((int) 45110)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Return(); Pop(0)

0x271: Push((int) 45111)
0x272: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral"
0x276: Call2 0xa2

0x277: Pop(1)
0x278: Push((int) 542703)
0x279: @@ SetMessage(Stack[-1])
0x27a: Pop(1)
0x27b: @@ ClearReplies()
0x27c: Pop(0)
0x27d: PushEmpty(bool, object)
0x27e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27f: Call2 0x5da

0x280: Pop(1)
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: Push((int) 542704)
0x283: Push((int) 45117)
0x284: Push((int) 45112)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Push((int) 542705)
0x288: Push((int) 45114)
0x289: Push((int) 45113)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Push((int) 45114)
0x28e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral"
0x292: Call2 0xa2

0x293: Pop(1)
0x294: Push((int) 542706)
0x295: @@ SetMessage(Stack[-1])
0x296: Pop(1)
0x297: @@ ClearReplies()
0x298: Pop(0)
0x299: Push((int) 542707)
0x29a: Push((int) 43523)
0x29b: Push((int) 45115)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: Return(); Pop(0)

0x29f: Push((int) 45117)
0x2a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Neutral"
0x2a4: Call2 0xa2

0x2a5: Pop(1)
0x2a6: Push((int) 542708)
0x2a7: @@ SetMessage(Stack[-1])
0x2a8: Pop(1)
0x2a9: @@ ClearReplies()
0x2aa: Pop(0)
0x2ab: Push((int) 542709)
0x2ac: Push((int) 45119)
0x2ad: Push((int) 45118)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Return(); Pop(0)

0x2b1: Push((int) 45119)
0x2b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Neutral"
0x2b6: Call2 0xa2

0x2b7: Pop(1)
0x2b8: Push((int) 542710)
0x2b9: @@ SetMessage(Stack[-1])
0x2ba: Pop(1)
0x2bb: @@ ClearReplies()
0x2bc: Pop(0)
0x2bd: Push((int) 542711)
0x2be: Push((int) 45122)
0x2bf: Push((int) 45120)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push((int) 542712)
0x2c3: Push((int) 45122)
0x2c4: Push((int) 45121)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 45122)
0x2c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral"
0x2cd: Call2 0xa2

0x2ce: Pop(1)
0x2cf: Push((int) 542713)
0x2d0: @@ SetMessage(Stack[-1])
0x2d1: Pop(1)
0x2d2: @@ ClearReplies()
0x2d3: Pop(0)
0x2d4: Push((int) 542714)
0x2d5: Push((int) 45125)
0x2d6: Push((int) 45123)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: Push((int) 45125)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "Neutral"
0x2df: Call2 0xa2

0x2e0: Pop(1)
0x2e1: Push((int) 542715)
0x2e2: @@ SetMessage(Stack[-1])
0x2e3: Pop(1)
0x2e4: @@ ClearReplies()
0x2e5: Pop(0)
0x2e6: Push((int) 542716)
0x2e7: Push((int) 43523)
0x2e8: Push((int) 45126)
0x2e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(3)
0x2eb: Push((int) 542717)
0x2ec: Push((int) -1)
0x2ed: Push((int) 45127)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: Push((int) 43513)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral"
0x2f6: Call2 0xa2

0x2f7: Pop(1)
0x2f8: Push((int) 541365)
0x2f9: @@ SetMessage(Stack[-1])
0x2fa: Pop(1)
0x2fb: @@ ClearReplies()
0x2fc: Pop(0)
0x2fd: Push((int) 541366)
0x2fe: Push((int) 43515)
0x2ff: Push((int) 43514)
0x300: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(3)
0x302: Push((int) 541372)
0x303: Push((int) 43523)
0x304: Push((int) 43521)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Push((int) 542718)
0x308: Push((int) 45130)
0x309: Push((int) 45129)
0x30a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(3)
0x30c: Return(); Pop(0)

0x30d: Push((int) 45130)
0x30e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Neutral"
0x312: Call2 0xa2

0x313: Pop(1)
0x314: Push((int) 542719)
0x315: @@ SetMessage(Stack[-1])
0x316: Pop(1)
0x317: @@ ClearReplies()
0x318: Pop(0)
0x319: Push((int) 542736)
0x31a: Push((int) 45151)
0x31b: Push((int) 45150)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: Push((int) 45151)
0x320: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x322: PushEmpty(string)
0x323: Stack[-1] = "Neutral"
0x324: Call2 0xa2

0x325: Pop(1)
0x326: Push((int) 542737)
0x327: @@ SetMessage(Stack[-1])
0x328: Pop(1)
0x329: @@ ClearReplies()
0x32a: Pop(0)
0x32b: Push((int) 542738)
0x32c: Push((int) 45153)
0x32d: Push((int) 45152)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: Push((int) 45153)
0x332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x334: PushEmpty(string)
0x335: Stack[-1] = "Neutral"
0x336: Call2 0xa2

0x337: Pop(1)
0x338: Push((int) 542739)
0x339: @@ SetMessage(Stack[-1])
0x33a: Pop(1)
0x33b: @@ ClearReplies()
0x33c: Pop(0)
0x33d: Push((int) 542720)
0x33e: Push((int) 45132)
0x33f: Push((int) 45131)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: Return(); Pop(0)

0x343: Push((int) 45132)
0x344: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x346: PushEmpty(string)
0x347: Stack[-1] = "Neutral"
0x348: Call2 0xa2

0x349: Pop(1)
0x34a: Push((int) 542721)
0x34b: @@ SetMessage(Stack[-1])
0x34c: Pop(1)
0x34d: @@ ClearReplies()
0x34e: Pop(0)
0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x351: Call2 0x5fe

0x352: Pop(1)
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: Push((int) 542722)
0x355: Push((int) 45134)
0x356: Push((int) 45133)
0x357: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(3)
0x359: Push((int) 542733)
0x35a: Push((int) 45147)
0x35b: Push((int) 45146)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 45147)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral"
0x364: Call2 0xa2

0x365: Pop(1)
0x366: Push((int) 542734)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 542735)
0x36c: Push((int) 43523)
0x36d: Push((int) 45148)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 45134)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral"
0x376: Call2 0xa2

0x377: Pop(1)
0x378: Push((int) 542723)
0x379: @@ SetMessage(Stack[-1])
0x37a: Pop(1)
0x37b: @@ ClearReplies()
0x37c: Pop(0)
0x37d: Push((int) 542724)
0x37e: Push((int) 45136)
0x37f: Push((int) 45135)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 45136)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral"
0x388: Call2 0xa2

0x389: Pop(1)
0x38a: Push((int) 542725)
0x38b: @@ SetMessage(Stack[-1])
0x38c: Pop(1)
0x38d: @@ ClearReplies()
0x38e: Pop(0)
0x38f: Push((int) 542726)
0x390: Push((int) 45138)
0x391: Push((int) 45137)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Push((int) 542732)
0x395: Push((int) 45138)
0x396: Push((int) 45144)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 45138)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Neutral"
0x39f: Call2 0xa2

0x3a0: Pop(1)
0x3a1: Push((int) 542727)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 542728)
0x3a7: Push((int) 45140)
0x3a8: Push((int) 45139)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 45140)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Neutral"
0x3b1: Call2 0xa2

0x3b2: Pop(1)
0x3b3: Push((int) 542729)
0x3b4: @@ SetMessage(Stack[-1])
0x3b5: Pop(1)
0x3b6: @@ ClearReplies()
0x3b7: Pop(0)
0x3b8: Push((int) 542730)
0x3b9: Push((int) 43523)
0x3ba: Push((int) 45141)
0x3bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: Push((int) 542731)
0x3be: Push((int) -1)
0x3bf: Push((int) 45143)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 43523)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "Neutral"
0x3c8: Call2 0xa2

0x3c9: Pop(1)
0x3ca: Push((int) 541374)
0x3cb: @@ SetMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ ClearReplies()
0x3ce: Pop(0)
0x3cf: Push((int) 541375)
0x3d0: Push((int) -1)
0x3d1: Push((int) 43525)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Push((int) 541376)
0x3d5: Push((int) -1)
0x3d6: Push((int) 43526)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Return(); Pop(0)

0x3da: Push((int) 43515)
0x3db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3dd: PushEmpty(string)
0x3de: Stack[-1] = "Neutral"
0x3df: Call2 0xa2

0x3e0: Pop(1)
0x3e1: Push((int) 541367)
0x3e2: @@ SetMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ ClearReplies()
0x3e5: Pop(0)
0x3e6: Push((int) 541371)
0x3e7: Push((int) -1)
0x3e8: Push((int) 43520)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3ed: PushEmpty(bool)
0x3ee: Call2 0x623

0x3ef: Pop(0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f1: @ lshStopAnimation()
0x3f2: Pop(0)
0x3f3: GOTO 0x3f6

0x3f4: @ StopAnimation()
0x3f5: Pop(0)
0x3f6: Return(); Pop(0)

0x3f7: GOTO 0xb9

0x3f8: Return(); Pop(0)

0x3f9: PushEmpty(float, float)
0x3fa: Stack[-2] = (int) 300
0x3fb: Stack[-1] = (int) 100
0x3fc: Call2 0x40a

0x3fd: Pop(2)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty()
0x401: Call2 0x490

0x402: Pop(0)
0x403: PushEmpty(int, object)
0x404: Stack[-1] = Stack[-3]
0x405: Push(-2, 1); TaskCall(0)
0x406: Call2 0x0

0x407: Pop(-2, 1); TaskReturn
0x408: Pop(2)
0x409: Return(); Pop(0)

0x40a: PushEmpty(float, bool, float, bool)
0x40b: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x40c: Push((int) 3)
0x40d: @ rand(Stack[-3], Stack[-1])
0x40e: Pop(1)
0x40f: Push((int) 3)
0x410: Pop(1); Push(Stack[-3] + Stack[-1]);
0x411: @ Sleep(Stack[-1], Stack[-2])
0x412: Pop(1)
0x413: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x414: PushEmpty(float, float)
0x415: Stack[-2] = Stack[-8]
0x416: Stack[-1] = Stack[-7]
0x417: Call2 0x44f

0x418: Pop(2)
0x419: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x41a: GOTO 0x40c

0x41b: Return(); Pop(4)

0x41c: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x41d: PushEmpty(bool)
0x41e: Stack[-1] = (bool) 0
0x41f: PushEmpty(bool)
0x420: Call2 0x4fc

0x421: Pop(0)
0x422: Pop(1); Push((bool) Stack[-1] == 0)
0x423: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x424: PushEmpty(bool)
0x425: Call2 0x44d

0x426: Pop(0)
0x427: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x428: Stack[-1] = (bool) 1
0x429: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42a: PushEmpty(object)
0x42b: Call2 0x589

0x42c: Pop(0)
0x42d: @ RemoveActor(Stack[-1])
0x42e: Pop(1)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: Push("cleanup")
0x432: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x434: PushEmpty()
0x435: Call2 0x41c

0x436: Pop(0)
0x437: Return(); Pop(0)

0x438: Push( Stack[6 + Tasks[-1].StackPointer] )
0x439: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43a: PushEmpty()
0x43b: Call2 0x490

0x43c: Pop(0)
0x43d: PushEmpty(bool)
0x43e: Stack[-1] = (bool) 0
0x43f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: PushEmpty(bool)
0x442: Call2 0x44d

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Stack[-1] = (bool) 1
0x446: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x447: PushEmpty(object)
0x448: Call2 0x589

0x449: Pop(0)
0x44a: @ RemoveActor(Stack[-1])
0x44b: Pop(1)
0x44c: Return(); Pop(0)

0x44d: Stack[-1] = (bool) 1
0x44e: Return(); Pop(0)

0x44f: PushEmpty()
0x450: PushEmpty(bool)
0x451: Call2 0x4fc

0x452: Pop(0)
0x453: Pop(1); Push((bool) Stack[-1] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: Return(); Pop(0)

0x456: Push("player")
0x457: @ FindActor(Stack[-4], Stack[-1])
0x458: Pop(1)
0x459: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x45a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x45b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x45c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x45d: Push((int) 10)
0x45e: Push((float)1.0)
0x45f: @ SetTimer(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: PushEmpty()
0x462: Call2 0x49e

0x463: Pop(0)
0x464: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x466: Push((int) 10)
0x467: @ KillTimer(Stack[-1])
0x468: Pop(1)
0x469: Return(); Pop(0)

0x46a: PushEmpty(float, float)
0x46b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-3] = (bool) 0
0x46e: Return(); Pop(2)

0x46f: PushEmpty(float, object)
0x470: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x471: Call2 0x4f4

0x472: Pop(1)
0x473: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x474: Push( Stack[2 + Tasks[-1].StackPointer] )
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x477: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x478: Return(); Pop(2)

0x479: PushEmpty()
0x47a: Push((int) 10)
0x47b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x47d: PushEmpty(bool)
0x47e: Call2 0x46a

0x47f: Pop(0)
0x480: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x481: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x483: PushEmpty(object)
0x484: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x485: Call2 0x577

0x486: Pop(1)
0x487: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x488: GOTO 0x48f

0x489: Push( Stack[2 + Tasks[-1].StackPointer] )
0x48a: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48b: Push("head")
0x48c: @ UnlookAsync(Stack[-1])
0x48d: Pop(1)
0x48e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x48f: Return(); Pop(0)

0x490: PushEmpty()
0x491: Call2 0x4ef

0x492: Pop(0)
0x493: Push((int) 10)
0x494: @ KillTimer(Stack[-1])
0x495: Pop(1)
0x496: Push( Stack[2 + Tasks[-1].StackPointer] )
0x497: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x498: Push("head")
0x499: @ UnlookAsync(Stack[-1])
0x49a: Pop(1)
0x49b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x49c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x49d: Return(); Pop(0)

0x49e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x49f: @ WaitForAnimEnd()
0x4a0: Pop(0)
0x4a1: PushEmpty(bool)
0x4a2: Call2 0x4fc

0x4a3: Pop(0)
0x4a4: Pop(1); Push((bool) Stack[-1] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Return(); Pop(14)

0x4a7: PushEmpty(int)
0x4a8: Call2 0x5b6

0x4a9: Stack[-8] = Stack[-1]
0x4aa: Pop(1)
0x4ab: Stack[-6] = (int) 0
0x4ac: PushEmpty(bool)
0x4ad: Stack[-1] = (bool) 0
0x4ae: Push((int) 5)
0x4af: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b1: PushEmpty(bool)
0x4b2: Call2 0x4fc

0x4b3: Pop(0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Stack[-1] = (bool) 1
0x4b6: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4b7: Push((int) 3)
0x4b8: @ irand(Stack[-6], Stack[-1])
0x4b9: Pop(1)
0x4ba: Push((int) 0)
0x4bb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4bd: Push(Stack[-7])
0x4be: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4bf: @ irand(Stack[-4], Stack[-7])
0x4c0: Pop(0)
0x4c1: Push("all")
0x4c2: PushEmpty(string, int)
0x4c3: Stack[-1] = Stack[-7]
0x4c4: Call2 0x5af

0x4c5: Pop(1)
0x4c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c7: Pop(2)
0x4c8: @ WaitForAnimEnd(Stack[-3])
0x4c9: Pop(0)
0x4ca: Pop(0); Push((bool) Stack[-3] == 0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: GOTO 0x4ea

0x4cd: GOTO 0x4df

0x4ce: Push((int) 1)
0x4cf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d1: Push((int) 4)
0x4d2: @ rand(Stack[-3], Stack[-1])
0x4d3: Pop(1)
0x4d4: Push((int) 1)
0x4d5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d6: @ Sleep(Stack[-1], Stack[-2])
0x4d7: Pop(1)
0x4d8: Pop(0); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4da: GOTO 0x4ea

0x4db: GOTO 0x4df

0x4dc: Push(Stack[-6])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: GOTO 0x4ea

0x4df: PushEmpty(bool)
0x4e0: Call2 0x4ed

0x4e1: Pop(0)
0x4e2: Pop(1); Push((bool) Stack[-1] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: GOTO 0x4ea

0x4e5: @ ResetAAS()
0x4e6: Pop(0)
0x4e7: Push((int) 1)
0x4e8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4e9: GOTO 0x4ac

0x4ea: @ ResetAAS()
0x4eb: Pop(0)
0x4ec: Return(); Pop(14)

0x4ed: Stack[-1] = (bool) 1
0x4ee: Return(); Pop(0)

0x4ef: @ StopAnimation()
0x4f0: Pop(0)
0x4f1: @ StopGroup0()
0x4f2: Pop(0)
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4f5: @ GetPosition(Stack[-3])
0x4f6: Pop(0)
0x4f7: @@ GetPosition(Stack[-2])
0x4f8: Pop(0)
0x4f9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4fa: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4fb: Return(); Pop(6)

0x4fc: PushEmpty(bool, bool)
0x4fd: @ IsLoaded(Stack[-1])
0x4fe: Pop(0)
0x4ff: Stack[-3] = Stack[-1]
0x500: Return(); Pop(2)

0x501: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x502: @@ GetPosition(Stack[-8])
0x503: Pop(0)
0x504: @@ GetEyesHeight(Stack[-9])
0x505: Pop(0)
0x506: Push(CvectorIndex(Stack[-8], 1))
0x507: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x508: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x509: @ GetPosition(Stack[-7])
0x50a: Pop(0)
0x50b: @ GetEyesHeight(Stack[-9])
0x50c: Pop(0)
0x50d: Push(CvectorIndex(Stack[-7], 1))
0x50e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x50f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x510: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x511: Push(CvectorIndex(Stack[-6], 1))
0x512: Stack[-1] = (int) 0
0x513: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x514: Pop(0); Push(Stack[-6] | Stack[-6]);
0x515: Pop(1); Push(Sqrt(Stack[-1]))
0x516: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x517: Stack[-5] = -Stack[-6]; Pop(0);
0x518: Pop(0); Push(Stack[-6] * Stack[-19]);
0x519: PushEmpty(cvector, cvector)
0x51a: Push(CVector(0.0, 1.0, 0.0))
0x51b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x51c: Call2 0x58f

0x51d: Pop(1)
0x51e: Push((int) 25)
0x51f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x520: Pop(2); Push(Stack[-2] + Stack[-1]);
0x521: Push(CVector(0.0, 10.0, 0.0))
0x522: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x523: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x524: @ IsOverrideActive(Stack[-2])
0x525: Pop(0)
0x526: Push(Stack[-2])
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-21] = (bool) 0
0x529: Return(); Pop(18)

0x52a: @ StopWorld()
0x52b: Pop(0)
0x52c: Push((bool) 1)
0x52d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x52e: Pop(1)
0x52f: Push(CvectorIndex(Stack[-4], 0))
0x530: Push(CvectorIndex(Stack[-5], 2))
0x531: @ Rotate(Stack[-2], Stack[-1])
0x532: Pop(2)
0x533: PushEmpty(bool)
0x534: Call2 0x623

0x535: Pop(0)
0x536: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x537: GOTO 0x540

0x538: Push("head")
0x539: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x53a: Pop(1)
0x53b: Push(Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53d: Push("head")
0x53e: @ LookAsyncCamera(Stack[-1])
0x53f: Pop(1)
0x540: @ CameraWaitForPlayFinish()
0x541: Pop(0)
0x542: @ ResumeWorld()
0x543: Pop(0)
0x544: Stack[-21] = (bool) 1
0x545: Return(); Pop(18)

0x546: PushEmpty(bool, bool)
0x547: Push((bool) 1)
0x548: @ CameraSwitchToNormal(Stack[-1])
0x549: Pop(1)
0x54a: PushEmpty(bool)
0x54b: Call2 0x623

0x54c: Pop(0)
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: GOTO 0x557

0x54f: Push("head")
0x550: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x551: Pop(1)
0x552: Push(Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x554: Push("head")
0x555: @ UnlookAsync(Stack[-1])
0x556: Pop(1)
0x557: Return(); Pop(2)

0x558: PushEmpty(bool, float, float, bool, float, float)
0x559: @ lshHasAnimation(Stack[-3], Stack[-7])
0x55a: Pop(0)
0x55b: Push(Stack[-3])
0x55c: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x55d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x55e: Pop(0)
0x55f: Push((bool) 0)
0x560: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(1)
0x562: GOTO 0x567

0x563: Push("Can't find lsh animation : ")
0x564: Pop(1); Push(Stack[-1] + Stack[-8]);
0x565: @ Trace(Stack[-1])
0x566: Pop(1)
0x567: Return(); Pop(6)

0x568: PushEmpty(bool, float, float, bool, float, float)
0x569: @ lshHasAnimation(Stack[-3], Stack[-8])
0x56a: Pop(0)
0x56b: Push(Stack[-3])
0x56c: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x56e: Pop(0)
0x56f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x570: Pop(0)
0x571: GOTO 0x576

0x572: Push("Can't find lsh animation : ")
0x573: Pop(1); Push(Stack[-1] + Stack[-9]);
0x574: @ Trace(Stack[-1])
0x575: Pop(1)
0x576: Return(); Pop(6)

0x577: PushEmpty(float, cvector, float, cvector)
0x578: @@ GetEyesHeight(Stack[-2])
0x579: Pop(0)
0x57a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x57b: Push(CvectorIndex(Stack[-1], 1))
0x57c: Stack[-1] = Stack[-3]
0x57d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x57e: Push("head")
0x57f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x580: Pop(1)
0x581: Return(); Pop(4)

0x582: PushEmpty(bool)
0x583: Call2 0x623

0x584: Pop(0)
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: @ lshStopSpeech()
0x587: Pop(0)
0x588: Return(); Pop(0)

0x589: PushEmpty(object, object)
0x58a: @ self(Stack[-1])
0x58b: Pop(0)
0x58c: Stack[-3] = Stack[-1]
0x58d: Return(); Pop(2)

0x58e: Stack[-1] = 0
0x58f: PushEmpty(float, float)
0x590: Pop(0); Push(Stack[-3] | Stack[-3]);
0x591: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x592: Push((float)0.0)
0x593: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x596: Return(); Pop(2)

0x597: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x598: Return(); Pop(2)

0x599: PushEmpty(int, int)
0x59a: @ GetVariable(Stack[-3], Stack[-1])
0x59b: Pop(0)
0x59c: Stack[-4] = Stack[-1]
0x59d: Return(); Pop(2)

0x59e: PushEmpty(object, object)
0x59f: @ FindActor(Stack[-1], Stack[-4])
0x5a0: Pop(0)
0x5a1: Pop(0); Push((bool) Stack[-1] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a3: Push("Door ")
0x5a4: Pop(1); Push(Stack[-1] + Stack[-5]);
0x5a5: Push(" not found")
0x5a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5a7: @ Trace(Stack[-1])
0x5a8: Pop(1)
0x5a9: GOTO 0x5ad

0x5aa: Push("locked")
0x5ab: @@ SetProperty(Stack[-1], Stack[-4])
0x5ac: Pop(1)
0x5ad: Return(); Pop(2)

0x5ae: Stack[-1] = 0
0x5af: PushEmpty(string, string)
0x5b0: Stack[-1] = "idle"
0x5b1: Push(Stack[-3])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5b4: Stack[-4] = Stack[-1]
0x5b5: Return(); Pop(2)

0x5b6: PushEmpty(int, bool, int, bool)
0x5b7: Stack[-2] = (int) 0
0x5b8: Push("all")
0x5b9: PushEmpty(string, int)
0x5ba: Stack[-1] = Stack[-5]
0x5bb: Call2 0x5af

0x5bc: Pop(1)
0x5bd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(2)
0x5bf: Pop(0); Push((bool) Stack[-1] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: GOTO 0x5c5

0x5c2: Push((int) 1)
0x5c3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5c4: GOTO 0x5b8

0x5c5: Stack[-5] = Stack[-2]
0x5c6: Return(); Pop(4)

0x5c7: PushEmpty()
0x5c8: PushEmpty(string, bool)
0x5c9: Stack[-2] = "itheater@door1"
0x5ca: Stack[-1] = (bool) 0
0x5cb: Call2 0x59e

0x5cc: Pop(2)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: Push("ook12TBirdmask1")
0x5d0: Push((int) 1)
0x5d1: @ SetVariable(Stack[-2], Stack[-1])
0x5d2: Pop(2)
0x5d3: Return(); Pop(0)

0x5d4: PushEmpty()
0x5d5: Push("ook12TBirdmask2")
0x5d6: Push((int) 1)
0x5d7: @ SetVariable(Stack[-2], Stack[-1])
0x5d8: Pop(2)
0x5d9: Return(); Pop(0)

0x5da: PushEmpty()
0x5db: PushEmpty(int, string)
0x5dc: Stack[-1] = "k12DankoVisit"
0x5dd: Call2 0x599

0x5de: Pop(1)
0x5df: Push((int) 0)
0x5e0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e2: Stack[-2] = (bool) 1
0x5e3: Return(); Pop(0)

0x5e4: Stack[-2] = (bool) 0
0x5e5: Return(); Pop(0)

0x5e6: PushEmpty()
0x5e7: PushEmpty(int, string)
0x5e8: Stack[-1] = "ook12TBirdmask1"
0x5e9: Call2 0x599

0x5ea: Pop(1)
0x5eb: Push((int) 0)
0x5ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-2] = (bool) 1
0x5ef: Return(); Pop(0)

0x5f0: Stack[-2] = (bool) 0
0x5f1: Return(); Pop(0)

0x5f2: PushEmpty()
0x5f3: PushEmpty(int, string)
0x5f4: Stack[-1] = "ook12TBirdmask2"
0x5f5: Call2 0x599

0x5f6: Pop(1)
0x5f7: Push((int) 0)
0x5f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-2] = (bool) 1
0x5fb: Return(); Pop(0)

0x5fc: Stack[-2] = (bool) 0
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: PushEmpty(int, string)
0x600: Stack[-1] = "k12BurahVisit"
0x601: Call2 0x599

0x602: Pop(1)
0x603: Push((int) 0)
0x604: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-2] = (bool) 1
0x607: Return(); Pop(0)

0x608: Stack[-2] = (bool) 0
0x609: Return(); Pop(0)

0x60a: PushEmpty(int, int)
0x60b: Push("branch")
0x60c: @ GetVariable(Stack[-1], Stack[-2])
0x60d: Pop(1)
0x60e: Push((int) 0)
0x60f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x611: Stack[-3] = (int) 1
0x612: Return(); Pop(2)

0x613: GOTO 0x619

0x614: Push((int) 1)
0x615: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-3] = (int) 2
0x618: Return(); Pop(2)

0x619: Stack[-3] = (int) 3
0x61a: Return(); Pop(2)

0x61b: Stack[-1] = (int) 515571
0x61c: Return(); Pop(0)

0x61d: Stack[-1] = (int) 504029
0x61e: Return(); Pop(0)

0x61f: Stack[-1] = "ui/NPC_bmask.png"
0x620: Return(); Pop(0)

0x621: Stack[-1] = "ui/NPC_bmask_b.png"
0x622: Return(); Pop(0)

0x623: Stack[-1] = (bool) 0
0x624: Return(); Pop(0)

