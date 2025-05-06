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
	D_Mission5
	ood12Littleboy1
	ood12Littleboy2
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x284
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd1 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x28a Vars = (object)
		EVENT_26 Op = 0x2bb Vars = (string)
		EVENT_6 Op = 0x2c3 Vars = ()
		EVENT_7 Op = 0x304 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x38c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4c5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4c3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4c7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4c9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4b2

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
0x41: Call2 0x3d0

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
0x4f: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x453

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x447

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x427

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xbb

0x62: Pop(1)
0x63: Push((int) 514956)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 514957)
0x69: Push((int) 16211)
0x6a: Push((int) 16210)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 514975)
0x6e: Push((int) 42184)
0x6f: Push((int) 16230)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 514977)
0x73: Push((int) 16233)
0x74: Push((int) 16232)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x9d

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xbb

0x7b: Pop(1)
0x7c: Push((int) 514988)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x45f

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: Push((int) 514990)
0x87: Push((int) 16246)
0x88: Push((int) 16245)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x45f

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 515000)
0x91: Push((int) 16257)
0x92: Push((int) 16256)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: Push((int) 514989)
0x96: Push((int) -1)
0x97: Push((int) 16244)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: GOTO 0x9d

0x9b: Return(); Pop(0)

0x9c: GOTO 0x4e

0x9d: PushEmpty(bool)
0x9e: Call2 0x4cb

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa1: @ lshWaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: PushEmpty(string)
0xa7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa8: Call2 0x3e1

0xa9: Pop(1)
0xaa: GOTO 0xa1

0xab: GOTO 0xba

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: @ WaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: Push("all")
0xb6: Push("idle")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0xb0

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(bool)
0xbd: Call2 0x4cb

0xbe: Pop(0)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(0)

0xc2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: PushEmpty(string, bool)
0xc6: Stack[-2] = Stack[-3]
0xc7: Push("")
0xc8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-1] = (bool) 0
0xcb: GOTO 0xcd

0xcc: Stack[-1] = (bool) 1
0xcd: Call2 0x3f1

0xce: Pop(2)
0xcf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: Push((int) 1)
0xd3: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0x40b

0xd6: Pop(0)
0xd7: Push((int) 16245)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x44d

0xde: Pop(2)
0xdf: Push((int) 16256)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x44d

0xe6: Pop(2)
0xe7: Push((int) 16209)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x453

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x447

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x427

0xf8: Pop(2)
0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0xbb

0xfc: Pop(1)
0xfd: Push((int) 514956)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 514957)
0x103: Push((int) 16211)
0x104: Push((int) 16210)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 514975)
0x108: Push((int) 42184)
0x109: Push((int) 16230)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 514977)
0x10d: Push((int) 16233)
0x10e: Push((int) 16232)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0xbb

0x115: Pop(1)
0x116: Push((int) 514988)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x45f

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: Push((int) 514990)
0x121: Push((int) 16246)
0x122: Push((int) 16245)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call2 0x45f

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: Push((int) 515000)
0x12b: Push((int) 16257)
0x12c: Push((int) 16256)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 514989)
0x130: Push((int) -1)
0x131: Push((int) 16244)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 16257)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xbb

0x13b: Pop(1)
0x13c: Push((int) 515001)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 515002)
0x142: Push((int) 16251)
0x143: Push((int) 16258)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 515003)
0x147: Push((int) 16248)
0x148: Push((int) 16260)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 16246)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0xbb

0x152: Pop(1)
0x153: Push((int) 514991)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 514992)
0x159: Push((int) 16248)
0x15a: Push((int) 16247)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 514999)
0x15e: Push((int) 16248)
0x15f: Push((int) 16254)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 16248)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call2 0xbb

0x169: Pop(1)
0x16a: Push((int) 514993)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 514994)
0x170: Push((int) -1)
0x171: Push((int) 16249)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 514995)
0x175: Push((int) 16251)
0x176: Push((int) 16250)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 16251)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0xbb

0x180: Pop(1)
0x181: Push((int) 514996)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 514997)
0x187: Push((int) -1)
0x188: Push((int) 16252)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 514998)
0x18c: Push((int) -1)
0x18d: Push((int) 16253)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 16233)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xbb

0x197: Pop(1)
0x198: Push((int) 514978)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 514979)
0x19e: Push((int) 16235)
0x19f: Push((int) 16234)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 514987)
0x1a3: Push((int) 16215)
0x1a4: Push((int) 16242)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 16235)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0xbb

0x1ae: Pop(1)
0x1af: Push((int) 514980)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 514981)
0x1b5: Push((int) 16237)
0x1b6: Push((int) 16236)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 514986)
0x1ba: Push((int) 16213)
0x1bb: Push((int) 16241)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 16237)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Neutral"
0x1c4: Call2 0xbb

0x1c5: Pop(1)
0x1c6: Push((int) 514982)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 514983)
0x1cc: Push((int) -1)
0x1cd: Push((int) 16238)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Push((int) 514984)
0x1d1: Push((int) -1)
0x1d2: Push((int) 16239)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 42184)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral"
0x1db: Call2 0xbb

0x1dc: Pop(1)
0x1dd: Push((int) 540206)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 540207)
0x1e3: Push((int) 42186)
0x1e4: Push((int) 42185)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 42186)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xbb

0x1ee: Pop(1)
0x1ef: Push((int) 540208)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 540209)
0x1f5: Push((int) 16233)
0x1f6: Push((int) 42187)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 16211)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xbb

0x200: Pop(1)
0x201: Push((int) 514958)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 514959)
0x207: Push((int) 16213)
0x208: Push((int) 16212)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Push((int) 514974)
0x20c: Push((int) 16213)
0x20d: Push((int) 16228)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 16213)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Neutral"
0x216: Call2 0xbb

0x217: Pop(1)
0x218: Push((int) 514960)
0x219: @@ SetMessage(Stack[-1])
0x21a: Pop(1)
0x21b: @@ ClearReplies()
0x21c: Pop(0)
0x21d: Push((int) 514961)
0x21e: Push((int) 16215)
0x21f: Push((int) 16214)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Push((int) 514973)
0x223: Push((int) 16215)
0x224: Push((int) 16226)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 16215)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0xbb

0x22e: Pop(1)
0x22f: Push((int) 514962)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 514963)
0x235: Push((int) 16217)
0x236: Push((int) 16216)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Push((int) 514968)
0x23a: Push((int) 16222)
0x23b: Push((int) 16221)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 16222)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral"
0x244: Call2 0xbb

0x245: Pop(1)
0x246: Push((int) 514969)
0x247: @@ SetMessage(Stack[-1])
0x248: Pop(1)
0x249: @@ ClearReplies()
0x24a: Pop(0)
0x24b: Push((int) 514970)
0x24c: Push((int) -1)
0x24d: Push((int) 16223)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Push((int) 514971)
0x251: Push((int) -1)
0x252: Push((int) 16224)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Push((int) 514972)
0x256: Push((int) -1)
0x257: Push((int) 16225)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 16217)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call2 0xbb

0x261: Pop(1)
0x262: Push((int) 514964)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 514965)
0x268: Push((int) -1)
0x269: Push((int) 16218)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Push((int) 514966)
0x26d: Push((int) -1)
0x26e: Push((int) 16219)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Push((int) 514967)
0x272: Push((int) -1)
0x273: Push((int) 16220)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x278: PushEmpty(bool)
0x279: Call2 0x4cb

0x27a: Pop(0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: @ lshStopAnimation()
0x27d: Pop(0)
0x27e: GOTO 0x281

0x27f: @ StopAnimation()
0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: GOTO 0xd2

0x283: Return(); Pop(0)

0x284: PushEmpty(float, float)
0x285: Stack[-2] = (int) 300
0x286: Stack[-1] = (int) 100
0x287: Call2 0x295

0x288: Pop(2)
0x289: Return(); Pop(0)

0x28a: PushEmpty()
0x28b: PushEmpty()
0x28c: Call2 0x31b

0x28d: Pop(0)
0x28e: PushEmpty(int, object)
0x28f: Stack[-1] = Stack[-3]
0x290: Push(-2, 1); TaskCall(0)
0x291: Call2 0x0

0x292: Pop(-2, 1); TaskReturn
0x293: Pop(2)
0x294: Return(); Pop(0)

0x295: PushEmpty(float, bool, float, bool)
0x296: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x297: Push((int) 3)
0x298: @ rand(Stack[-3], Stack[-1])
0x299: Pop(1)
0x29a: Push((int) 3)
0x29b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x29c: @ Sleep(Stack[-1], Stack[-2])
0x29d: Pop(1)
0x29e: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x29f: PushEmpty(float, float)
0x2a0: Stack[-2] = Stack[-8]
0x2a1: Stack[-1] = Stack[-7]
0x2a2: Call2 0x2da

0x2a3: Pop(2)
0x2a4: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2a5: GOTO 0x297

0x2a6: Return(); Pop(4)

0x2a7: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2a8: PushEmpty(bool)
0x2a9: Stack[-1] = (bool) 0
0x2aa: PushEmpty(bool)
0x2ab: Call2 0x387

0x2ac: Pop(0)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: PushEmpty(bool)
0x2b0: Call2 0x2d8

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: Stack[-1] = (bool) 1
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: PushEmpty(object)
0x2b6: Call2 0x412

0x2b7: Pop(0)
0x2b8: @ RemoveActor(Stack[-1])
0x2b9: Pop(1)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Push("cleanup")
0x2bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bf: PushEmpty()
0x2c0: Call2 0x2a7

0x2c1: Pop(0)
0x2c2: Return(); Pop(0)

0x2c3: Push( Stack[6 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x31b

0x2c7: Pop(0)
0x2c8: PushEmpty(bool)
0x2c9: Stack[-1] = (bool) 0
0x2ca: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cc: PushEmpty(bool)
0x2cd: Call2 0x2d8

0x2ce: Pop(0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Stack[-1] = (bool) 1
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d2: PushEmpty(object)
0x2d3: Call2 0x412

0x2d4: Pop(0)
0x2d5: @ RemoveActor(Stack[-1])
0x2d6: Pop(1)
0x2d7: Return(); Pop(0)

0x2d8: Stack[-1] = (bool) 1
0x2d9: Return(); Pop(0)

0x2da: PushEmpty()
0x2db: PushEmpty(bool)
0x2dc: Call2 0x387

0x2dd: Pop(0)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: Return(); Pop(0)

0x2e1: Push("player")
0x2e2: @ FindActor(Stack[-4], Stack[-1])
0x2e3: Pop(1)
0x2e4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2e5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2e7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2e8: Push((int) 10)
0x2e9: Push((float)1.0)
0x2ea: @ SetTimer(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: PushEmpty()
0x2ed: Call2 0x329

0x2ee: Pop(0)
0x2ef: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f1: Push((int) 10)
0x2f2: @ KillTimer(Stack[-1])
0x2f3: Pop(1)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(float, float)
0x2f6: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-3] = (bool) 0
0x2f9: Return(); Pop(2)

0x2fa: PushEmpty(float, object)
0x2fb: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2fc: Call2 0x37f

0x2fd: Pop(1)
0x2fe: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ff: Push( Stack[2 + Tasks[-1].StackPointer] )
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x302: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x303: Return(); Pop(2)

0x304: PushEmpty()
0x305: Push((int) 10)
0x306: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x308: PushEmpty(bool)
0x309: Call2 0x2f5

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30e: PushEmpty(object)
0x30f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x310: Call2 0x400

0x311: Pop(1)
0x312: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x313: GOTO 0x31a

0x314: Push( Stack[2 + Tasks[-1].StackPointer] )
0x315: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x316: Push("head")
0x317: @ UnlookAsync(Stack[-1])
0x318: Pop(1)
0x319: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: Call2 0x37a

0x31d: Pop(0)
0x31e: Push((int) 10)
0x31f: @ KillTimer(Stack[-1])
0x320: Pop(1)
0x321: Push( Stack[2 + Tasks[-1].StackPointer] )
0x322: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x323: Push("head")
0x324: @ UnlookAsync(Stack[-1])
0x325: Pop(1)
0x326: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x327: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x328: Return(); Pop(0)

0x329: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x32a: @ WaitForAnimEnd()
0x32b: Pop(0)
0x32c: PushEmpty(bool)
0x32d: Call2 0x387

0x32e: Pop(0)
0x32f: Pop(1); Push((bool) Stack[-1] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: Return(); Pop(14)

0x332: PushEmpty(int)
0x333: Call2 0x4d4

0x334: Stack[-8] = Stack[-1]
0x335: Pop(1)
0x336: Stack[-6] = (int) 0
0x337: PushEmpty(bool)
0x338: Stack[-1] = (bool) 0
0x339: Push((int) 5)
0x33a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33c: PushEmpty(bool)
0x33d: Call2 0x387

0x33e: Pop(0)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Stack[-1] = (bool) 1
0x341: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x342: Push((int) 3)
0x343: @ irand(Stack[-6], Stack[-1])
0x344: Pop(1)
0x345: Push((int) 0)
0x346: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x348: Push(Stack[-7])
0x349: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x34a: @ irand(Stack[-4], Stack[-7])
0x34b: Pop(0)
0x34c: Push("all")
0x34d: PushEmpty(string, int)
0x34e: Stack[-1] = Stack[-7]
0x34f: Call2 0x4cd

0x350: Pop(1)
0x351: @ PlayAnimation(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: @ WaitForAnimEnd(Stack[-3])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-3] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x375

0x358: GOTO 0x36a

0x359: Push((int) 1)
0x35a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35c: Push((int) 4)
0x35d: @ rand(Stack[-3], Stack[-1])
0x35e: Pop(1)
0x35f: Push((int) 1)
0x360: Pop(1); Push(Stack[-3] + Stack[-1]);
0x361: @ Sleep(Stack[-1], Stack[-2])
0x362: Pop(1)
0x363: Pop(0); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: GOTO 0x375

0x366: GOTO 0x36a

0x367: Push(Stack[-6])
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x375

0x36a: PushEmpty(bool)
0x36b: Call2 0x378

0x36c: Pop(0)
0x36d: Pop(1); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x375

0x370: @ ResetAAS()
0x371: Pop(0)
0x372: Push((int) 1)
0x373: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x374: GOTO 0x337

0x375: @ ResetAAS()
0x376: Pop(0)
0x377: Return(); Pop(14)

0x378: Stack[-1] = (bool) 1
0x379: Return(); Pop(0)

0x37a: @ StopAnimation()
0x37b: Pop(0)
0x37c: @ StopGroup0()
0x37d: Pop(0)
0x37e: Return(); Pop(0)

0x37f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x380: @ GetPosition(Stack[-3])
0x381: Pop(0)
0x382: @@ GetPosition(Stack[-2])
0x383: Pop(0)
0x384: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x385: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x386: Return(); Pop(6)

0x387: PushEmpty(bool, bool)
0x388: @ IsLoaded(Stack[-1])
0x389: Pop(0)
0x38a: Stack[-3] = Stack[-1]
0x38b: Return(); Pop(2)

0x38c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x38d: @@ GetPosition(Stack[-8])
0x38e: Pop(0)
0x38f: @@ GetEyesHeight(Stack[-9])
0x390: Pop(0)
0x391: Push(CvectorIndex(Stack[-8], 1))
0x392: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x393: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x394: @ GetPosition(Stack[-7])
0x395: Pop(0)
0x396: @ GetEyesHeight(Stack[-9])
0x397: Pop(0)
0x398: Push(CvectorIndex(Stack[-7], 1))
0x399: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x39a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x39b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x39c: Push(CvectorIndex(Stack[-6], 1))
0x39d: Stack[-1] = (int) 0
0x39e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x39f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3a0: Pop(1); Push(Sqrt(Stack[-1]))
0x3a1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3a2: Stack[-5] = -Stack[-6]; Pop(0);
0x3a3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3a4: PushEmpty(cvector, cvector)
0x3a5: Push(CVector(0.0, 1.0, 0.0))
0x3a6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3a7: Call2 0x418

0x3a8: Pop(1)
0x3a9: Push((int) 25)
0x3aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ac: Push(CVector(0.0, 10.0, 0.0))
0x3ad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3ae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3af: @ IsOverrideActive(Stack[-2])
0x3b0: Pop(0)
0x3b1: Push(Stack[-2])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-21] = (bool) 0
0x3b4: Return(); Pop(18)

0x3b5: @ StopWorld()
0x3b6: Pop(0)
0x3b7: @ CameraTransit(Stack[-3], Stack[-5])
0x3b8: Pop(0)
0x3b9: Push(CvectorIndex(Stack[-4], 0))
0x3ba: Push(CvectorIndex(Stack[-5], 2))
0x3bb: @ Rotate(Stack[-2], Stack[-1])
0x3bc: Pop(2)
0x3bd: PushEmpty(bool)
0x3be: Call2 0x4cb

0x3bf: Pop(0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c1: GOTO 0x3ca

0x3c2: Push("head")
0x3c3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c4: Pop(1)
0x3c5: Push(Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c7: Push("head")
0x3c8: @ LookAsyncCamera(Stack[-1])
0x3c9: Pop(1)
0x3ca: @ CameraWaitForPlayFinish()
0x3cb: Pop(0)
0x3cc: @ ResumeWorld()
0x3cd: Pop(0)
0x3ce: Stack[-21] = (bool) 1
0x3cf: Return(); Pop(18)

0x3d0: PushEmpty(bool, bool)
0x3d1: @ CameraSwitchToNormal()
0x3d2: Pop(0)
0x3d3: PushEmpty(bool)
0x3d4: Call2 0x4cb

0x3d5: Pop(0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d7: GOTO 0x3e0

0x3d8: Push("head")
0x3d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3da: Pop(1)
0x3db: Push(Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3dd: Push("head")
0x3de: @ UnlookAsync(Stack[-1])
0x3df: Pop(1)
0x3e0: Return(); Pop(2)

0x3e1: PushEmpty(bool, float, float, bool, float, float)
0x3e2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3e3: Pop(0)
0x3e4: Push(Stack[-3])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3e7: Pop(0)
0x3e8: Push((bool) 0)
0x3e9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(1)
0x3eb: GOTO 0x3f0

0x3ec: Push("Can't find lsh animation : ")
0x3ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3ee: @ Trace(Stack[-1])
0x3ef: Pop(1)
0x3f0: Return(); Pop(6)

0x3f1: PushEmpty(bool, float, float, bool, float, float)
0x3f2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3f3: Pop(0)
0x3f4: Push(Stack[-3])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3f7: Pop(0)
0x3f8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3f9: Pop(0)
0x3fa: GOTO 0x3ff

0x3fb: Push("Can't find lsh animation : ")
0x3fc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3fd: @ Trace(Stack[-1])
0x3fe: Pop(1)
0x3ff: Return(); Pop(6)

0x400: PushEmpty(float, cvector, float, cvector)
0x401: @@ GetEyesHeight(Stack[-2])
0x402: Pop(0)
0x403: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x404: Push(CvectorIndex(Stack[-1], 1))
0x405: Stack[-1] = Stack[-3]
0x406: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x407: Push("head")
0x408: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x409: Pop(1)
0x40a: Return(); Pop(4)

0x40b: PushEmpty(bool)
0x40c: Call2 0x4cb

0x40d: Pop(0)
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: @ lshStopSpeech()
0x410: Pop(0)
0x411: Return(); Pop(0)

0x412: PushEmpty(object, object)
0x413: @ self(Stack[-1])
0x414: Pop(0)
0x415: Stack[-3] = Stack[-1]
0x416: Return(); Pop(2)

0x417: Stack[-1] = 0
0x418: PushEmpty(float, float)
0x419: Pop(0); Push(Stack[-3] | Stack[-3]);
0x41a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x41b: Push((float)0.0)
0x41c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x41f: Return(); Pop(2)

0x420: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x421: Return(); Pop(2)

0x422: PushEmpty(int, int)
0x423: @ GetVariable(Stack[-3], Stack[-1])
0x424: Pop(0)
0x425: Stack[-4] = Stack[-1]
0x426: Return(); Pop(2)

0x427: PushEmpty()
0x428: PushEmpty(int, string)
0x429: Stack[-1] = "D_Mission5"
0x42a: Call2 0x422

0x42b: Pop(1)
0x42c: Push((int) 0)
0x42d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x42f: Push("D_Mission5")
0x430: Push((int) 1)
0x431: @ SetVariable(Stack[-2], Stack[-1])
0x432: Pop(2)
0x433: PushEmpty()
0x434: Call2 0x46b

0x435: Pop(0)
0x436: PushEmpty(bool, int)
0x437: Stack[-1] = (int) 30
0x438: Call2 0x4a1

0x439: Pop(2)
0x43a: PushEmpty(bool, int)
0x43b: Stack[-1] = (int) 3
0x43c: Call2 0x4a1

0x43d: Pop(2)
0x43e: PushEmpty(bool, int)
0x43f: Stack[-1] = (int) 4
0x440: Call2 0x4a1

0x441: Pop(2)
0x442: PushEmpty(bool, int)
0x443: Stack[-1] = (int) 5
0x444: Call2 0x4a1

0x445: Pop(2)
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: Push("ood12Littleboy1")
0x449: Push((int) 1)
0x44a: @ SetVariable(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: Push("ood12Littleboy2")
0x44f: Push((int) 1)
0x450: @ SetVariable(Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(int, string)
0x455: Stack[-1] = "ood12Littleboy1"
0x456: Call2 0x422

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
0x461: Stack[-1] = "ood12Littleboy2"
0x462: Call2 0x422

0x463: Pop(1)
0x464: Push((int) 0)
0x465: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-2] = (bool) 1
0x468: Return(); Pop(0)

0x469: Stack[-2] = (bool) 0
0x46a: Return(); Pop(0)

0x46b: PushEmpty(object, object)
0x46c: Push((int) 561)
0x46d: Push((int) 0)
0x46e: Push((int) 530575)
0x46f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: PushEmpty(bool, object, int)
0x472: Stack[-2] = Stack[-4]
0x473: Stack[-1] = (int) -1
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
0x4a1: PushEmpty(object, object, object, object)
0x4a2: PushEmpty(object)
0x4a3: Call2 0x478

0x4a4: Stack[-3] = Stack[-1]
0x4a5: Pop(1)
0x4a6: @@ Find(Stack[-5], Stack[-1])
0x4a7: Pop(0)
0x4a8: Pop(0); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-6] = (bool) 0
0x4ab: Return(); Pop(4)

0x4ac: @@ Remove()
0x4ad: Pop(0)
0x4ae: Stack[-6] = (bool) 1
0x4af: Return(); Pop(4)

0x4b0: Stack[-1] = 0
0x4b1: Stack[-2] = 0
0x4b2: PushEmpty(int, int)
0x4b3: Push("branch")
0x4b4: @ GetVariable(Stack[-1], Stack[-2])
0x4b5: Pop(1)
0x4b6: Push((int) 0)
0x4b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4b9: Stack[-3] = (int) 1
0x4ba: Return(); Pop(2)

0x4bb: GOTO 0x4c1

0x4bc: Push((int) 1)
0x4bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-3] = (int) 2
0x4c0: Return(); Pop(2)

0x4c1: Stack[-3] = (int) 3
0x4c2: Return(); Pop(2)

0x4c3: Stack[-1] = (int) 515560
0x4c4: Return(); Pop(0)

0x4c5: Stack[-1] = (int) 503345
0x4c6: Return(); Pop(0)

0x4c7: Stack[-1] = "ui/NPC_Citizen3.png"
0x4c8: Return(); Pop(0)

0x4c9: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x4ca: Return(); Pop(0)

0x4cb: Stack[-1] = (bool) 0
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(string, string)
0x4ce: Stack[-1] = "idle"
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4d2: Stack[-4] = Stack[-1]
0x4d3: Return(); Pop(2)

0x4d4: PushEmpty(int, bool, int, bool)
0x4d5: Stack[-2] = (int) 0
0x4d6: Push("all")
0x4d7: PushEmpty(string, int)
0x4d8: Stack[-1] = Stack[-5]
0x4d9: Call2 0x4cd

0x4da: Pop(1)
0x4db: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(2)
0x4dd: Pop(0); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: GOTO 0x4e3

0x4e0: Push((int) 1)
0x4e1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4e2: GOTO 0x4d6

0x4e3: Stack[-5] = Stack[-2]
0x4e4: Return(); Pop(4)

